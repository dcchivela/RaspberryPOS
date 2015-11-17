#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'purchaseeditor.ui'
**
** Created: Mon Apr 20 14:08:46 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASEEDITOR_H
#define UI_PURCHASEEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_purchaseEditor
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *editCode;
    QLabel *label_12;
    QLineEdit *editQty;
    QVBoxLayout *_7;
    QLabel *labelPhoto;
    QPushButton *btnPhoto;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_16;
    QLineEdit *editDesc;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QComboBox *categoriesCombo;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_17;
    QComboBox *measuresCombo;
    QLabel *label_15;
    QLineEdit *editPoints;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLineEdit *editCost;
    QLabel *label_10;
    QLineEdit *editTax;
    QLabel *label_14;
    QLineEdit *editExtraTaxes;
    QHBoxLayout *_6;
    QLabel *label_11;
    QLineEdit *editUtility;
    QLabel *label_13;
    QLineEdit *editFinalPrice;
    QToolButton *btnCalculatePrice;
    QGroupBox *groupBoxedItem;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLineEdit *editItemsPerBox;
    QLabel *label_7;
    QLineEdit *editPricePerBox;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *chIsAGroup;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnAddItem;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnRemoveItem;
    QFrame *line_2;

    void setupUi(QWidget *purchaseEditor)
    {
        if (purchaseEditor->objectName().isEmpty())
            purchaseEditor->setObjectName(QString::fromUtf8("purchaseEditor"));
        purchaseEditor->resize(600, 625);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(purchaseEditor->sizePolicy().hasHeightForWidth());
        purchaseEditor->setSizePolicy(sizePolicy);
        purchaseEditor->setMinimumSize(QSize(600, 625));
        purchaseEditor->setMaximumSize(QSize(600, 16777215));
        purchaseEditor->setBaseSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(purchaseEditor);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(purchaseEditor);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(0, 35));
        label->setMaximumSize(QSize(16777215, 35));
        label->setBaseSize(QSize(0, 0));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);
        label->setIndent(0);

        verticalLayout_2->addWidget(label);

        tabWidget = new QTabWidget(purchaseEditor);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setMinimumSize(QSize(80, 0));
        label_5->setMaximumSize(QSize(95, 16777215));
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_5);

        editCode = new QLineEdit(tab);
        editCode->setObjectName(QString::fromUtf8("editCode"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(editCode->sizePolicy().hasHeightForWidth());
        editCode->setSizePolicy(sizePolicy3);
        editCode->setMinimumSize(QSize(180, 0));
        editCode->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_3->addWidget(editCode);

        label_12 = new QLabel(tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_12);

        editQty = new QLineEdit(tab);
        editQty->setObjectName(QString::fromUtf8("editQty"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(editQty->sizePolicy().hasHeightForWidth());
        editQty->setSizePolicy(sizePolicy4);
        editQty->setMinimumSize(QSize(35, 0));
        editQty->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_3->addWidget(editQty);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        _7 = new QVBoxLayout();
        _7->setSpacing(2);
        _7->setObjectName(QString::fromUtf8("_7"));
        labelPhoto = new QLabel(tab);
        labelPhoto->setObjectName(QString::fromUtf8("labelPhoto"));
        sizePolicy.setHeightForWidth(labelPhoto->sizePolicy().hasHeightForWidth());
        labelPhoto->setSizePolicy(sizePolicy);
        labelPhoto->setMinimumSize(QSize(128, 128));
        labelPhoto->setFrameShape(QFrame::StyledPanel);
        labelPhoto->setFrameShadow(QFrame::Sunken);
        labelPhoto->setAlignment(Qt::AlignCenter);

        _7->addWidget(labelPhoto);

        btnPhoto = new QPushButton(tab);
        btnPhoto->setObjectName(QString::fromUtf8("btnPhoto"));
        sizePolicy4.setHeightForWidth(btnPhoto->sizePolicy().hasHeightForWidth());
        btnPhoto->setSizePolicy(sizePolicy4);

        _7->addWidget(btnPhoto);


        gridLayout->addLayout(_7, 0, 1, 5, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_16 = new QLabel(tab);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy2.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy2);
        label_16->setMinimumSize(QSize(80, 0));
        label_16->setMaximumSize(QSize(95, 16777215));
        label_16->setLayoutDirection(Qt::LeftToRight);
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_16);

        editDesc = new QLineEdit(tab);
        editDesc->setObjectName(QString::fromUtf8("editDesc"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(editDesc->sizePolicy().hasHeightForWidth());
        editDesc->setSizePolicy(sizePolicy5);

        horizontalLayout_7->addWidget(editDesc);


        gridLayout->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setMinimumSize(QSize(80, 0));
        label_8->setMaximumSize(QSize(95, 16777215));
        label_8->setLayoutDirection(Qt::LeftToRight);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_8);

        categoriesCombo = new QComboBox(tab);
        categoriesCombo->setObjectName(QString::fromUtf8("categoriesCombo"));
        sizePolicy5.setHeightForWidth(categoriesCombo->sizePolicy().hasHeightForWidth());
        categoriesCombo->setSizePolicy(sizePolicy5);

        horizontalLayout_6->addWidget(categoriesCombo);


        gridLayout->addLayout(horizontalLayout_6, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_17 = new QLabel(tab);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy2.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy2);
        label_17->setMinimumSize(QSize(80, 0));
        label_17->setMaximumSize(QSize(95, 16777215));
        label_17->setLayoutDirection(Qt::LeftToRight);
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_17);

        measuresCombo = new QComboBox(tab);
        measuresCombo->setObjectName(QString::fromUtf8("measuresCombo"));
        sizePolicy5.setHeightForWidth(measuresCombo->sizePolicy().hasHeightForWidth());
        measuresCombo->setSizePolicy(sizePolicy5);
        measuresCombo->setMinimumSize(QSize(180, 0));
        measuresCombo->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_4->addWidget(measuresCombo);

        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy2.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy2);
        label_15->setLayoutDirection(Qt::LeftToRight);
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_15);

        editPoints = new QLineEdit(tab);
        editPoints->setObjectName(QString::fromUtf8("editPoints"));
        sizePolicy5.setHeightForWidth(editPoints->sizePolicy().hasHeightForWidth());
        editPoints->setSizePolicy(sizePolicy5);
        editPoints->setMinimumSize(QSize(50, 0));
        editPoints->setMaximumSize(QSize(100, 16777215));
        editPoints->setReadOnly(false);

        horizontalLayout_4->addWidget(editPoints);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setMinimumSize(QSize(80, 0));
        label_9->setMaximumSize(QSize(95, 16777215));
        label_9->setLayoutDirection(Qt::LeftToRight);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_9);

        editCost = new QLineEdit(tab);
        editCost->setObjectName(QString::fromUtf8("editCost"));
        sizePolicy3.setHeightForWidth(editCost->sizePolicy().hasHeightForWidth());
        editCost->setSizePolicy(sizePolicy3);
        editCost->setMinimumSize(QSize(80, 0));
        editCost->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_5->addWidget(editCost);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setMaximumSize(QSize(90, 16777215));
        label_10->setLayoutDirection(Qt::LeftToRight);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_10);

        editTax = new QLineEdit(tab);
        editTax->setObjectName(QString::fromUtf8("editTax"));
        sizePolicy3.setHeightForWidth(editTax->sizePolicy().hasHeightForWidth());
        editTax->setSizePolicy(sizePolicy3);
        editTax->setMinimumSize(QSize(20, 0));
        editTax->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_5->addWidget(editTax);

        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy2.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy2);
        label_14->setMaximumSize(QSize(30, 16777215));
        label_14->setLayoutDirection(Qt::LeftToRight);
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_14);

        editExtraTaxes = new QLineEdit(tab);
        editExtraTaxes->setObjectName(QString::fromUtf8("editExtraTaxes"));
        sizePolicy3.setHeightForWidth(editExtraTaxes->sizePolicy().hasHeightForWidth());
        editExtraTaxes->setSizePolicy(sizePolicy3);
        editExtraTaxes->setMinimumSize(QSize(20, 0));
        editExtraTaxes->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_5->addWidget(editExtraTaxes);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        _6 = new QHBoxLayout();
        _6->setObjectName(QString::fromUtf8("_6"));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setMinimumSize(QSize(80, 0));
        label_11->setMaximumSize(QSize(95, 16777215));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        _6->addWidget(label_11);

        editUtility = new QLineEdit(tab);
        editUtility->setObjectName(QString::fromUtf8("editUtility"));
        sizePolicy3.setHeightForWidth(editUtility->sizePolicy().hasHeightForWidth());
        editUtility->setSizePolicy(sizePolicy3);
        editUtility->setMinimumSize(QSize(40, 0));

        _6->addWidget(editUtility);

        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy2.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy2);
        label_13->setMaximumSize(QSize(90, 16777215));
        label_13->setLayoutDirection(Qt::LeftToRight);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        _6->addWidget(label_13);

        editFinalPrice = new QLineEdit(tab);
        editFinalPrice->setObjectName(QString::fromUtf8("editFinalPrice"));
        sizePolicy3.setHeightForWidth(editFinalPrice->sizePolicy().hasHeightForWidth());
        editFinalPrice->setSizePolicy(sizePolicy3);
        editFinalPrice->setMinimumSize(QSize(80, 0));
        editFinalPrice->setMaximumSize(QSize(140, 16777215));
        editFinalPrice->setReadOnly(false);

        _6->addWidget(editFinalPrice);

        btnCalculatePrice = new QToolButton(tab);
        btnCalculatePrice->setObjectName(QString::fromUtf8("btnCalculatePrice"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 182, 93, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 240, 221, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(255, 211, 157, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(127, 91, 46, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 121, 62, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(255, 218, 174, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        btnCalculatePrice->setPalette(palette);

        _6->addWidget(btnCalculatePrice);


        gridLayout->addLayout(_6, 5, 0, 1, 1);

        groupBoxedItem = new QGroupBox(tab);
        groupBoxedItem->setObjectName(QString::fromUtf8("groupBoxedItem"));
        sizePolicy2.setHeightForWidth(groupBoxedItem->sizePolicy().hasHeightForWidth());
        groupBoxedItem->setSizePolicy(sizePolicy2);
        groupBoxedItem->setMinimumSize(QSize(130, 75));
        groupBoxedItem->setMaximumSize(QSize(140, 85));
        groupBoxedItem->setCheckable(true);
        groupBoxedItem->setChecked(false);
        gridLayout_2 = new QGridLayout(groupBoxedItem);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(groupBoxedItem);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy6);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        editItemsPerBox = new QLineEdit(groupBoxedItem);
        editItemsPerBox->setObjectName(QString::fromUtf8("editItemsPerBox"));
        sizePolicy3.setHeightForWidth(editItemsPerBox->sizePolicy().hasHeightForWidth());
        editItemsPerBox->setSizePolicy(sizePolicy3);
        editItemsPerBox->setMinimumSize(QSize(50, 22));

        gridLayout_2->addWidget(editItemsPerBox, 0, 1, 1, 1);

        label_7 = new QLabel(groupBoxedItem);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy6.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy6);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        editPricePerBox = new QLineEdit(groupBoxedItem);
        editPricePerBox->setObjectName(QString::fromUtf8("editPricePerBox"));
        sizePolicy4.setHeightForWidth(editPricePerBox->sizePolicy().hasHeightForWidth());
        editPricePerBox->setSizePolicy(sizePolicy4);
        editPricePerBox->setMinimumSize(QSize(50, 22));

        gridLayout_2->addWidget(editPricePerBox, 1, 1, 1, 1);


        gridLayout->addWidget(groupBoxedItem, 5, 1, 2, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        chIsAGroup = new QCheckBox(tab);
        chIsAGroup->setObjectName(QString::fromUtf8("chIsAGroup"));

        horizontalLayout_8->addWidget(chIsAGroup);


        gridLayout->addLayout(horizontalLayout_8, 6, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        verticalLayout_2->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(378, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnAddItem = new QPushButton(purchaseEditor);
        btnAddItem->setObjectName(QString::fromUtf8("btnAddItem"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush8(QColor(239, 220, 10, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush8);
        QBrush brush9(QColor(255, 244, 114, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush9);
        QBrush brush10(QColor(247, 232, 62, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        QBrush brush11(QColor(119, 110, 5, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush11);
        QBrush brush12(QColor(159, 147, 6, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush13(QColor(247, 237, 132, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        btnAddItem->setPalette(palette1);

        horizontalLayout_2->addWidget(btnAddItem);


        verticalLayout_2->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(purchaseEditor);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableWidget(groupBox);
        if (tableView->columnCount() < 4)
            tableView->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableView->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableView->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableView->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableView->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnRemoveItem = new QPushButton(groupBox);
        btnRemoveItem->setObjectName(QString::fromUtf8("btnRemoveItem"));

        horizontalLayout->addWidget(btnRemoveItem);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox);

        line_2 = new QFrame(purchaseEditor);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

#ifndef UI_QT_NO_SHORTCUT
        label_5->setBuddy(editCode);
        label_12->setBuddy(editQty);
        label_16->setBuddy(editDesc);
        label_8->setBuddy(categoriesCombo);
        label_17->setBuddy(measuresCombo);
        label_15->setBuddy(editPoints);
        label_9->setBuddy(editCost);
        label_10->setBuddy(editTax);
        label_14->setBuddy(editExtraTaxes);
        label_11->setBuddy(editUtility);
        label_13->setBuddy(editFinalPrice);
        label_4->setBuddy(editItemsPerBox);
        label_7->setBuddy(editPricePerBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(editCode, editQty);
        QWidget::setTabOrder(editQty, editDesc);
        QWidget::setTabOrder(editDesc, categoriesCombo);
        QWidget::setTabOrder(categoriesCombo, measuresCombo);
        QWidget::setTabOrder(measuresCombo, editPoints);
        QWidget::setTabOrder(editPoints, editCost);
        QWidget::setTabOrder(editCost, editTax);
        QWidget::setTabOrder(editTax, editExtraTaxes);
        QWidget::setTabOrder(editExtraTaxes, editUtility);
        QWidget::setTabOrder(editUtility, editFinalPrice);
        QWidget::setTabOrder(editFinalPrice, btnCalculatePrice);
        QWidget::setTabOrder(btnCalculatePrice, groupBoxedItem);
        QWidget::setTabOrder(groupBoxedItem, editItemsPerBox);
        QWidget::setTabOrder(editItemsPerBox, editPricePerBox);
        QWidget::setTabOrder(editPricePerBox, btnAddItem);
        QWidget::setTabOrder(btnAddItem, btnPhoto);
        QWidget::setTabOrder(btnPhoto, tableView);
        QWidget::setTabOrder(tableView, btnRemoveItem);
        QWidget::setTabOrder(btnRemoveItem, tabWidget);
        QWidget::setTabOrder(tabWidget, chIsAGroup);

        retranslateUi(purchaseEditor);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(purchaseEditor);
    } // setupUi

    void retranslateUi(QWidget *purchaseEditor)
    {
        purchaseEditor->setWindowTitle(tr2i18n("Purchase", 0));
        label->setText(tr2i18n("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Fill data for each product you purchased and click <span style=\" font-weight:600;\">add item</span> to continue with another product. Note that if a product exists on database, it will be updated. <span style=\" font-weight:600;\">When finish, click \"Ok\" button</span>.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0));
        label_5->setText(tr2i18n("&Code:", 0));
        label_12->setText(tr2i18n("Pu&rchase Qty:", 0));
        labelPhoto->setText(QString());
        btnPhoto->setText(tr2i18n("Change photo", 0));
        label_16->setText(tr2i18n("&Description:", 0));
        label_8->setText(tr2i18n("C&ategory:", 0));
        label_17->setText(tr2i18n("So&ld by:", 0));
        label_15->setText(tr2i18n("&Points:", 0));
        label_9->setText(tr2i18n("C&ost:", 0));
        label_10->setText(tr2i18n("&Taxes 1).-", 0));
#ifndef UI_QT_NO_STATUSTIP
        editTax->setStatusTip(tr2i18n("This is the tax in percentage.", 0));
#endif // QT_NO_STATUSTIP
#ifndef UI_QT_NO_STATUSTIP
        label_14->setStatusTip(tr2i18n("Special Tax", 0));
#endif // QT_NO_STATUSTIP
        label_14->setText(tr2i18n("2).-", 0));
#ifndef UI_QT_NO_STATUSTIP
        editExtraTaxes->setStatusTip(tr2i18n("This is the extra tax in percentage.", 0));
#endif // QT_NO_STATUSTIP
        label_11->setText(tr2i18n("Pro&fit (%):", 0));
#ifndef UI_QT_NO_TOOLTIP
        editUtility->setToolTip(tr2i18n("For price auto-calculation only", 0));
#endif // QT_NO_TOOLTIP
        label_13->setText(tr2i18n("&Public price:", 0));
#ifndef UI_QT_NO_STATUSTIP
        editFinalPrice->setStatusTip(tr2i18n("Can be calculated with de + button", 0));
#endif // QT_NO_STATUSTIP
        editFinalPrice->setStyleSheet(tr2i18n("background: wheat;", 0));
#ifndef UI_QT_NO_TOOLTIP
        btnCalculatePrice->setToolTip(tr2i18n("Calculate price based on utility", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_STATUSTIP
        btnCalculatePrice->setStatusTip(tr2i18n("Calculate price automatically", 0));
#endif // QT_NO_STATUSTIP
        btnCalculatePrice->setText(tr2i18n("$", 0));
        groupBoxedItem->setTitle(tr2i18n("Boxed products", 0));
        label_4->setText(tr2i18n("&Items/box:", 0));
#ifndef UI_QT_NO_TOOLTIP
        editItemsPerBox->setToolTip(tr2i18n("Items per box", 0));
#endif // QT_NO_TOOLTIP
        label_7->setText(tr2i18n("P&rice/box :", 0));
#ifndef UI_QT_NO_TOOLTIP
        editPricePerBox->setToolTip(tr2i18n("Price per box", 0));
#endif // QT_NO_TOOLTIP
        chIsAGroup->setText(tr2i18n("Group. There will be added all its grouped products to the purchase.", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), tr2i18n("Product Information", 0));
        btnAddItem->setText(tr2i18n("add this product", 0));
        groupBox->setTitle(tr2i18n("Items in this purchase", 0));
        QTableWidgetItem *___qtablewidgetitem = tableView->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(tr2i18n("Code", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableView->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(tr2i18n("Description", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableView->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(tr2i18n("Purchased Qty", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableView->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(tr2i18n("Total Qty", 0));
        btnRemoveItem->setText(tr2i18n("Remove Item from list", 0));
    } // retranslateUi

};

namespace Ui {
    class purchaseEditor: public Ui_purchaseEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PURCHASEEDITOR_H

