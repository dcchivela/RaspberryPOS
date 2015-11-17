/**************************************************************************
 *   Copyright © 2007-2010 by Miguel Chavez Gamboa                         *
 *   miguel@lemonpos.org                                                   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.         *
 ***************************************************************************/
#include <KLocale>
#include <KMessageBox>
#include <KFileDialog>

#include <QByteArray>
#include <QRegExpValidator>

#include "../../dataAccess/azahar.h"
#include "purchaseeditor.h"


PurchaseEditorUI::PurchaseEditorUI( QWidget *parent )
: QFrame( parent )
{
    setupUi( this );
}

PurchaseEditor::PurchaseEditor( QWidget *parent )
: KDialog( parent )
{
    ui = new PurchaseEditorUI( this );
    setMainWidget( ui );
    setCaption( i18n("Purchase") );
    setButtons( KDialog::Ok|KDialog::Cancel );
    setDefaultButton(KDialog::None);
    ui->btnAddItem->setDefault(true);

    //Set Validators for input boxes
    QRegExp regexpC("[0-9]{1,13}"); //(EAN-13 y EAN-8) .. y productos sin codigo de barras?
    QRegExpValidator * validatorEAN13 = new QRegExpValidator(regexpC, this);
    ui->editCode->setValidator(validatorEAN13);
    ui->editTax->setValidator(new QDoubleValidator(0.00, 999999999999.99, 3,ui->editTax));
    ui->editExtraTaxes->setValidator(new QDoubleValidator(0.00, 999999999999.99, 3,ui->editExtraTaxes));
    ui->editCost->setValidator(new QDoubleValidator(0.00, 999999999999.99, 3, ui->editCost));
    ui->editPoints->setValidator(new QIntValidator(0,999999999, ui->editPoints));
    ui->editFinalPrice->setValidator(new QDoubleValidator(0.00,999999999999.99, 3, ui->editFinalPrice));
    ui->editItemsPerBox->setValidator(new QDoubleValidator(0.00,999999999999.99, 2, ui->editItemsPerBox));
    ui->editPricePerBox->setValidator(new QDoubleValidator(0.00,999999999999.99, 2, ui->editPricePerBox));
    ui->editQty->setValidator(new QDoubleValidator(0.00,999999999999.99, 2, ui->editQty));

    connect( ui->btnPhoto          , SIGNAL( clicked() ), this, SLOT( changePhoto() ) );
    connect( ui->btnCalculatePrice , SIGNAL( clicked() ), this, SLOT( calculatePrice() ) );
    connect( ui->editItemsPerBox , SIGNAL( textEdited(const QString &) ), this, SLOT( calculatePrice() ) );
    connect( ui->editPricePerBox , SIGNAL( textEdited(const QString &) ), this, SLOT( calculatePrice() ) );
    connect( ui->editCost , SIGNAL( textEdited(const QString &) ), this, SLOT( calculatePrice() ) );
    connect( ui->editTax , SIGNAL( textEdited(const QString &) ), this, SLOT( calculatePrice() ) );
    connect( ui->editExtraTaxes , SIGNAL( textEdited(const QString &) ), this, SLOT( calculatePrice() ) );
    connect( ui->editUtility , SIGNAL( textEdited(const QString &) ), this, SLOT( calculatePrice() ) );
    connect( ui->editCode, SIGNAL(textEdited(const QString &)), SLOT(checkIfCodeExists()));
    connect( ui->editCode, SIGNAL(returnPressed()), ui->editQty, SLOT(setFocus()));
    connect( ui->btnAddItem, SIGNAL( clicked() ), this, SLOT( addItemToList() ) );
    connect(ui->groupBoxedItem, SIGNAL(toggled(bool)), this, SLOT(focusItemsPerBox(bool)) );

    connect(ui->btnRemoveItem, SIGNAL( clicked() ), SLOT( deleteSelectedItem() ) );

    ui->chIsAGroup->setDisabled(true);
    

    status = estatusNormal;
    productExists = false;
    productsHash.clear();
    resetEdits();
    totalBuy = 0.0;
    itemCount = 0.0;
    totalTaxes = 0.0;
    QTimer::singleShot(500, this, SLOT(setupTable()));
}

PurchaseEditor::~PurchaseEditor()
{
    delete ui;
}

void PurchaseEditor::focusItemsPerBox(bool set)
{
  if (set) {
    ui->editItemsPerBox->setFocus();
  }
  else ui->editCost->setFocus();
}

void PurchaseEditor::setDb(QSqlDatabase database)
{
  db = database;
  if (!db.isOpen()) db.open();
  populateCategoriesCombo();
  populateMeasuresCombo();
}

void PurchaseEditor::populateCategoriesCombo()
{
  QSqlQuery query(db);
  Azahar *myDb = new Azahar;
  myDb->setDatabase(db);
  ui->categoriesCombo->addItems(myDb->getCategoriesList());
}

void PurchaseEditor::populateMeasuresCombo()
{
  QSqlQuery query(db);
  Azahar *myDb = new Azahar;
  myDb->setDatabase(db);
  ui->measuresCombo->addItems(myDb->getMeasuresList());
}

int PurchaseEditor::getCategoryId()
{
  QSqlQuery query(db);
  int code=-1;
  QString currentText = ui->categoriesCombo->currentText();
  Azahar *myDb = new Azahar;
  myDb->setDatabase(db);
  code = myDb->getCategoryId(currentText);
  return code;
}


int PurchaseEditor::getMeasureId()
{
  QSqlQuery query(db);
  int code=-1;
  QString currentText = ui->measuresCombo->currentText();
  Azahar *myDb = new Azahar;
  myDb->setDatabase(db);
  code = myDb->getMeasureId(currentText);
  return code;
}


void PurchaseEditor::setCategory(QString str)
{
 int idx = ui->categoriesCombo->findText(str,Qt::MatchCaseSensitive);
 if (idx > -1) ui->categoriesCombo->setCurrentIndex(idx);
 else {
  qDebug()<<"Str not found:"<<str;
  }
}

void PurchaseEditor::setCategory(int i)
{
 QString text = getCategoryStr(i);
 setCategory(text);
}

void PurchaseEditor::setMeasure(int i)
{
 QString text = getMeasureStr(i);
 setMeasure(text);
}

void PurchaseEditor::setMeasure(QString str)
{
int idx = ui->measuresCombo->findText(str,Qt::MatchCaseSensitive);
 if (idx > -1) ui->measuresCombo->setCurrentIndex(idx);
 else {
  qDebug()<<"Str not found:"<<str;
  }
}

QString PurchaseEditor::getCategoryStr(int c)
{
  Azahar *myDb = new Azahar;
  myDb->setDatabase(db);
  QString str = myDb->getCategoryStr(c);
  return str;
}

QString PurchaseEditor::getMeasureStr(int c)
{
  Azahar *myDb = new Azahar;
  myDb->setDatabase(db);
  QString str = myDb->getMeasureStr(c);
  delete myDb;
  return str;
}

void PurchaseEditor::changePhoto()
{
 QString fname = KFileDialog::getOpenFileName();
  if (!fname.isEmpty()) {
    QPixmap p = QPixmap(fname);
    setPhoto(p);
  }
}

void PurchaseEditor::calculatePrice()
{
 double finalPrice=0.0;
 bool costOk,profitOk,taxOk,etaxOk;
 
 if (ui->editCost->text().isEmpty() && !ui->groupBoxedItem->isChecked() ) {
   ui->editCost->setText("0.0");
   //ui->editCost->setFocus();
   ui->editCost->setStyleSheet("background-color: rgb(255,100,0); color:white; selection-color: white; font-weight:bold;");
   costOk = false;
 } else {
   ui->editCost->setStyleSheet("");
   costOk=true;
 }
 
 if (ui->editUtility->text().isEmpty()) {
   //ui->editUtility->setFocus();
   ui->editUtility->setText("0.0");
   ui->editUtility->setStyleSheet("background-color: rgb(255,100,0); color:white; selection-color: white; font-weight:bold;");
   profitOk=false;
 } else {
   ui->editUtility->setStyleSheet("");
   profitOk=true;
 }
 
 if (ui->editTax->text().isEmpty()) {
   ui->editTax->setText("0.0");
   //ui->editTax->setFocus();
   ui->editTax->selectAll();
   ui->editTax->setStyleSheet("background-color: rgb(255,100,0); color:white; selection-color: white; font-weight:bold;");
   taxOk=false;
 } else {
   ui->editTax->setStyleSheet("");
   taxOk=true;
 }

 if (ui->editExtraTaxes->text().isEmpty()) {
   ui->editExtraTaxes->setText("0.0");
   //ui->editExtraTaxes->setFocus();
   ui->editExtraTaxes->selectAll();
   ui->editExtraTaxes->setStyleSheet("background-color: rgb(255,100,0); color:white; selection-color: white; font-weight:bold;");
   etaxOk = false;
  } else {
    etaxOk = true;
    ui->editExtraTaxes->setStyleSheet("");
  }

  //now check which are ZEROs
//   if (!ui->editExtraTaxes->text().isEmpty() && ui->editExtraTaxes->text().toDouble()<=0)
//     ui->editExtraTaxes->setStyleSheet("background-color: rgb(255,100,0); color:white; selection-color: white; font-weight:bold;");
//   else ui->editExtraTaxes->setStyleSheet("");
  if (!ui->editTax->text().isEmpty() && ui->editTax->text().toDouble()<=0)
    ui->editTax->setStyleSheet("background-color: rgb(255,100,0); color:white; selection-color: white; font-weight:bold;");
  else ui->editTax->setStyleSheet("");
  if (!ui->editUtility->text().isEmpty() && ui->editUtility->text().toDouble()<=0)
    ui->editUtility->setStyleSheet("background-color: rgb(255,100,0); color:white; selection-color: white; font-weight:bold;");
  else ui->editUtility->setStyleSheet("");
  if (!ui->editCost->text().isEmpty() && ui->editCost->text().toDouble()<=0)
    ui->editCost->setStyleSheet("background-color: rgb(255,100,0); color:white; selection-color: white; font-weight:bold;");
  else ui->editCost->setStyleSheet("");

  if (costOk && profitOk && taxOk && etaxOk ) {
  //TODO: if TAXes are included in cost...
  double cWOTax = 0;
  double tax     = ui->editTax->text().toDouble();
  double tax2    = ui->editExtraTaxes->text().toDouble();
  double utility = ui->editUtility->text().toDouble();

  Azahar *myDb = new Azahar;
  myDb->setDatabase(db);

  // We assume that tax rules for prices also apply to costs.
  if (myDb->getConfigTaxIsIncludedInPrice())
    cWOTax= (ui->editCost->text().toDouble())/(1+((tax+tax2)/100));
  else
    cWOTax = ui->editCost->text().toDouble();
  
  double cost    = cWOTax;
  utility = ((utility/100)*cost);
  double cu=cost+utility;
  //We need the tax recalculated from the costs+utility, this time taxes are expressed in $
  tax     = ((tax/100)*(cost)); ///NOTE fixed:when paying for a product we pay taxes for the cost not the cost+profit
  tax2    = ((tax2/100)*(cost));


  if (ui->groupBoxedItem->isChecked()){
    double itemsPerBox = 0;
    double pricePerBox = 0;
    if (!ui->editItemsPerBox->text().isEmpty()) itemsPerBox = ui->editItemsPerBox->text().toDouble();
    if (!ui->editPricePerBox->text().isEmpty()) pricePerBox = ui->editPricePerBox->text().toDouble();
    if (!ui->editItemsPerBox->text().isEmpty() || !ui->editPricePerBox->text().isEmpty()) return;
    tax     = ui->editTax->text().toDouble();
    tax2    = ui->editExtraTaxes->text().toDouble();
    if (myDb->getConfigTaxIsIncludedInPrice())
      cWOTax= (pricePerBox/itemsPerBox)/(1+((tax+tax2)/100));
    else
      cWOTax = pricePerBox/itemsPerBox;

    cost = cWOTax;
    ui->editCost->setText(QString::number(cost));
    utility = ((ui->editUtility->text().toDouble()/100)*cost);
    cu = cost + utility;
    tax     = ((tax/100)*(cost));///NOTE fixed:when paying for a product we pay taxes for the cost not the cost+profit
    tax2    = ((tax2/100)*(cost));
    finalPrice = cu + tax + tax2;
    
  }
  else finalPrice = cost + utility + tax + tax2;

  qDebug()<<"cWOTax ="<<cWOTax<<" tax1="<<tax<<" tax2="<<tax2<<" FinalPrice:"<<finalPrice;

  ui->editFinalPrice->setText(QString::number(finalPrice));
  ui->editFinalPrice->selectAll();
  delete myDb;
  }
}


void PurchaseEditor::checkIfCodeExists()
{
  Azahar *myDb = new Azahar;
  myDb->setDatabase(db);
  gelem = "";
  QString codeStr = ui->editCode->text();
  if (codeStr.isEmpty()) codeStr = "0";
  ProductInfo pInfo = myDb->getProductInfo(codeStr);
  if (pInfo.code ==0 && pInfo.desc=="Ninguno") productExists = false;
  if (pInfo.code > 0) {
    status = estatusMod;
    productExists = true;
    qtyOnDb  = pInfo.stockqty;
    //Prepopulate dialog...
    ui->editDesc->setText(pInfo.desc);
    setCategory(pInfo.category);
    setMeasure(pInfo.units);
    ui->editCost->setText(QString::number(pInfo.cost));
    ui->editTax->setText(QString::number(pInfo.tax));
    ui->editExtraTaxes->setText(QString::number(pInfo.extratax));
    ui->editFinalPrice->setText(QString::number(pInfo.price));
    ui->editPoints->setText(QString::number(pInfo.points));
    ui->chIsAGroup->setChecked(pInfo.isAGroup);
    gelem = pInfo.groupElementsStr;
    if (!(pInfo.photo).isEmpty()) {
      QPixmap photo;
      photo.loadFromData(pInfo.photo);
      setPhoto(photo);
    }
  } else {
    qDebug()<< "no product found with code "<<codeStr;
    qulonglong codeSaved = getCode();
    resetEdits();
    setCode(codeSaved);
  }
}


void PurchaseEditor::slotButtonClicked(int button)
{
  if (button == KDialog::Ok && itemCount>0) {
    if (status == estatusNormal) QDialog::accept();
    else {
      qDebug()<< "Button = OK, status == statusMOD";
      done(estatusMod);
    }
  }
  else {
    if (button == KDialog::Cancel ) {
      QDialog::reject();
    }
  }
}


void PurchaseEditor::setupTable() {
  QSize tableSize = ui->tableView->size();
  ui->tableView->horizontalHeader()->resizeSection(0, (tableSize.width()/7));
  ui->tableView->horizontalHeader()->resizeSection(1, (tableSize.width()/7)*3);
  ui->tableView->horizontalHeader()->resizeSection(2,(tableSize.width()/7)*1.4);
  ui->tableView->horizontalHeader()->resizeSection(3,(tableSize.width()/7)*1.4);
}


void PurchaseEditor::addItemToList()
{
  ProductInfo pInfo;
  Azahar *myDb = new Azahar;
  myDb->setDatabase(db);
  bool ok=false;

  if (ui->editCode->text().isEmpty()) ui->editCode->setFocus();
  else if (ui->editDesc->text().isEmpty()) ui->editDesc->setFocus();
  else if (ui->editPoints->text().isEmpty()) ui->editPoints->setFocus();
  else if (ui->editCost->text().isEmpty()) ui->editCost->setFocus();
  else if (ui->editTax->text().isEmpty()) ui->editTax->setFocus();
  else if (ui->editFinalPrice->text().isEmpty()) ui->editFinalPrice->setFocus();
  else if (ui->editQty->text().isEmpty() || ui->editQty->text()=="0") ui->editQty->setFocus();
  else if ((ui->editUtility->text().isEmpty() && ui->editFinalPrice->text().isEmpty()) || ui->editFinalPrice->text().toDouble()<=ui->editCost->text().toDouble() ) ui->editFinalPrice->setFocus();
  else if (ui->groupBoxedItem->isChecked() && (ui->editItemsPerBox->text().isEmpty() || ui->editItemsPerBox->text()=="0"))  ui->editItemsPerBox->setFocus();
  else if (ui->groupBoxedItem->isChecked() && (ui->editPricePerBox->text().isEmpty() || ui->editPricePerBox->text()=="0")) ui->editPricePerBox->setFocus();
  else ok = true;

  if (ok) {
    ProductInfo info = myDb->getProductInfo( QString::number( getCode() ) );
    //FIX BUG: dont allow enter new products.. dont know why? new code on 'continue' statement.
    if (info.code == 0) { //new product
      info.code = getCode();
      info.stockqty = 0; //new product
      info.lastProviderId=1; //for now.. fixme in the future
    }
    //update p.info from the dialog
    info.desc    = getDescription();
    info.price   = getPrice();
    info.cost    = getCost();
    info.tax     = getTax1();
    info.extratax= getTax2();
    info.photo   = getPhotoBA();
    info.units   = getMeasureId();
    info.category= getCategoryId();
    info.utility = getProfit();
    info.points  = getPoints();
    info.purchaseQty = getPurchaseQty();
    info.validDiscount = productExists; //used to check if product is already on db.

    if (info.isAGroup) {
      // get each product fo the group/pack
      QStringList list = gelem.split(",");
      for (int i=0; i<list.count(); ++i) {
        QStringList tmp = list.at(i).split("/");
        if (tmp.count() == 2) { //ok 2 fields
          qulonglong  code  = tmp.at(0).toULongLong();
          pInfo = myDb->getProductInfo(QString::number(code));
          pInfo.purchaseQty = getPurchaseQty();
          pInfo.validDiscount = true; // all grouped products exists
          insertProduct(pInfo); ///inserting each product of the group
        } // correct fields
      }//for each element
    } else insertProduct(info);

    resetEdits();
    ui->editCode->setFocus();
  }
}

void PurchaseEditor::insertProduct(ProductInfo info)
{
  //When a product is already on list, increment qty.
  bool existed = false;
  if (info.code>0) {
    if (productsHash.contains(info.code)) {
      info = productsHash.take(info.code); //re get it from hash
      info.purchaseQty += getPurchaseQty();
      itemCount += getPurchaseQty();
      totalBuy = totalBuy + info.cost*getPurchaseQty();
      existed = true;
    } else {
      itemCount += info.purchaseQty;
      totalBuy = totalBuy + info.cost*info.purchaseQty;
    }

    //calculate taxes for this item. Calculated from the costs.
    Azahar *myDb = new Azahar;
    myDb->setDatabase(db);
    double cWOTax = 0;
    if (myDb->getConfigTaxIsIncludedInPrice())
      cWOTax= (info.cost)/(1+((info.tax+info.extratax)/100));
    else
      cWOTax = info.cost;
    double tax = cWOTax*info.purchaseQty*(info.tax/100);
    double tax2= cWOTax*info.purchaseQty*(info.extratax/100);
    totalTaxes += tax + tax2; // add this product taxes to the total taxes in the purchase.
    qDebug()<<"Total taxes updated:"<<totalTaxes<<" Taxes for this product:"<<tax+tax2;
    delete myDb;
    
    double finalCount = info.purchaseQty + info.stockqty;
    info.groupElementsStr=""; //grouped products cannot be a group.
    //insert item to productsHash
    productsHash.insert(info.code, info);
    //insert item to ListView

    if (!existed) {
      int rowCount = ui->tableView->rowCount();
      ui->tableView->insertRow(rowCount);
      ui->tableView->setItem(rowCount, 0, new QTableWidgetItem(QString::number(info.code)));
      ui->tableView->setItem(rowCount, 1, new QTableWidgetItem(info.desc));
      ui->tableView->setItem(rowCount, 2, new QTableWidgetItem(QString::number(info.purchaseQty)));
      ui->tableView->setItem(rowCount, 3, new QTableWidgetItem(QString::number(finalCount)));
    } else {
      //simply update the groupView with the new qty
      for (int ri=0; ri<ui->tableView->rowCount(); ++ri)
      {
        QTableWidgetItem * item = ui->tableView->item(ri, 1);
        QString name = item->data(Qt::DisplayRole).toString();
        if (name == info.desc) {
          //update
          QTableWidgetItem *itemQ = ui->tableView->item(ri, 2);
          itemQ->setData(Qt::EditRole, QVariant(QString::number(info.purchaseQty)));
          itemQ = ui->tableView->item(ri, 3);
          itemQ->setData(Qt::EditRole, QVariant(QString::number(finalCount)));
          continue; //HEY PURIST, WHEN I GOT SOME TIME I WILL CLEAN IT
        }
      }
    }
    
    ui->tableView->horizontalHeader()->setResizeMode(QHeaderView::Interactive);
    ui->tableView->resizeRowsToContents();
    //totalBuy = totalBuy + info.cost*info.purchaseQty;
    //itemCount = itemCount + info.purchaseQty;

    //update info on group caption
    ui->groupBox->setTitle( i18n("Items in this purchase [ %1  items,  %2 ]",itemCount,
                                 KGlobal::locale()->formatMoney(totalBuy, QString(), 2)
                                 ) );
    
    qDebug()<<"totalBuy until now:"<<totalBuy<<" itemCount:"<<itemCount<<"info.cost:"<<info.cost<<"info.purchaseQty:"<<info.purchaseQty;
  }  else  qDebug()<<"Item "<<info.code<<" already on hash";
}

void PurchaseEditor::deleteSelectedItem() //added on dec 3, 2009
{
  if (ui->tableView->currentRow()!=-1) {
    int row = ui->tableView->currentRow();
    QTableWidgetItem *item = ui->tableView->item(row, colCode);
    qulonglong code = item->data(Qt::DisplayRole).toULongLong();
    if (productsHash.contains(code)) {
      //delete it from hash and from view
      ProductInfo info = productsHash.take(code);
      ui->tableView->removeRow(row);
      //update qty and $ of the purchase
      totalBuy  -= (info.cost*info.purchaseQty);
      itemCount -= info.purchaseQty;
      //calculate taxes for this item. Calculated from the costs.
      Azahar *myDb = new Azahar;
      myDb->setDatabase(db);
      double cWOTax = 0;
      if (myDb->getConfigTaxIsIncludedInPrice())
        cWOTax= (info.cost)/(1+((info.tax+info.extratax)/100));
      else
        cWOTax = info.cost;
      double tax = cWOTax*info.purchaseQty*(info.tax/100);
      double tax2= cWOTax*info.purchaseQty*(info.extratax/100);
      totalTaxes = totalTaxes - tax - tax2;
      qDebug()<<"Total taxes updated:"<<totalTaxes;
      delete myDb;
      ui->groupBox->setTitle( i18n("Items in this purchase [ %1  items,  %2 ]",itemCount,
                                   KGlobal::locale()->formatMoney(totalBuy, QString(), 2)
                                   ) );
    }
  }
}

void PurchaseEditor::resetEdits()
{
  ui->editCode->setText("");
  ui->editDesc->setText("");
  ui->editCost->setText("");
  ui->editTax->setText("");
  ui->editExtraTaxes->setText("0.0");
  ui->editFinalPrice->setText("");
  ui->editUtility->setText("");
  qtyOnDb = 0;
  pix = QPixmap(0,0); //null pixmap.
  ui->labelPhoto->setText(i18n("No Photo"));
  ui->editPoints->setText("0");
  ui->editItemsPerBox->setText("");
  ui->editPricePerBox->setText("");
  ui->editQty->setText("");
  ui->chIsAGroup->setChecked(false);
  gelem = "";
}

double PurchaseEditor::getPurchaseQty()
{
  if (ui->groupBoxedItem->isChecked()) {
    if ( ui->editItemsPerBox->text().isEmpty() ) return ui->editQty->text().toDouble();
    else return (ui->editQty->text().toDouble())*(ui->editItemsPerBox->text().toDouble());
  }
  else return ui->editQty->text().toDouble();
}

void PurchaseEditor::setIsAGroup(bool value)
{
  ui->chIsAGroup->setChecked(value);
}

#include "purchaseeditor.moc"
