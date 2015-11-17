#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'producteditor.ui'
**
** Created: Mon Apr 20 14:08:46 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTEDITOR_H
#define UI_PRODUCTEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_productEditor
{
public:
    QGridLayout *gridLayout;
    QLabel *label_5;
    QHBoxLayout *hboxLayout;
    QLineEdit *editCode;
    QPushButton *btnChangeCode;
    QVBoxLayout *vboxLayout;
    QLabel *labelPhoto;
    QPushButton *btnPhoto;
    QLabel *label_11;
    QLineEdit *editAlphacode;
    QLabel *label_14;
    QLineEdit *editDesc;
    QLabel *labelStockQty;
    QLineEdit *editStockQty;
    QPushButton *btnStockCorrect;
    QLabel *label_15;
    QLineEdit *editPoints;
    QLabel *label_8;
    QComboBox *categoriesCombo;
    QLabel *label_7;
    QComboBox *measuresCombo;
    QLabel *label_9;
    QLineEdit *editCost;
    QCheckBox *chIsARaw;
    QLabel *label_10;
    QLineEdit *editTax;
    QCheckBox *chIsAGroup;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *label_3;
    QLineEdit *editUtility;
    QToolButton *btnCalculatePrice;
    QLabel *label_12;
    QLineEdit *editExtraTaxes;
    QPushButton *btnShowGroup;
    QLabel *label_13;
    QLineEdit *editFinalPrice;
    QFrame *groupsPanel;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QDoubleSpinBox *editGroupPriceDrop;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *lblGPrice;
    QListView *sourcePView;
    QVBoxLayout *verticalLayout;
    QLabel *label_16;
    QDoubleSpinBox *editGroupQty;
    QToolButton *btnAdd;
    QToolButton *btnRemove;
    QSpacerItem *verticalSpacer;
    QTableWidget *groupView;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *editFilter;
    QPushButton *btnCloseGroup;
    QLabel *lblProfit;

    void setupUi(QWidget *productEditor)
    {
        if (productEditor->objectName().isEmpty())
            productEditor->setObjectName(QString::fromUtf8("productEditor"));
        productEditor->resize(666, 650);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(productEditor->sizePolicy().hasHeightForWidth());
        productEditor->setSizePolicy(sizePolicy);
        productEditor->setMaximumSize(QSize(800, 650));
        gridLayout = new QGridLayout(productEditor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(productEditor);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(2);
        hboxLayout->setContentsMargins(2, 2, 2, 2);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        editCode = new QLineEdit(productEditor);
        editCode->setObjectName(QString::fromUtf8("editCode"));
        editCode->setMinimumSize(QSize(80, 0));
        editCode->setMaximumSize(QSize(16777215, 16777215));

        hboxLayout->addWidget(editCode);

        btnChangeCode = new QPushButton(productEditor);
        btnChangeCode->setObjectName(QString::fromUtf8("btnChangeCode"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnChangeCode->sizePolicy().hasHeightForWidth());
        btnChangeCode->setSizePolicy(sizePolicy2);
        btnChangeCode->setMinimumSize(QSize(33, 0));
        btnChangeCode->setMaximumSize(QSize(33, 33));

        hboxLayout->addWidget(btnChangeCode);


        gridLayout->addLayout(hboxLayout, 0, 1, 1, 4);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        labelPhoto = new QLabel(productEditor);
        labelPhoto->setObjectName(QString::fromUtf8("labelPhoto"));
        sizePolicy2.setHeightForWidth(labelPhoto->sizePolicy().hasHeightForWidth());
        labelPhoto->setSizePolicy(sizePolicy2);
        labelPhoto->setMinimumSize(QSize(150, 150));
        labelPhoto->setFrameShape(QFrame::StyledPanel);
        labelPhoto->setFrameShadow(QFrame::Sunken);
        labelPhoto->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(labelPhoto);

        btnPhoto = new QPushButton(productEditor);
        btnPhoto->setObjectName(QString::fromUtf8("btnPhoto"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnPhoto->sizePolicy().hasHeightForWidth());
        btnPhoto->setSizePolicy(sizePolicy3);

        vboxLayout->addWidget(btnPhoto);


        gridLayout->addLayout(vboxLayout, 0, 5, 7, 1);

        label_11 = new QLabel(productEditor);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 1, 0, 1, 1);

        editAlphacode = new QLineEdit(productEditor);
        editAlphacode->setObjectName(QString::fromUtf8("editAlphacode"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(editAlphacode->sizePolicy().hasHeightForWidth());
        editAlphacode->setSizePolicy(sizePolicy4);
        editAlphacode->setMinimumSize(QSize(260, 0));

        gridLayout->addWidget(editAlphacode, 1, 1, 1, 4);

        label_14 = new QLabel(productEditor);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy5);
        label_14->setLayoutDirection(Qt::LeftToRight);
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_14, 2, 0, 1, 1);

        editDesc = new QLineEdit(productEditor);
        editDesc->setObjectName(QString::fromUtf8("editDesc"));
        sizePolicy4.setHeightForWidth(editDesc->sizePolicy().hasHeightForWidth());
        editDesc->setSizePolicy(sizePolicy4);
        editDesc->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(editDesc, 2, 1, 1, 4);

        labelStockQty = new QLabel(productEditor);
        labelStockQty->setObjectName(QString::fromUtf8("labelStockQty"));
        sizePolicy5.setHeightForWidth(labelStockQty->sizePolicy().hasHeightForWidth());
        labelStockQty->setSizePolicy(sizePolicy5);
        labelStockQty->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelStockQty, 3, 0, 1, 1);

        editStockQty = new QLineEdit(productEditor);
        editStockQty->setObjectName(QString::fromUtf8("editStockQty"));
        sizePolicy3.setHeightForWidth(editStockQty->sizePolicy().hasHeightForWidth());
        editStockQty->setSizePolicy(sizePolicy3);
        editStockQty->setMinimumSize(QSize(80, 0));
        editStockQty->setMaximumSize(QSize(100, 16777215));
        editStockQty->setReadOnly(true);

        gridLayout->addWidget(editStockQty, 3, 1, 1, 1);

        btnStockCorrect = new QPushButton(productEditor);
        btnStockCorrect->setObjectName(QString::fromUtf8("btnStockCorrect"));
        btnStockCorrect->setMaximumSize(QSize(32, 16777215));

        gridLayout->addWidget(btnStockCorrect, 3, 2, 1, 1);

        label_15 = new QLabel(productEditor);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy5.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy5);
        label_15->setLayoutDirection(Qt::LeftToRight);
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_15, 3, 3, 1, 1);

        editPoints = new QLineEdit(productEditor);
        editPoints->setObjectName(QString::fromUtf8("editPoints"));
        sizePolicy4.setHeightForWidth(editPoints->sizePolicy().hasHeightForWidth());
        editPoints->setSizePolicy(sizePolicy4);
        editPoints->setMinimumSize(QSize(50, 0));
        editPoints->setMaximumSize(QSize(60, 16777215));
        editPoints->setReadOnly(false);

        gridLayout->addWidget(editPoints, 3, 4, 1, 1);

        label_8 = new QLabel(productEditor);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy5.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy5);
        label_8->setLayoutDirection(Qt::LeftToRight);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 4, 0, 1, 1);

        categoriesCombo = new QComboBox(productEditor);
        categoriesCombo->setObjectName(QString::fromUtf8("categoriesCombo"));
        sizePolicy4.setHeightForWidth(categoriesCombo->sizePolicy().hasHeightForWidth());
        categoriesCombo->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(categoriesCombo, 4, 1, 1, 1);

        label_7 = new QLabel(productEditor);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy5.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy5);
        label_7->setLayoutDirection(Qt::LeftToRight);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        measuresCombo = new QComboBox(productEditor);
        measuresCombo->setObjectName(QString::fromUtf8("measuresCombo"));
        sizePolicy4.setHeightForWidth(measuresCombo->sizePolicy().hasHeightForWidth());
        measuresCombo->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(measuresCombo, 5, 1, 1, 1);

        label_9 = new QLabel(productEditor);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy5.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy5);
        label_9->setLayoutDirection(Qt::LeftToRight);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 6, 0, 1, 1);

        editCost = new QLineEdit(productEditor);
        editCost->setObjectName(QString::fromUtf8("editCost"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(editCost->sizePolicy().hasHeightForWidth());
        editCost->setSizePolicy(sizePolicy6);
        editCost->setMinimumSize(QSize(20, 0));
        editCost->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(editCost, 6, 1, 1, 2);

        chIsARaw = new QCheckBox(productEditor);
        chIsARaw->setObjectName(QString::fromUtf8("chIsARaw"));

        gridLayout->addWidget(chIsARaw, 6, 4, 1, 1);

        label_10 = new QLabel(productEditor);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy5.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy5);
        label_10->setLayoutDirection(Qt::LeftToRight);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 7, 0, 1, 1);

        editTax = new QLineEdit(productEditor);
        editTax->setObjectName(QString::fromUtf8("editTax"));
        sizePolicy6.setHeightForWidth(editTax->sizePolicy().hasHeightForWidth());
        editTax->setSizePolicy(sizePolicy6);
        editTax->setMinimumSize(QSize(20, 0));
        editTax->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(editTax, 7, 1, 1, 2);

        chIsAGroup = new QCheckBox(productEditor);
        chIsAGroup->setObjectName(QString::fromUtf8("chIsAGroup"));

        gridLayout->addWidget(chIsAGroup, 7, 4, 1, 1);

        groupBox = new QGroupBox(productEditor);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy5.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy5);
        groupBox->setMinimumSize(QSize(150, 0));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy5.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy5);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_3, 0, 0, 1, 1);

        editUtility = new QLineEdit(groupBox);
        editUtility->setObjectName(QString::fromUtf8("editUtility"));
        sizePolicy6.setHeightForWidth(editUtility->sizePolicy().hasHeightForWidth());
        editUtility->setSizePolicy(sizePolicy6);
        editUtility->setMinimumSize(QSize(50, 0));
        editUtility->setMaximumSize(QSize(70, 16777215));

        gridLayout1->addWidget(editUtility, 1, 0, 1, 1);

        btnCalculatePrice = new QToolButton(groupBox);
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

        gridLayout1->addWidget(btnCalculatePrice, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox, 7, 5, 3, 1);

        label_12 = new QLabel(productEditor);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy5.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy5);
        label_12->setLayoutDirection(Qt::LeftToRight);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 8, 0, 1, 1);

        editExtraTaxes = new QLineEdit(productEditor);
        editExtraTaxes->setObjectName(QString::fromUtf8("editExtraTaxes"));
        sizePolicy6.setHeightForWidth(editExtraTaxes->sizePolicy().hasHeightForWidth());
        editExtraTaxes->setSizePolicy(sizePolicy6);
        editExtraTaxes->setMinimumSize(QSize(20, 0));
        editExtraTaxes->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(editExtraTaxes, 8, 1, 1, 2);

        btnShowGroup = new QPushButton(productEditor);
        btnShowGroup->setObjectName(QString::fromUtf8("btnShowGroup"));

        gridLayout->addWidget(btnShowGroup, 8, 4, 1, 1);

        label_13 = new QLabel(productEditor);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy5.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy5);
        label_13->setLayoutDirection(Qt::LeftToRight);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_13, 9, 0, 1, 1);

        editFinalPrice = new QLineEdit(productEditor);
        editFinalPrice->setObjectName(QString::fromUtf8("editFinalPrice"));
        sizePolicy6.setHeightForWidth(editFinalPrice->sizePolicy().hasHeightForWidth());
        editFinalPrice->setSizePolicy(sizePolicy6);
        editFinalPrice->setMinimumSize(QSize(50, 0));
        editFinalPrice->setMaximumSize(QSize(16777215, 16777215));
        editFinalPrice->setReadOnly(false);

        gridLayout->addWidget(editFinalPrice, 9, 1, 1, 2);

        groupsPanel = new QFrame(productEditor);
        groupsPanel->setObjectName(QString::fromUtf8("groupsPanel"));
        gridLayout_2 = new QGridLayout(groupsPanel);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupsPanel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        horizontalLayout_2->addWidget(label);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(groupsPanel);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("color:blue;"));

        horizontalLayout_3->addWidget(label_6);

        editGroupPriceDrop = new QDoubleSpinBox(groupsPanel);
        editGroupPriceDrop->setObjectName(QString::fromUtf8("editGroupPriceDrop"));

        horizontalLayout_3->addWidget(editGroupPriceDrop);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupsPanel);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color:blue;"));

        horizontalLayout_4->addWidget(label_4);

        lblGPrice = new QLabel(groupsPanel);
        lblGPrice->setObjectName(QString::fromUtf8("lblGPrice"));
        lblGPrice->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"color: blue;"));

        horizontalLayout_4->addWidget(lblGPrice);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 2, 1, 1);

        sourcePView = new QListView(groupsPanel);
        sourcePView->setObjectName(QString::fromUtf8("sourcePView"));
        sourcePView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        sourcePView->setAlternatingRowColors(false);
        sourcePView->setSelectionMode(QAbstractItemView::MultiSelection);
        sourcePView->setSelectionBehavior(QAbstractItemView::SelectRows);
        sourcePView->setModelColumn(0);

        gridLayout_2->addWidget(sourcePView, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_16 = new QLabel(groupsPanel);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy7);
        label_16->setMaximumSize(QSize(16777215, 30));

        verticalLayout->addWidget(label_16);

        editGroupQty = new QDoubleSpinBox(groupsPanel);
        editGroupQty->setObjectName(QString::fromUtf8("editGroupQty"));
        editGroupQty->setMaximumSize(QSize(100, 16777215));
        editGroupQty->setDecimals(3);
        editGroupQty->setMinimum(0.001);
        editGroupQty->setMaximum(999);
        editGroupQty->setValue(1);

        verticalLayout->addWidget(editGroupQty);

        btnAdd = new QToolButton(groupsPanel);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        sizePolicy3.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(btnAdd);

        btnRemove = new QToolButton(groupsPanel);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));
        sizePolicy3.setHeightForWidth(btnRemove->sizePolicy().hasHeightForWidth());
        btnRemove->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(btnRemove);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_2->addLayout(verticalLayout, 2, 1, 1, 1);

        groupView = new QTableWidget(groupsPanel);
        if (groupView->columnCount() < 2)
            groupView->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        groupView->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        groupView->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        groupView->setObjectName(QString::fromUtf8("groupView"));
        groupView->setStyleSheet(QString::fromUtf8(""));
        groupView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        groupView->setSelectionMode(QAbstractItemView::SingleSelection);
        groupView->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout_2->addWidget(groupView, 2, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupsPanel);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        editFilter = new QLineEdit(groupsPanel);
        editFilter->setObjectName(QString::fromUtf8("editFilter"));

        horizontalLayout->addWidget(editFilter);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 1);

        btnCloseGroup = new QPushButton(groupsPanel);
        btnCloseGroup->setObjectName(QString::fromUtf8("btnCloseGroup"));

        gridLayout_2->addWidget(btnCloseGroup, 3, 2, 1, 1);


        gridLayout->addWidget(groupsPanel, 10, 0, 1, 6);

        lblProfit = new QLabel(productEditor);
        lblProfit->setObjectName(QString::fromUtf8("lblProfit"));

        gridLayout->addWidget(lblProfit, 9, 4, 1, 1);

#ifndef UI_QT_NO_SHORTCUT
        label_5->setBuddy(editCode);
        label_14->setBuddy(editDesc);
        labelStockQty->setBuddy(editStockQty);
        label_15->setBuddy(editPoints);
        label_8->setBuddy(categoriesCombo);
        label_7->setBuddy(measuresCombo);
        label_9->setBuddy(editCost);
        label_10->setBuddy(editTax);
        label_3->setBuddy(editUtility);
        label_12->setBuddy(editExtraTaxes);
        label_13->setBuddy(editFinalPrice);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(editCode, editAlphacode);
        QWidget::setTabOrder(editAlphacode, editDesc);
        QWidget::setTabOrder(editDesc, editStockQty);
        QWidget::setTabOrder(editStockQty, editPoints);
        QWidget::setTabOrder(editPoints, categoriesCombo);
        QWidget::setTabOrder(categoriesCombo, measuresCombo);
        QWidget::setTabOrder(measuresCombo, editCost);
        QWidget::setTabOrder(editCost, editTax);
        QWidget::setTabOrder(editTax, editExtraTaxes);
        QWidget::setTabOrder(editExtraTaxes, editFinalPrice);
        QWidget::setTabOrder(editFinalPrice, chIsARaw);
        QWidget::setTabOrder(chIsARaw, chIsAGroup);
        QWidget::setTabOrder(chIsAGroup, btnShowGroup);
        QWidget::setTabOrder(btnShowGroup, editUtility);
        QWidget::setTabOrder(editUtility, btnCalculatePrice);
        QWidget::setTabOrder(btnCalculatePrice, btnPhoto);
        QWidget::setTabOrder(btnPhoto, btnStockCorrect);
        QWidget::setTabOrder(btnStockCorrect, btnChangeCode);
        QWidget::setTabOrder(btnChangeCode, editGroupPriceDrop);
        QWidget::setTabOrder(editGroupPriceDrop, sourcePView);
        QWidget::setTabOrder(sourcePView, btnAdd);
        QWidget::setTabOrder(btnAdd, groupView);
        QWidget::setTabOrder(groupView, editFilter);
        QWidget::setTabOrder(editFilter, btnCloseGroup);

        retranslateUi(productEditor);

        QMetaObject::connectSlotsByName(productEditor);
    } // setupUi

    void retranslateUi(QWidget *productEditor)
    {
        productEditor->setWindowTitle(tr2i18n("Product Editor", 0));
        label_5->setText(tr2i18n("&Code:", 0));
#ifndef UI_QT_NO_TOOLTIP
        btnChangeCode->setToolTip(tr2i18n("Enable Code Editing", 0));
#endif // QT_NO_TOOLTIP
        btnChangeCode->setText(QString());
        labelPhoto->setText(QString());
        btnPhoto->setText(tr2i18n("Change photo", 0));
        label_11->setText(tr2i18n("Alphacode:", 0));
        label_14->setText(tr2i18n("&Description:", 0));
        labelStockQty->setText(tr2i18n("&Stock Qty:", 0));
#ifndef UI_QT_NO_TOOLTIP
        editStockQty->setToolTip(tr2i18n("To change stock please use check-in/check-out", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_TOOLTIP
        btnStockCorrect->setToolTip(tr2i18n("Make a stock correction", 0));
#endif // QT_NO_TOOLTIP
        btnStockCorrect->setText(QString());
        label_15->setText(tr2i18n("Points:", 0));
        label_8->setText(tr2i18n("C&ategory:", 0));
        label_7->setText(tr2i18n("So&ld by:", 0));
        label_9->setText(tr2i18n("C&ost:", 0));
        chIsARaw->setText(tr2i18n("It's A Raw Product", 0));
        label_10->setText(tr2i18n("&Tax (%):", 0));
#ifndef UI_QT_NO_STATUSTIP
        editTax->setStatusTip(tr2i18n("This is the tax in percentage.", 0));
#endif // QT_NO_STATUSTIP
        chIsAGroup->setText(tr2i18n("It's a Group/Pack", 0));
        groupBox->setTitle(tr2i18n("Calcutate Price", 0));
        label_3->setText(tr2i18n("Pro&fit (%):", 0));
        editUtility->setStyleSheet(tr2i18n("background: rgb(203,213,255);", 0));
#ifndef UI_QT_NO_TOOLTIP
        btnCalculatePrice->setToolTip(tr2i18n("Calculate price based on utility", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_STATUSTIP
        btnCalculatePrice->setStatusTip(tr2i18n("Calculate price automatically", 0));
#endif // QT_NO_STATUSTIP
        btnCalculatePrice->setText(tr2i18n("$", 0));
#ifndef UI_QT_NO_STATUSTIP
        label_12->setStatusTip(tr2i18n("Special Tax", 0));
#endif // QT_NO_STATUSTIP
        label_12->setText(tr2i18n("Ot&her Taxes (%):", 0));
#ifndef UI_QT_NO_STATUSTIP
        editExtraTaxes->setStatusTip(tr2i18n("This is the extra tax in percentage.", 0));
#endif // QT_NO_STATUSTIP
        btnShowGroup->setText(tr2i18n("Show Group details", 0));
        label_13->setText(tr2i18n("&Public price:", 0));
#ifndef UI_QT_NO_STATUSTIP
        editFinalPrice->setStatusTip(tr2i18n("Can be calculated with de + button", 0));
#endif // QT_NO_STATUSTIP
        editFinalPrice->setStyleSheet(tr2i18n("background: wheat;", 0));
        label->setText(tr2i18n("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Select</span> products from the left list and click the '&gt;' button to <span style=\" font-weight:600;\">add</span> them to the group on the right. You can<span style=\" font-style:italic;\"> </span><span style=\" font-weight:600; font-style:italic;\">increment</span><span style=\" font-weight:600;\"> </span>item quantities on the right table by <span style=\" font-weight:600;\">double clicking</span> on the item</p></body></html>", 0));
        label_6->setText(tr2i18n("Price drop % for the group:", 0));
        label_4->setText(tr2i18n("Group Price:", 0));
        lblGPrice->setText(tr2i18n("TextLabel", 0));
        label_16->setText(tr2i18n("qty:", 0));
#ifndef UI_QT_NO_TOOLTIP
        btnAdd->setToolTip(tr2i18n("Add selected products to the group", 0));
#endif // QT_NO_TOOLTIP
        btnAdd->setText(tr2i18n(">", 0));
#ifndef UI_QT_NO_TOOLTIP
        btnRemove->setToolTip(tr2i18n("Remove selected products from the group", 0));
#endif // QT_NO_TOOLTIP
        btnRemove->setText(tr2i18n("<", 0));
        QTableWidgetItem *___qtablewidgetitem = groupView->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(tr2i18n("Qty", 0));
        QTableWidgetItem *___qtablewidgetitem1 = groupView->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(tr2i18n("Description", 0));
        label_2->setText(tr2i18n("Filter:", 0));
#ifndef UI_QT_NO_TOOLTIP
        editFilter->setToolTip(tr2i18n("You can filter the products by description,", 0));
#endif // QT_NO_TOOLTIP
        editFilter->setText(QString());
        btnCloseGroup->setText(tr2i18n("Close this panel", 0));
        lblProfit->setText(tr2i18n("...", 0));
    } // retranslateUi

};

namespace Ui {
    class productEditor: public Ui_productEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PRODUCTEDITOR_H

