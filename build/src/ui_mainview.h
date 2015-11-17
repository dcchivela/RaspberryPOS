#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created: Mon Apr 20 14:00:13 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableView>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "../../mibitWidgets/mibitlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_mainview
{
public:
    QSplitter *gridSplitter;
    QHBoxLayout *hboxLayout;
    QSplitter *splitter;
    QFrame *frameLeft;
    QVBoxLayout *vboxLayout;
    QStackedWidget *groupWidgets;
    QWidget *pageIntro;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout1;
    QLabel *label;
    MibitLineEdit *editItemCode;
    QGroupBox *groupDetails;
    QVBoxLayout *vboxLayout2;
    QLabel *labelDetailDesc;
    QLabel *labelDetailPrice;
    QLabel *labelDetailDiscount;
    QLabel *labelDetailTotalTaxes;
    QLabel *labelDetailTax1;
    QLabel *labelDetailTax2;
    QLabel *labelDetailUnits;
    QLabel *labelDetailPoints;
    QLabel *labelDetailPhoto;
    QGroupBox *groupPayment;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *hboxLayout2;
    QRadioButton *checkCash;
    QRadioButton *checkCard;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelCashAmount;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *editAmount;
    QPushButton *btnCurrency;
    QSpacerItem *spacerItem;
    QWidget *page_4;
    QVBoxLayout *vboxLayout4;
    QLabel *labelCardNumber;
    QLineEdit *editCardNumber;
    QLabel *labelAuthNumber;
    QLineEdit *editCardAuthNumber;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupSaleDate;
    QVBoxLayout *verticalLayout;
    QDateTimeEdit *editTransactionDate;
    QPushButton *btnChangeSaleDate;
    QWidget *pageEnterCode;
    QWidget *pageSearchItem;
    QVBoxLayout *vboxLayout5;
    QLabel *labelBanner;
    QStackedWidget *mainPanel;
    QWidget *page_Main;
    QHBoxLayout *hboxLayout3;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QSplitter *splitterGrid;
    QFrame *frameGridView;
    QGridLayout *gridLayout;
    QRadioButton *rbFilterByPopularity;
    QRadioButton *rbFilterByDesc;
    QLineEdit *editFilterByDesc;
    QRadioButton *rbFilterByCategory;
    QComboBox *comboFilterByCategory;
    QListView *listView;
    QTableWidget *tableWidget;
    QGroupBox *groupTotals;
    QGridLayout *gridLayout1;
    QLabel *labelTotalpre;
    QLabel *labelTotal;
    QLabel *labelChangepre;
    QLabel *labelChange;
    QLabel *lblSubtotalPre;
    QLabel *lblSubtotal;
    QLabel *lblSaleTaxesPre;
    QLabel *lblSaleTaxes;
    QGroupBox *groupClient;
    QGridLayout *gridLayout2;
    QLabel *lblClientPhoto;
    QVBoxLayout *vboxLayout6;
    QComboBox *comboClients;
    QLabel *lblClientDiscount;
    QLabel *labelClientDiscounted;
    QWidget *page_Search;
    QGridLayout *gridLayout3;
    QLabel *labelImageSearch;
    QPushButton *buttonSearchDone;
    QLabel *label_5;
    QLineEdit *editItemDescSearch;
    QLabel *labelSearchMsg;
    QTableWidget *tableSearch;
    QWidget *pageTickets;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *lblTicketDatePicker;
    QDateEdit *editTicketDatePicker;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnTicketPrint;
    QPushButton *btnTicketDone;
    QTableView *ticketView;
    QWidget *pageReturnProduct;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QGridLayout *gridLayout4;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_7;
    QLabel *label_10;
    QLabel *label_8;
    QLabel *label_11;
    QSpacerItem *verticalSpacer_2;
    QFrame *line;
    QLabel *label_3;
    QTableWidget *tableReturnProducts;
    QGroupBox *groupBox;
    QLabel *lblReturnProdQty;
    QWidget *page_Adds;
    QFrame *frameCurrency;
    QGridLayout *gridLayout_3;
    QLabel *label_15;
    QComboBox *comboCurrency;
    QLabel *label_12;
    QLineEdit *editConvFactor;
    QLabel *label_13;
    QLineEdit *editConvQty;
    QLabel *label_14;
    QLineEdit *editConvResult;
    QPushButton *btnConvCancel;
    QPushButton *btnConvOk;

    void setupUi(QWidget *mainview)
    {
        if (mainview->objectName().isEmpty())
            mainview->setObjectName(QString::fromUtf8("mainview"));
        mainview->resize(1005, 620);
        gridSplitter = new QSplitter(mainview);
        gridSplitter->setObjectName(QString::fromUtf8("gridSplitter"));
        gridSplitter->setGeometry(QRect(0, 0, 100, 30));
        gridSplitter->setOrientation(Qt::Vertical);
        hboxLayout = new QHBoxLayout(mainview);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        splitter = new QSplitter(mainview);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        frameLeft = new QFrame(splitter);
        frameLeft->setObjectName(QString::fromUtf8("frameLeft"));
        frameLeft->setFrameShape(QFrame::StyledPanel);
        frameLeft->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(frameLeft);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupWidgets = new QStackedWidget(frameLeft);
        groupWidgets->setObjectName(QString::fromUtf8("groupWidgets"));
        pageIntro = new QWidget();
        pageIntro->setObjectName(QString::fromUtf8("pageIntro"));
        vboxLayout1 = new QVBoxLayout(pageIntro);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label = new QLabel(pageIntro);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout1->addWidget(label);

        editItemCode = new MibitLineEdit(pageIntro);
        editItemCode->setObjectName(QString::fromUtf8("editItemCode"));
        editItemCode->setFrame(true);
        editItemCode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout1->addWidget(editItemCode);


        vboxLayout1->addLayout(hboxLayout1);

        groupDetails = new QGroupBox(pageIntro);
        groupDetails->setObjectName(QString::fromUtf8("groupDetails"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupDetails->sizePolicy().hasHeightForWidth());
        groupDetails->setSizePolicy(sizePolicy);
        groupDetails->setMinimumSize(QSize(0, 0));
        groupDetails->setStyleSheet(QString::fromUtf8(""));
        vboxLayout2 = new QVBoxLayout(groupDetails);
        vboxLayout2->setSpacing(0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(2, 2, 2, 3);
        labelDetailDesc = new QLabel(groupDetails);
        labelDetailDesc->setObjectName(QString::fromUtf8("labelDetailDesc"));
        labelDetailDesc->setStyleSheet(QString::fromUtf8(""));
        labelDetailDesc->setFrameShape(QFrame::StyledPanel);
        labelDetailDesc->setWordWrap(true);
        labelDetailDesc->setIndent(6);

        vboxLayout2->addWidget(labelDetailDesc);

        labelDetailPrice = new QLabel(groupDetails);
        labelDetailPrice->setObjectName(QString::fromUtf8("labelDetailPrice"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelDetailPrice->sizePolicy().hasHeightForWidth());
        labelDetailPrice->setSizePolicy(sizePolicy1);
        labelDetailPrice->setStyleSheet(QString::fromUtf8(""));
        labelDetailPrice->setFrameShape(QFrame::NoFrame);
        labelDetailPrice->setIndent(8);

        vboxLayout2->addWidget(labelDetailPrice);

        labelDetailDiscount = new QLabel(groupDetails);
        labelDetailDiscount->setObjectName(QString::fromUtf8("labelDetailDiscount"));
        sizePolicy1.setHeightForWidth(labelDetailDiscount->sizePolicy().hasHeightForWidth());
        labelDetailDiscount->setSizePolicy(sizePolicy1);
        labelDetailDiscount->setStyleSheet(QString::fromUtf8(""));
        labelDetailDiscount->setFrameShape(QFrame::NoFrame);
        labelDetailDiscount->setIndent(12);

        vboxLayout2->addWidget(labelDetailDiscount);

        labelDetailTotalTaxes = new QLabel(groupDetails);
        labelDetailTotalTaxes->setObjectName(QString::fromUtf8("labelDetailTotalTaxes"));
        labelDetailTotalTaxes->setStyleSheet(QString::fromUtf8(""));
        labelDetailTotalTaxes->setFrameShape(QFrame::NoFrame);
        labelDetailTotalTaxes->setIndent(12);

        vboxLayout2->addWidget(labelDetailTotalTaxes);

        labelDetailTax1 = new QLabel(groupDetails);
        labelDetailTax1->setObjectName(QString::fromUtf8("labelDetailTax1"));
        sizePolicy1.setHeightForWidth(labelDetailTax1->sizePolicy().hasHeightForWidth());
        labelDetailTax1->setSizePolicy(sizePolicy1);
        labelDetailTax1->setStyleSheet(QString::fromUtf8(""));
        labelDetailTax1->setFrameShape(QFrame::NoFrame);
        labelDetailTax1->setIndent(18);

        vboxLayout2->addWidget(labelDetailTax1);

        labelDetailTax2 = new QLabel(groupDetails);
        labelDetailTax2->setObjectName(QString::fromUtf8("labelDetailTax2"));
        sizePolicy1.setHeightForWidth(labelDetailTax2->sizePolicy().hasHeightForWidth());
        labelDetailTax2->setSizePolicy(sizePolicy1);
        labelDetailTax2->setStyleSheet(QString::fromUtf8(""));
        labelDetailTax2->setFrameShape(QFrame::NoFrame);
        labelDetailTax2->setIndent(18);

        vboxLayout2->addWidget(labelDetailTax2);

        labelDetailUnits = new QLabel(groupDetails);
        labelDetailUnits->setObjectName(QString::fromUtf8("labelDetailUnits"));
        sizePolicy1.setHeightForWidth(labelDetailUnits->sizePolicy().hasHeightForWidth());
        labelDetailUnits->setSizePolicy(sizePolicy1);
        labelDetailUnits->setStyleSheet(QString::fromUtf8(""));
        labelDetailUnits->setFrameShape(QFrame::NoFrame);
        labelDetailUnits->setIndent(12);

        vboxLayout2->addWidget(labelDetailUnits);

        labelDetailPoints = new QLabel(groupDetails);
        labelDetailPoints->setObjectName(QString::fromUtf8("labelDetailPoints"));
        labelDetailPoints->setIndent(12);

        vboxLayout2->addWidget(labelDetailPoints);

        labelDetailPhoto = new QLabel(groupDetails);
        labelDetailPhoto->setObjectName(QString::fromUtf8("labelDetailPhoto"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelDetailPhoto->sizePolicy().hasHeightForWidth());
        labelDetailPhoto->setSizePolicy(sizePolicy2);
        labelDetailPhoto->setStyleSheet(QString::fromUtf8(""));
        labelDetailPhoto->setFrameShape(QFrame::StyledPanel);
        labelDetailPhoto->setScaledContents(false);
        labelDetailPhoto->setAlignment(Qt::AlignCenter);
        labelDetailPhoto->setIndent(0);

        vboxLayout2->addWidget(labelDetailPhoto);


        vboxLayout1->addWidget(groupDetails);

        groupPayment = new QGroupBox(pageIntro);
        groupPayment->setObjectName(QString::fromUtf8("groupPayment"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupPayment->sizePolicy().hasHeightForWidth());
        groupPayment->setSizePolicy(sizePolicy3);
        groupPayment->setMinimumSize(QSize(0, 0));
        groupPayment->setAutoFillBackground(false);
        groupPayment->setStyleSheet(QString::fromUtf8(""));
        vboxLayout3 = new QVBoxLayout(groupPayment);
        vboxLayout3->setSpacing(1);
        vboxLayout3->setContentsMargins(1, 1, 1, 1);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        checkCash = new QRadioButton(groupPayment);
        checkCash->setObjectName(QString::fromUtf8("checkCash"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(checkCash->sizePolicy().hasHeightForWidth());
        checkCash->setSizePolicy(sizePolicy4);
        checkCash->setMaximumSize(QSize(100, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/images/money.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkCash->setIcon(icon);
        checkCash->setChecked(true);

        hboxLayout2->addWidget(checkCash);

        checkCard = new QRadioButton(groupPayment);
        checkCard->setObjectName(QString::fromUtf8("checkCard"));
        sizePolicy4.setHeightForWidth(checkCard->sizePolicy().hasHeightForWidth());
        checkCard->setSizePolicy(sizePolicy4);
        checkCard->setMinimumSize(QSize(0, 0));
        checkCard->setMaximumSize(QSize(100, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/images/card.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkCard->setIcon(icon1);

        hboxLayout2->addWidget(checkCard);


        vboxLayout3->addLayout(hboxLayout2);

        stackedWidget = new QStackedWidget(groupPayment);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(0, 0));
        stackedWidget->setMaximumSize(QSize(16000, 16000));
        stackedWidget->setBaseSize(QSize(0, 0));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->setFrameShape(QFrame::StyledPanel);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        labelCashAmount = new QLabel(page_3);
        labelCashAmount->setObjectName(QString::fromUtf8("labelCashAmount"));
        sizePolicy3.setHeightForWidth(labelCashAmount->sizePolicy().hasHeightForWidth());
        labelCashAmount->setSizePolicy(sizePolicy3);
        labelCashAmount->setMaximumSize(QSize(500, 30));

        verticalLayout_4->addWidget(labelCashAmount);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        editAmount = new QLineEdit(page_3);
        editAmount->setObjectName(QString::fromUtf8("editAmount"));
        sizePolicy1.setHeightForWidth(editAmount->sizePolicy().hasHeightForWidth());
        editAmount->setSizePolicy(sizePolicy1);
        editAmount->setMinimumSize(QSize(20, 0));
        editAmount->setMaximumSize(QSize(16777215, 16777215));
        editAmount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(editAmount);

        btnCurrency = new QPushButton(page_3);
        btnCurrency->setObjectName(QString::fromUtf8("btnCurrency"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(24);
        sizePolicy5.setVerticalStretch(24);
        sizePolicy5.setHeightForWidth(btnCurrency->sizePolicy().hasHeightForWidth());
        btnCurrency->setSizePolicy(sizePolicy5);
        btnCurrency->setMinimumSize(QSize(24, 24));
        btnCurrency->setMaximumSize(QSize(24, 24));

        horizontalLayout_2->addWidget(btnCurrency);


        verticalLayout_4->addLayout(horizontalLayout_2);

        spacerItem = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_4->addItem(spacerItem);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        vboxLayout4 = new QVBoxLayout(page_4);
        vboxLayout4->setContentsMargins(4, 4, 4, 4);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        labelCardNumber = new QLabel(page_4);
        labelCardNumber->setObjectName(QString::fromUtf8("labelCardNumber"));
        sizePolicy3.setHeightForWidth(labelCardNumber->sizePolicy().hasHeightForWidth());
        labelCardNumber->setSizePolicy(sizePolicy3);

        vboxLayout4->addWidget(labelCardNumber);

        editCardNumber = new QLineEdit(page_4);
        editCardNumber->setObjectName(QString::fromUtf8("editCardNumber"));
        sizePolicy1.setHeightForWidth(editCardNumber->sizePolicy().hasHeightForWidth());
        editCardNumber->setSizePolicy(sizePolicy1);
        editCardNumber->setMinimumSize(QSize(60, 0));
        editCardNumber->setMaximumSize(QSize(199, 16777215));
        editCardNumber->setCursorPosition(19);

        vboxLayout4->addWidget(editCardNumber);

        labelAuthNumber = new QLabel(page_4);
        labelAuthNumber->setObjectName(QString::fromUtf8("labelAuthNumber"));

        vboxLayout4->addWidget(labelAuthNumber);

        editCardAuthNumber = new QLineEdit(page_4);
        editCardAuthNumber->setObjectName(QString::fromUtf8("editCardAuthNumber"));

        vboxLayout4->addWidget(editCardAuthNumber);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout4->addItem(verticalSpacer);

        stackedWidget->addWidget(page_4);

        vboxLayout3->addWidget(stackedWidget);


        vboxLayout1->addWidget(groupPayment);

        groupSaleDate = new QGroupBox(pageIntro);
        groupSaleDate->setObjectName(QString::fromUtf8("groupSaleDate"));
        groupSaleDate->setMinimumSize(QSize(0, 60));
        verticalLayout = new QVBoxLayout(groupSaleDate);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        editTransactionDate = new QDateTimeEdit(groupSaleDate);
        editTransactionDate->setObjectName(QString::fromUtf8("editTransactionDate"));
        editTransactionDate->setCalendarPopup(true);

        verticalLayout->addWidget(editTransactionDate);


        vboxLayout1->addWidget(groupSaleDate);

        btnChangeSaleDate = new QPushButton(pageIntro);
        btnChangeSaleDate->setObjectName(QString::fromUtf8("btnChangeSaleDate"));

        vboxLayout1->addWidget(btnChangeSaleDate);

        groupWidgets->addWidget(pageIntro);
        pageEnterCode = new QWidget();
        pageEnterCode->setObjectName(QString::fromUtf8("pageEnterCode"));
        pageEnterCode->setAcceptDrops(true);
        groupWidgets->addWidget(pageEnterCode);
        pageSearchItem = new QWidget();
        pageSearchItem->setObjectName(QString::fromUtf8("pageSearchItem"));
        vboxLayout5 = new QVBoxLayout(pageSearchItem);
        vboxLayout5->setContentsMargins(2, 2, 2, 2);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        groupWidgets->addWidget(pageSearchItem);

        vboxLayout->addWidget(groupWidgets);

        labelBanner = new QLabel(frameLeft);
        labelBanner->setObjectName(QString::fromUtf8("labelBanner"));
        QSizePolicy sizePolicy6(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(labelBanner->sizePolicy().hasHeightForWidth());
        labelBanner->setSizePolicy(sizePolicy6);
        labelBanner->setMinimumSize(QSize(50, 20));
        labelBanner->setScaledContents(true);

        vboxLayout->addWidget(labelBanner);

        splitter->addWidget(frameLeft);
        mainPanel = new QStackedWidget(splitter);
        mainPanel->setObjectName(QString::fromUtf8("mainPanel"));
        page_Main = new QWidget();
        page_Main->setObjectName(QString::fromUtf8("page_Main"));
        hboxLayout3 = new QHBoxLayout(page_Main);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        frame = new QFrame(page_Main);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitterGrid = new QSplitter(frame);
        splitterGrid->setObjectName(QString::fromUtf8("splitterGrid"));
        splitterGrid->setOrientation(Qt::Vertical);
        frameGridView = new QFrame(splitterGrid);
        frameGridView->setObjectName(QString::fromUtf8("frameGridView"));
        sizePolicy2.setHeightForWidth(frameGridView->sizePolicy().hasHeightForWidth());
        frameGridView->setSizePolicy(sizePolicy2);
        frameGridView->setFrameShape(QFrame::StyledPanel);
        frameGridView->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frameGridView);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        rbFilterByPopularity = new QRadioButton(frameGridView);
        rbFilterByPopularity->setObjectName(QString::fromUtf8("rbFilterByPopularity"));

        gridLayout->addWidget(rbFilterByPopularity, 0, 0, 1, 1);

        rbFilterByDesc = new QRadioButton(frameGridView);
        rbFilterByDesc->setObjectName(QString::fromUtf8("rbFilterByDesc"));

        gridLayout->addWidget(rbFilterByDesc, 1, 0, 1, 1);

        editFilterByDesc = new QLineEdit(frameGridView);
        editFilterByDesc->setObjectName(QString::fromUtf8("editFilterByDesc"));

        gridLayout->addWidget(editFilterByDesc, 1, 2, 1, 1);

        rbFilterByCategory = new QRadioButton(frameGridView);
        rbFilterByCategory->setObjectName(QString::fromUtf8("rbFilterByCategory"));

        gridLayout->addWidget(rbFilterByCategory, 2, 0, 1, 1);

        comboFilterByCategory = new QComboBox(frameGridView);
        comboFilterByCategory->setObjectName(QString::fromUtf8("comboFilterByCategory"));

        gridLayout->addWidget(comboFilterByCategory, 2, 2, 1, 1);

        listView = new QListView(frameGridView);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout->addWidget(listView, 3, 0, 1, 3);

        splitterGrid->addWidget(frameGridView);
        tableWidget = new QTableWidget(splitterGrid);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEnabled(true);
        sizePolicy2.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy2);
        tableWidget->setMinimumSize(QSize(0, 150));
        tableWidget->setFocusPolicy(Qt::NoFocus);
        tableWidget->setStyleSheet(QString::fromUtf8(""));
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setProperty("showDropIndicator", QVariant(true));
        tableWidget->setDragDropOverwriteMode(true);
        tableWidget->setAlternatingRowColors(false);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setShowGrid(false);
        tableWidget->setCornerButtonEnabled(false);
        splitterGrid->addWidget(tableWidget);

        gridLayout_2->addWidget(splitterGrid, 0, 0, 1, 2);

        groupTotals = new QGroupBox(frame);
        groupTotals->setObjectName(QString::fromUtf8("groupTotals"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(groupTotals->sizePolicy().hasHeightForWidth());
        groupTotals->setSizePolicy(sizePolicy7);
        groupTotals->setMinimumSize(QSize(0, 120));
        groupTotals->setStyleSheet(QString::fromUtf8(""));
        groupTotals->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        groupTotals->setFlat(false);
        gridLayout1 = new QGridLayout(groupTotals);
        gridLayout1->setSpacing(1);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(1, 0, 1, 0);
        labelTotalpre = new QLabel(groupTotals);
        labelTotalpre->setObjectName(QString::fromUtf8("labelTotalpre"));
        sizePolicy3.setHeightForWidth(labelTotalpre->sizePolicy().hasHeightForWidth());
        labelTotalpre->setSizePolicy(sizePolicy3);
        labelTotalpre->setMinimumSize(QSize(180, 40));
        labelTotalpre->setMaximumSize(QSize(200, 40));
        QFont font;
        font.setPointSize(28);
        labelTotalpre->setFont(font);
        labelTotalpre->setLayoutDirection(Qt::LeftToRight);
        labelTotalpre->setFrameShape(QFrame::NoFrame);
        labelTotalpre->setScaledContents(true);
        labelTotalpre->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotalpre->setIndent(0);

        gridLayout1->addWidget(labelTotalpre, 2, 0, 1, 1);

        labelTotal = new QLabel(groupTotals);
        labelTotal->setObjectName(QString::fromUtf8("labelTotal"));
        sizePolicy3.setHeightForWidth(labelTotal->sizePolicy().hasHeightForWidth());
        labelTotal->setSizePolicy(sizePolicy3);
        labelTotal->setMinimumSize(QSize(300, 40));
        labelTotal->setMaximumSize(QSize(16777215, 40));
        labelTotal->setFont(font);
        labelTotal->setLayoutDirection(Qt::LeftToRight);
        labelTotal->setFrameShape(QFrame::NoFrame);
        labelTotal->setScaledContents(true);
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelTotal, 2, 1, 1, 1);

        labelChangepre = new QLabel(groupTotals);
        labelChangepre->setObjectName(QString::fromUtf8("labelChangepre"));
        sizePolicy3.setHeightForWidth(labelChangepre->sizePolicy().hasHeightForWidth());
        labelChangepre->setSizePolicy(sizePolicy3);
        labelChangepre->setMinimumSize(QSize(180, 40));
        labelChangepre->setMaximumSize(QSize(200, 40));
        labelChangepre->setFont(font);
        labelChangepre->setLayoutDirection(Qt::LeftToRight);
        labelChangepre->setFrameShape(QFrame::NoFrame);
        labelChangepre->setScaledContents(true);
        labelChangepre->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelChangepre->setMargin(0);
        labelChangepre->setIndent(0);

        gridLayout1->addWidget(labelChangepre, 4, 0, 1, 1);

        labelChange = new QLabel(groupTotals);
        labelChange->setObjectName(QString::fromUtf8("labelChange"));
        sizePolicy3.setHeightForWidth(labelChange->sizePolicy().hasHeightForWidth());
        labelChange->setSizePolicy(sizePolicy3);
        labelChange->setMinimumSize(QSize(300, 40));
        labelChange->setMaximumSize(QSize(1000, 40));
        labelChange->setFont(font);
        labelChange->setLayoutDirection(Qt::LeftToRight);
        labelChange->setFrameShape(QFrame::NoFrame);
        labelChange->setScaledContents(true);
        labelChange->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelChange, 4, 1, 1, 1);

        lblSubtotalPre = new QLabel(groupTotals);
        lblSubtotalPre->setObjectName(QString::fromUtf8("lblSubtotalPre"));
        lblSubtotalPre->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(lblSubtotalPre, 0, 0, 1, 1);

        lblSubtotal = new QLabel(groupTotals);
        lblSubtotal->setObjectName(QString::fromUtf8("lblSubtotal"));
        lblSubtotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(lblSubtotal, 0, 1, 1, 1);

        lblSaleTaxesPre = new QLabel(groupTotals);
        lblSaleTaxesPre->setObjectName(QString::fromUtf8("lblSaleTaxesPre"));
        lblSaleTaxesPre->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(lblSaleTaxesPre, 1, 0, 1, 1);

        lblSaleTaxes = new QLabel(groupTotals);
        lblSaleTaxes->setObjectName(QString::fromUtf8("lblSaleTaxes"));
        lblSaleTaxes->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(lblSaleTaxes, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupTotals, 1, 1, 1, 1);

        groupClient = new QGroupBox(frame);
        groupClient->setObjectName(QString::fromUtf8("groupClient"));
        QSizePolicy sizePolicy8(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(groupClient->sizePolicy().hasHeightForWidth());
        groupClient->setSizePolicy(sizePolicy8);
        groupClient->setMinimumSize(QSize(200, 120));
        gridLayout2 = new QGridLayout(groupClient);
        gridLayout2->setSpacing(0);
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        lblClientPhoto = new QLabel(groupClient);
        lblClientPhoto->setObjectName(QString::fromUtf8("lblClientPhoto"));
        sizePolicy8.setHeightForWidth(lblClientPhoto->sizePolicy().hasHeightForWidth());
        lblClientPhoto->setSizePolicy(sizePolicy8);
        lblClientPhoto->setMinimumSize(QSize(64, 64));
        lblClientPhoto->setMaximumSize(QSize(64, 64));
        lblClientPhoto->setScaledContents(true);
        lblClientPhoto->setAlignment(Qt::AlignCenter);

        gridLayout2->addWidget(lblClientPhoto, 0, 0, 1, 1);

        vboxLayout6 = new QVBoxLayout();
        vboxLayout6->setSpacing(0);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        comboClients = new QComboBox(groupClient);
        comboClients->setObjectName(QString::fromUtf8("comboClients"));

        vboxLayout6->addWidget(comboClients);

        lblClientDiscount = new QLabel(groupClient);
        lblClientDiscount->setObjectName(QString::fromUtf8("lblClientDiscount"));

        vboxLayout6->addWidget(lblClientDiscount);

        labelClientDiscounted = new QLabel(groupClient);
        labelClientDiscounted->setObjectName(QString::fromUtf8("labelClientDiscounted"));
        labelClientDiscounted->setIndent(7);

        vboxLayout6->addWidget(labelClientDiscounted);


        gridLayout2->addLayout(vboxLayout6, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupClient, 1, 0, 1, 1);


        hboxLayout3->addWidget(frame);

        mainPanel->addWidget(page_Main);
        page_Search = new QWidget();
        page_Search->setObjectName(QString::fromUtf8("page_Search"));
        gridLayout3 = new QGridLayout(page_Search);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        labelImageSearch = new QLabel(page_Search);
        labelImageSearch->setObjectName(QString::fromUtf8("labelImageSearch"));
        sizePolicy3.setHeightForWidth(labelImageSearch->sizePolicy().hasHeightForWidth());
        labelImageSearch->setSizePolicy(sizePolicy3);
        labelImageSearch->setAlignment(Qt::AlignCenter);

        gridLayout3->addWidget(labelImageSearch, 0, 0, 1, 1);

        buttonSearchDone = new QPushButton(page_Search);
        buttonSearchDone->setObjectName(QString::fromUtf8("buttonSearchDone"));
        buttonSearchDone->setEnabled(true);

        gridLayout3->addWidget(buttonSearchDone, 0, 1, 2, 1);

        label_5 = new QLabel(page_Search);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout3->addWidget(label_5, 1, 0, 1, 1);

        editItemDescSearch = new QLineEdit(page_Search);
        editItemDescSearch->setObjectName(QString::fromUtf8("editItemDescSearch"));
        sizePolicy1.setHeightForWidth(editItemDescSearch->sizePolicy().hasHeightForWidth());
        editItemDescSearch->setSizePolicy(sizePolicy1);

        gridLayout3->addWidget(editItemDescSearch, 2, 0, 1, 2);

        labelSearchMsg = new QLabel(page_Search);
        labelSearchMsg->setObjectName(QString::fromUtf8("labelSearchMsg"));
        labelSearchMsg->setWordWrap(true);

        gridLayout3->addWidget(labelSearchMsg, 3, 0, 1, 2);

        tableSearch = new QTableWidget(page_Search);
        if (tableSearch->columnCount() < 3)
            tableSearch->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableSearch->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableSearch->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableSearch->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        tableSearch->setObjectName(QString::fromUtf8("tableSearch"));
        tableSearch->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableSearch->setAlternatingRowColors(false);
        tableSearch->setSelectionMode(QAbstractItemView::SingleSelection);
        tableSearch->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout3->addWidget(tableSearch, 4, 0, 1, 2);

        mainPanel->addWidget(page_Search);
        pageTickets = new QWidget();
        pageTickets->setObjectName(QString::fromUtf8("pageTickets"));
        verticalLayout_2 = new QVBoxLayout(pageTickets);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(pageTickets);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblTicketDatePicker = new QLabel(pageTickets);
        lblTicketDatePicker->setObjectName(QString::fromUtf8("lblTicketDatePicker"));

        horizontalLayout->addWidget(lblTicketDatePicker);

        editTicketDatePicker = new QDateEdit(pageTickets);
        editTicketDatePicker->setObjectName(QString::fromUtf8("editTicketDatePicker"));
        editTicketDatePicker->setCalendarPopup(true);

        horizontalLayout->addWidget(editTicketDatePicker);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnTicketPrint = new QPushButton(pageTickets);
        btnTicketPrint->setObjectName(QString::fromUtf8("btnTicketPrint"));

        horizontalLayout->addWidget(btnTicketPrint);

        btnTicketDone = new QPushButton(pageTickets);
        btnTicketDone->setObjectName(QString::fromUtf8("btnTicketDone"));

        horizontalLayout->addWidget(btnTicketDone);


        verticalLayout_2->addLayout(horizontalLayout);

        ticketView = new QTableView(pageTickets);
        ticketView->setObjectName(QString::fromUtf8("ticketView"));

        verticalLayout_2->addWidget(ticketView);

        mainPanel->addWidget(pageTickets);
        pageReturnProduct = new QWidget();
        pageReturnProduct->setObjectName(QString::fromUtf8("pageReturnProduct"));
        verticalLayout_3 = new QVBoxLayout(pageReturnProduct);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(pageReturnProduct);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        gridLayout4 = new QGridLayout();
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        gridLayout4->setHorizontalSpacing(4);
        gridLayout4->setVerticalSpacing(6);
        label_6 = new QLabel(pageReturnProduct);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(125, 0));
        label_6->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(0, 0, 0, 255), stop:0 rgba(255, 255, 255, 0));\n"
"color: rgb(255, 255, 255);\n"
"font: 75 9pt \"Lucida Grande\";"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(label_6, 0, 0, 1, 1);

        label_9 = new QLabel(pageReturnProduct);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy9(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy9);

        gridLayout4->addWidget(label_9, 0, 1, 1, 1);

        label_7 = new QLabel(pageReturnProduct);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(125, 0));
        label_7->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(0, 0, 0, 255), stop:0 rgba(255, 255, 255, 0));\n"
"color: rgb(255, 255, 255);\n"
"font: 75 9pt \"Lucida Grande\";"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(label_7, 1, 0, 1, 1);

        label_10 = new QLabel(pageReturnProduct);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy9.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy9);

        gridLayout4->addWidget(label_10, 1, 1, 1, 1);

        label_8 = new QLabel(pageReturnProduct);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(125, 0));
        label_8->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(0, 0, 0, 255), stop:0 rgba(255, 255, 255, 0));\n"
"color: rgb(255, 255, 255);\n"
"font: 75 9pt \"Lucida Grande\";"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(label_8, 2, 0, 1, 1);

        label_11 = new QLabel(pageReturnProduct);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy10(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy10);

        gridLayout4->addWidget(label_11, 2, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout4);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_2);

        line = new QFrame(pageReturnProduct);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        label_3 = new QLabel(pageReturnProduct);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        tableReturnProducts = new QTableWidget(pageReturnProduct);
        if (tableReturnProducts->columnCount() < 5)
            tableReturnProducts->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableReturnProducts->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableReturnProducts->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableReturnProducts->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableReturnProducts->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableReturnProducts->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        tableReturnProducts->setObjectName(QString::fromUtf8("tableReturnProducts"));

        verticalLayout_3->addWidget(tableReturnProducts);

        groupBox = new QGroupBox(pageReturnProduct);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 200));
        lblReturnProdQty = new QLabel(groupBox);
        lblReturnProdQty->setObjectName(QString::fromUtf8("lblReturnProdQty"));
        lblReturnProdQty->setGeometry(QRect(20, 30, 57, 17));
        lblReturnProdQty->setFrameShape(QFrame::NoFrame);

        verticalLayout_3->addWidget(groupBox);

        mainPanel->addWidget(pageReturnProduct);
        page_Adds = new QWidget();
        page_Adds->setObjectName(QString::fromUtf8("page_Adds"));
        frameCurrency = new QFrame(page_Adds);
        frameCurrency->setObjectName(QString::fromUtf8("frameCurrency"));
        frameCurrency->setGeometry(QRect(100, 130, 211, 200));
        frameCurrency->setFrameShape(QFrame::NoFrame);
        frameCurrency->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frameCurrency);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_15 = new QLabel(frameCurrency);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_15, 0, 0, 1, 2);

        comboCurrency = new QComboBox(frameCurrency);
        comboCurrency->setObjectName(QString::fromUtf8("comboCurrency"));

        gridLayout_3->addWidget(comboCurrency, 1, 0, 1, 2);

        label_12 = new QLabel(frameCurrency);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 2, 0, 1, 1);

        editConvFactor = new QLineEdit(frameCurrency);
        editConvFactor->setObjectName(QString::fromUtf8("editConvFactor"));
        editConvFactor->setReadOnly(true);

        gridLayout_3->addWidget(editConvFactor, 2, 1, 1, 1);

        label_13 = new QLabel(frameCurrency);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 3, 0, 1, 1);

        editConvQty = new QLineEdit(frameCurrency);
        editConvQty->setObjectName(QString::fromUtf8("editConvQty"));

        gridLayout_3->addWidget(editConvQty, 3, 1, 1, 1);

        label_14 = new QLabel(frameCurrency);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 4, 0, 1, 1);

        editConvResult = new QLineEdit(frameCurrency);
        editConvResult->setObjectName(QString::fromUtf8("editConvResult"));
        editConvResult->setReadOnly(true);

        gridLayout_3->addWidget(editConvResult, 4, 1, 1, 1);

        btnConvCancel = new QPushButton(frameCurrency);
        btnConvCancel->setObjectName(QString::fromUtf8("btnConvCancel"));

        gridLayout_3->addWidget(btnConvCancel, 5, 0, 1, 1);

        btnConvOk = new QPushButton(frameCurrency);
        btnConvOk->setObjectName(QString::fromUtf8("btnConvOk"));

        gridLayout_3->addWidget(btnConvOk, 5, 1, 1, 1);

        mainPanel->addWidget(page_Adds);
        splitter->addWidget(mainPanel);

        hboxLayout->addWidget(splitter);

#ifndef UI_QT_NO_SHORTCUT
        label->setBuddy(editItemCode);
        labelCashAmount->setBuddy(editAmount);
        labelCardNumber->setBuddy(editCardNumber);
#endif // QT_NO_SHORTCUT

        retranslateUi(mainview);

        groupWidgets->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);
        mainPanel->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(mainview);
    } // setupUi

    void retranslateUi(QWidget *mainview)
    {
        mainview->setWindowTitle(tr2i18n("Form", 0));
        label->setText(tr2i18n("&Code:", 0));
        groupDetails->setTitle(tr2i18n("Product", 0));
        labelDetailDesc->setText(tr2i18n("label", 0));
        labelDetailPrice->setText(tr2i18n("label", 0));
        labelDetailDiscount->setText(tr2i18n("label", 0));
        labelDetailTotalTaxes->setText(tr2i18n("label", 0));
        labelDetailTax1->setText(tr2i18n("label", 0));
        labelDetailTax2->setText(tr2i18n("label", 0));
        labelDetailUnits->setText(tr2i18n("label", 0));
        labelDetailPoints->setText(tr2i18n("label", 0));
        labelDetailPhoto->setText(QString());
        groupPayment->setTitle(tr2i18n("Payment", 0));
        checkCash->setText(tr2i18n("Ca&sh", 0));
        checkCard->setText(tr2i18n("Ca&rd", 0));
        labelCashAmount->setText(tr2i18n("Cash &Amount:", 0));
        editAmount->setInputMask(QString());
        editAmount->setText(QString());
#ifndef UI_QT_NO_TOOLTIP
        btnCurrency->setToolTip(tr2i18n("Currency conversion", 0));
#endif // QT_NO_TOOLTIP
        btnCurrency->setText(tr2i18n("$", 0));
        btnCurrency->setShortcut(tr2i18n("Ctrl+Alt+C", 0));
        labelCardNumber->setText(tr2i18n("Card &Number:", 0));
        editCardNumber->setInputMask(tr2i18n("0000-0000-0000-0000; ", 0));
        editCardNumber->setText(tr2i18n("---", 0));
        labelAuthNumber->setText(tr2i18n("Authorization number:", 0));
        groupSaleDate->setTitle(tr2i18n("Sale Date", 0));
        btnChangeSaleDate->setText(tr2i18n("Change Sale Date", 0));
        labelBanner->setText(QString());
        rbFilterByPopularity->setText(tr2i18n("filter by popularity this month", 0));
        rbFilterByDesc->setText(tr2i18n("filter by description", 0));
        rbFilterByCategory->setText(tr2i18n("filter by category", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(tr2i18n("Code", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(tr2i18n("Description", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(tr2i18n("Price", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(tr2i18n("Qty", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(tr2i18n("Units", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(tr2i18n("Discount", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(tr2i18n("Total", 0));
        groupTotals->setTitle(QString());
        labelTotalpre->setText(tr2i18n("Total:", 0));
        labelTotal->setText(QString());
        labelChangepre->setText(tr2i18n("Change:", 0));
        labelChange->setText(QString());
        lblSubtotalPre->setText(tr2i18n("Subtotal:", 0));
        lblSubtotal->setText(QString());
        lblSaleTaxesPre->setText(tr2i18n("Taxes:", 0));
        lblSaleTaxes->setText(QString());
        groupClient->setTitle(tr2i18n("Client", 0));
        lblClientPhoto->setText(QString());
        lblClientDiscount->setText(QString());
        labelClientDiscounted->setText(QString());
        labelImageSearch->setText(tr2i18n("TextLabel", 0));
        buttonSearchDone->setText(tr2i18n("Go back", 0));
        label_5->setText(tr2i18n("Enter item description:", 0));
        labelSearchMsg->setText(tr2i18n("<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">.<span style=\" font-weight:600; color:#ff6347;\">.</span></p></body></html>", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableSearch->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(tr2i18n("Description", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableSearch->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(tr2i18n("Price", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableSearch->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(tr2i18n("Code", 0));
        label_2->setText(tr2i18n("Reprint Ticket", 0));
        lblTicketDatePicker->setText(tr2i18n("Show tickets before", 0));
        btnTicketPrint->setText(tr2i18n("Print selected ticket", 0));
        btnTicketDone->setText(tr2i18n("Back", 0));
        label_4->setText(tr2i18n("Return Products", 0));
        label_6->setText(tr2i18n("Ticket number:", 0));
        label_9->setText(tr2i18n("TextLabel", 0));
        label_7->setText(tr2i18n("Date and time:", 0));
        label_10->setText(tr2i18n("TextLabel", 0));
        label_8->setText(tr2i18n("Client:", 0));
        label_11->setText(tr2i18n("TextLabel", 0));
        label_3->setText(tr2i18n("Select the products to return", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableReturnProducts->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(tr2i18n("Code", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableReturnProducts->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(tr2i18n("Description", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableReturnProducts->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(tr2i18n("Qty on purchase", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableReturnProducts->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(tr2i18n("Price", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableReturnProducts->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(tr2i18n("Qty to return", 0));
        groupBox->setTitle(tr2i18n("Selected products details", 0));
        lblReturnProdQty->setText(tr2i18n("TextLabel", 0));
        label_15->setText(tr2i18n("Currency Conversion", 0));
        label_12->setText(tr2i18n("Factor:", 0));
        label_13->setText(tr2i18n("Quantity:", 0));
        label_14->setText(tr2i18n("Result", 0));
        btnConvCancel->setText(tr2i18n("Cancel", 0));
        btnConvOk->setText(tr2i18n("Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class mainview: public Ui_mainview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINVIEW_H

