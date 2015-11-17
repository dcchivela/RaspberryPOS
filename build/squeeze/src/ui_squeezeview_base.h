#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'squeezeview_base.ui'
**
** Created: Mon Apr 20 14:08:45 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQUEEZEVIEW_BASE_H
#define UI_SQUEEZEVIEW_BASE_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
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
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kdatewidget.h"
#include "kplotwidget.h"

QT_BEGIN_NAMESPACE

class Ui_squeezeview_base
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *headerImg;
    QLabel *headerLabel;
    QLabel *logoLabel;
    QStackedWidget *stackedWidget;
    QWidget *pageWelcome;
    QGridLayout *gridLayout;
    QLabel *lblGraphSoldItems;
    QLabel *lblGraphAlmostSoldOutItems;
    QLabel *lblGraphSales;
    QLabel *lblGraphProfit;
    KPlotWidget *plotMostSold;
    QFrame *frame;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblProd1;
    QLabel *counter1;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lblProd2;
    QLabel *counter2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *lblProd3;
    QLabel *counter3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lblProd4;
    QLabel *counter4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *lblProd5;
    QLabel *counter5;
    KPlotWidget *plotSales;
    KPlotWidget *plotProfit;
    QWidget *pageBrowseProduct;
    QVBoxLayout *vboxLayout;
    QTableView *productsViewAlt;
    QListView *productsView;
    QHBoxLayout *hboxLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QRadioButton *chViewProductsListAsTable;
    QRadioButton *chViewProductsListAsGrid;
    QSpacerItem *spacerItem;
    QPushButton *btnAddProduct;
    QPushButton *btnDeleteProduct;
    QPushButton *btnExportProducts;
    QWidget *pageBrowseOffers;
    QVBoxLayout *vboxLayout1;
    QTableView *tableBrowseOffers;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem1;
    QPushButton *btnAddOffer;
    QPushButton *btnDeleteOffer;
    QPushButton *btnExportOffers;
    QLabel *errLabel;
    QWidget *pageBrowseUsers;
    QVBoxLayout *vboxLayout2;
    QListView *usersView;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem2;
    QPushButton *btnAddUser;
    QPushButton *btnDeleteUser;
    QPushButton *btnExportUsers;
    QWidget *pageBrowseMeasures;
    QVBoxLayout *vboxLayout3;
    QTableView *tableMeasures;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem3;
    QPushButton *btnAddMeasure;
    QPushButton *btnDeleteMeasure;
    QPushButton *btnExportMeasures;
    QWidget *pageCategories;
    QVBoxLayout *vboxLayout4;
    QTableView *tableCategories;
    QHBoxLayout *hboxLayout4;
    QSpacerItem *spacerItem4;
    QPushButton *btnAddCategory;
    QPushButton *btnDeleteCategory;
    QPushButton *btnExportCategories;
    QWidget *pageClients;
    QVBoxLayout *vboxLayout5;
    QListView *clientsView;
    QHBoxLayout *hboxLayout5;
    QSpacerItem *spacerItem5;
    QPushButton *btnAddClient;
    QPushButton *btnDeleteClient;
    QPushButton *btnExportClients;
    QWidget *pageRadomMsgs;
    QVBoxLayout *verticalLayout_16;
    QTableView *randomMsgTable;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnAddRandomMsg;
    QWidget *pageLog;
    QVBoxLayout *verticalLayout_8;
    QTableView *logTable;
    QWidget *pageSO;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_6;
    QWidget *pageReports;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tabOnScreen;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *btnCashFlow;
    QToolButton *btnTransactions;
    QToolButton *btnBalances;
    QToolButton *btnSO;
    QSpacerItem *horizontalSpacer_3;
    QStackedWidget *stackedWidget2;
    QWidget *cashF_2;
    QVBoxLayout *verticalLayout_5;
    QTableView *cashFlowTable;
    QWidget *trans_2;
    QVBoxLayout *verticalLayout_22;
    QTableView *transactionsTable;
    QWidget *balances_2;
    QVBoxLayout *verticalLayout_4;
    QTableView *balancesTable;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnPrintBalance;
    QPushButton *btnExport;
    QWidget *so_2;
    QVBoxLayout *verticalLayout_24;
    QTableView *tableSO;
    QWidget *pageFilters;
    QGroupBox *groupFilterBalances;
    QGridLayout *gridLayout_5;
    QRadioButton *rbBalancesFilterByState;
    QRadioButton *rbBalancesFilterBySuspicious;
    KDateWidget *editBalancesFilterByDate;
    QRadioButton *rbBalancesFilterByDate;
    QRadioButton *rbBalancesFilterByUser;
    QLineEdit *editBalancesFilterByVendor;
    QRadioButton *rbBalancesFilterByCashInLess;
    QDoubleSpinBox *editBalancesFilterByCasInLess;
    QRadioButton *rbBalancesFilterByCashInGrater;
    QDoubleSpinBox *editBalancesFilterByCashInGrater;
    QRadioButton *rbBalancesFilgerByTerminalNum;
    QSpinBox *editBalancesFilterByTermNum;
    QGroupBox *groupFilterTransactions;
    QGridLayout *gridLayout_6;
    QRadioButton *rbTransactionsFilterOnlySales;
    QRadioButton *rbTransFilterByStateFinished;
    QRadioButton *rbTransactionsFilterOnlyPurchases;
    QRadioButton *rbTransFilterByStateCancelled;
    QRadioButton *rbTransactionsFilterOnlyChangesReturns;
    QRadioButton *rbTransFilterByPaidCredit;
    QRadioButton *rbTransFilterByPaidCash;
    QRadioButton *rbTransFilterByDate;
    KDateWidget *transactionsDateEditor;
    QRadioButton *rbTransFilterByUser;
    QLineEdit *editTransUsersFilter;
    QRadioButton *rbTransFilterByClient;
    QLineEdit *editTransClientsFilter;
    QRadioButton *rbTransFilterByAmountLess;
    QDoubleSpinBox *editTransAmountLess;
    QRadioButton *rbTransFilterByAmountGreater;
    QDoubleSpinBox *editTransAmountGreater;
    QRadioButton *rbTransFilterTerminalNum;
    QSpinBox *editTransTermNum;
    QWidget *tabPrinted;
    QVBoxLayout *verticalLayout_3;
    QListWidget *reportsList;
    QWidget *pageCurrencies;
    QVBoxLayout *verticalLayout_7;
    QTableView *tableCurrencies;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnAddCurrency;
    QPushButton *btnDeleteCurrency;
    QWidget *pageReservations;
    QHBoxLayout *horizontalLayout_12;
    QTableView *tableReservations;
    QLabel *lblReservationDetails;
    QWidget *pageFilters1;
    QGroupBox *groupFilterOffers;
    QGridLayout *_2;
    QHBoxLayout *_3;
    QRadioButton *chOffersFilterByProduct;
    QLineEdit *editOffersFilterByProduct;
    QRadioButton *chOffersTodayDiscounts;
    QRadioButton *chOffersSelectDate;
    QRadioButton *chOffersOldDiscounts;
    KDateWidget *offersDateEditor;
    QGroupBox *groupFilterProducts;
    QGridLayout *gridLayout_3;
    QRadioButton *rbProductsFilterByDesc;
    QLineEdit *editProductsFilterByDesc;
    QRadioButton *rbProductsFilterByCategory;
    QComboBox *comboProductsFilterByCategory;
    QRadioButton *rbProductsFilterByAvailable;
    QRadioButton *rbProductsFilterByAlmostSoldOut;
    QRadioButton *rbProductsFilterByNotAvailable;
    QRadioButton *rbProductsFilterByLessSold;
    QRadioButton *rbProductsFilterByMostSold;
    QRadioButton *rbProductsFilterByRaw;
    QRadioButton *rbProductsFilterByGroup;
    QGroupBox *groupSOFilter;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_13;
    QRadioButton *rbSOByDate;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    KDateWidget *datePicker;
    QRadioButton *rbSOByThisWeek;
    QRadioButton *rbSOByThisMonth;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_11;
    QRadioButton *rbSOByStatusPending;
    QRadioButton *rbSOByStatusInProgress;
    QRadioButton *rbSOByStatusReady;
    QRadioButton *rbSOByStatusDelivered;
    QRadioButton *rbSOByStatusCancelled;

    void setupUi(QWidget *squeezeview_base)
    {
        if (squeezeview_base->objectName().isEmpty())
            squeezeview_base->setObjectName(QString::fromUtf8("squeezeview_base"));
        squeezeview_base->resize(884, 525);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(squeezeview_base->sizePolicy().hasHeightForWidth());
        squeezeview_base->setSizePolicy(sizePolicy);
        squeezeview_base->setMaximumSize(QSize(16777215, 655));
        verticalLayout = new QVBoxLayout(squeezeview_base);
        verticalLayout->setSpacing(1);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        headerImg = new QLabel(squeezeview_base);
        headerImg->setObjectName(QString::fromUtf8("headerImg"));
        headerImg->setMinimumSize(QSize(48, 48));
        headerImg->setMaximumSize(QSize(48, 48));

        horizontalLayout_2->addWidget(headerImg);

        headerLabel = new QLabel(squeezeview_base);
        headerLabel->setObjectName(QString::fromUtf8("headerLabel"));
        headerLabel->setMinimumSize(QSize(300, 0));
        headerLabel->setIndent(10);

        horizontalLayout_2->addWidget(headerLabel);

        logoLabel = new QLabel(squeezeview_base);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(logoLabel->sizePolicy().hasHeightForWidth());
        logoLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(logoLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        stackedWidget = new QStackedWidget(squeezeview_base);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy2);
        pageWelcome = new QWidget();
        pageWelcome->setObjectName(QString::fromUtf8("pageWelcome"));
        gridLayout = new QGridLayout(pageWelcome);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblGraphSoldItems = new QLabel(pageWelcome);
        lblGraphSoldItems->setObjectName(QString::fromUtf8("lblGraphSoldItems"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lblGraphSoldItems->sizePolicy().hasHeightForWidth());
        lblGraphSoldItems->setSizePolicy(sizePolicy3);
        lblGraphSoldItems->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblGraphSoldItems, 2, 0, 1, 1);

        lblGraphAlmostSoldOutItems = new QLabel(pageWelcome);
        lblGraphAlmostSoldOutItems->setObjectName(QString::fromUtf8("lblGraphAlmostSoldOutItems"));
        sizePolicy3.setHeightForWidth(lblGraphAlmostSoldOutItems->sizePolicy().hasHeightForWidth());
        lblGraphAlmostSoldOutItems->setSizePolicy(sizePolicy3);
        lblGraphAlmostSoldOutItems->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblGraphAlmostSoldOutItems, 2, 1, 1, 1);

        lblGraphSales = new QLabel(pageWelcome);
        lblGraphSales->setObjectName(QString::fromUtf8("lblGraphSales"));
        sizePolicy3.setHeightForWidth(lblGraphSales->sizePolicy().hasHeightForWidth());
        lblGraphSales->setSizePolicy(sizePolicy3);
        lblGraphSales->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblGraphSales, 0, 0, 1, 1);

        lblGraphProfit = new QLabel(pageWelcome);
        lblGraphProfit->setObjectName(QString::fromUtf8("lblGraphProfit"));
        sizePolicy3.setHeightForWidth(lblGraphProfit->sizePolicy().hasHeightForWidth());
        lblGraphProfit->setSizePolicy(sizePolicy3);
        lblGraphProfit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblGraphProfit, 0, 1, 1, 1);

        plotMostSold = new KPlotWidget(pageWelcome);
        plotMostSold->setObjectName(QString::fromUtf8("plotMostSold"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(plotMostSold->sizePolicy().hasHeightForWidth());
        plotMostSold->setSizePolicy(sizePolicy4);
        plotMostSold->setMaximumSize(QSize(500, 300));
        plotMostSold->setBackgroundColor(QColor(96, 111, 0));
        plotMostSold->setGridColor(QColor(255, 0, 0));
        plotMostSold->setProperty("grid", QVariant(false));

        gridLayout->addWidget(plotMostSold, 3, 0, 1, 1);

        frame = new QFrame(pageWelcome);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy4.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy4);
        frame->setMinimumSize(QSize(250, 0));
        frame->setMaximumSize(QSize(500, 300));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(96, 111, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(144, 167, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(120, 139, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(48, 55, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(64, 74, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        frame->setPalette(palette);
        frame->setAutoFillBackground(true);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_17 = new QVBoxLayout(frame);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lblProd1 = new QLabel(frame);
        lblProd1->setObjectName(QString::fromUtf8("lblProd1"));
        lblProd1->setMinimumSize(QSize(250, 0));
        lblProd1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lblProd1->setWordWrap(true);

        horizontalLayout_7->addWidget(lblProd1);

        counter1 = new QLabel(frame);
        counter1->setObjectName(QString::fromUtf8("counter1"));

        horizontalLayout_7->addWidget(counter1);


        verticalLayout_17->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        lblProd2 = new QLabel(frame);
        lblProd2->setObjectName(QString::fromUtf8("lblProd2"));
        lblProd2->setMinimumSize(QSize(250, 0));
        lblProd2->setWordWrap(true);

        horizontalLayout_8->addWidget(lblProd2);

        counter2 = new QLabel(frame);
        counter2->setObjectName(QString::fromUtf8("counter2"));

        horizontalLayout_8->addWidget(counter2);


        verticalLayout_17->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        lblProd3 = new QLabel(frame);
        lblProd3->setObjectName(QString::fromUtf8("lblProd3"));
        lblProd3->setMinimumSize(QSize(250, 0));
        lblProd3->setWordWrap(true);

        horizontalLayout_9->addWidget(lblProd3);

        counter3 = new QLabel(frame);
        counter3->setObjectName(QString::fromUtf8("counter3"));

        horizontalLayout_9->addWidget(counter3);


        verticalLayout_17->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        lblProd4 = new QLabel(frame);
        lblProd4->setObjectName(QString::fromUtf8("lblProd4"));
        lblProd4->setMinimumSize(QSize(250, 0));
        lblProd4->setWordWrap(true);

        horizontalLayout_10->addWidget(lblProd4);

        counter4 = new QLabel(frame);
        counter4->setObjectName(QString::fromUtf8("counter4"));

        horizontalLayout_10->addWidget(counter4);


        verticalLayout_17->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        lblProd5 = new QLabel(frame);
        lblProd5->setObjectName(QString::fromUtf8("lblProd5"));
        lblProd5->setMinimumSize(QSize(250, 0));
        lblProd5->setWordWrap(true);

        horizontalLayout_11->addWidget(lblProd5);

        counter5 = new QLabel(frame);
        counter5->setObjectName(QString::fromUtf8("counter5"));

        horizontalLayout_11->addWidget(counter5);


        verticalLayout_17->addLayout(horizontalLayout_11);


        gridLayout->addWidget(frame, 3, 1, 1, 1);

        plotSales = new KPlotWidget(pageWelcome);
        plotSales->setObjectName(QString::fromUtf8("plotSales"));
        sizePolicy4.setHeightForWidth(plotSales->sizePolicy().hasHeightForWidth());
        plotSales->setSizePolicy(sizePolicy4);
        plotSales->setMaximumSize(QSize(500, 300));
        plotSales->setBackgroundColor(QColor(96, 111, 0));

        gridLayout->addWidget(plotSales, 1, 0, 1, 1);

        plotProfit = new KPlotWidget(pageWelcome);
        plotProfit->setObjectName(QString::fromUtf8("plotProfit"));
        sizePolicy4.setHeightForWidth(plotProfit->sizePolicy().hasHeightForWidth());
        plotProfit->setSizePolicy(sizePolicy4);
        plotProfit->setMinimumSize(QSize(0, 0));
        plotProfit->setMaximumSize(QSize(500, 300));
        plotProfit->setBackgroundColor(QColor(96, 111, 0));

        gridLayout->addWidget(plotProfit, 1, 1, 1, 1);

        stackedWidget->addWidget(pageWelcome);
        pageBrowseProduct = new QWidget();
        pageBrowseProduct->setObjectName(QString::fromUtf8("pageBrowseProduct"));
        vboxLayout = new QVBoxLayout(pageBrowseProduct);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        productsViewAlt = new QTableView(pageBrowseProduct);
        productsViewAlt->setObjectName(QString::fromUtf8("productsViewAlt"));
        productsViewAlt->setSortingEnabled(true);

        vboxLayout->addWidget(productsViewAlt);

        productsView = new QListView(pageBrowseProduct);
        productsView->setObjectName(QString::fromUtf8("productsView"));

        vboxLayout->addWidget(productsView);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        groupBox = new QGroupBox(pageBrowseProduct);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(300, 0));
        groupBox->setMaximumSize(QSize(16777215, 35));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        chViewProductsListAsTable = new QRadioButton(groupBox);
        chViewProductsListAsTable->setObjectName(QString::fromUtf8("chViewProductsListAsTable"));

        horizontalLayout->addWidget(chViewProductsListAsTable);

        chViewProductsListAsGrid = new QRadioButton(groupBox);
        chViewProductsListAsGrid->setObjectName(QString::fromUtf8("chViewProductsListAsGrid"));
        chViewProductsListAsGrid->setCheckable(true);
        chViewProductsListAsGrid->setChecked(true);

        horizontalLayout->addWidget(chViewProductsListAsGrid);

        chViewProductsListAsGrid->raise();
        chViewProductsListAsTable->raise();
        label->raise();

        hboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnAddProduct = new QPushButton(pageBrowseProduct);
        btnAddProduct->setObjectName(QString::fromUtf8("btnAddProduct"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(btnAddProduct->sizePolicy().hasHeightForWidth());
        btnAddProduct->setSizePolicy(sizePolicy5);
        btnAddProduct->setMaximumSize(QSize(150, 16777215));
        btnAddProduct->setLayoutDirection(Qt::LeftToRight);

        hboxLayout->addWidget(btnAddProduct);

        btnDeleteProduct = new QPushButton(pageBrowseProduct);
        btnDeleteProduct->setObjectName(QString::fromUtf8("btnDeleteProduct"));

        hboxLayout->addWidget(btnDeleteProduct);

        btnExportProducts = new QPushButton(pageBrowseProduct);
        btnExportProducts->setObjectName(QString::fromUtf8("btnExportProducts"));

        hboxLayout->addWidget(btnExportProducts);


        vboxLayout->addLayout(hboxLayout);

        stackedWidget->addWidget(pageBrowseProduct);
        pageBrowseOffers = new QWidget();
        pageBrowseOffers->setObjectName(QString::fromUtf8("pageBrowseOffers"));
        vboxLayout1 = new QVBoxLayout(pageBrowseOffers);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        tableBrowseOffers = new QTableView(pageBrowseOffers);
        tableBrowseOffers->setObjectName(QString::fromUtf8("tableBrowseOffers"));
        tableBrowseOffers->setAlternatingRowColors(true);
        tableBrowseOffers->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableBrowseOffers->setTextElideMode(Qt::ElideMiddle);
        tableBrowseOffers->setShowGrid(true);
        tableBrowseOffers->setSortingEnabled(true);
        tableBrowseOffers->setCornerButtonEnabled(false);

        vboxLayout1->addWidget(tableBrowseOffers);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        btnAddOffer = new QPushButton(pageBrowseOffers);
        btnAddOffer->setObjectName(QString::fromUtf8("btnAddOffer"));

        hboxLayout1->addWidget(btnAddOffer);

        btnDeleteOffer = new QPushButton(pageBrowseOffers);
        btnDeleteOffer->setObjectName(QString::fromUtf8("btnDeleteOffer"));

        hboxLayout1->addWidget(btnDeleteOffer);

        btnExportOffers = new QPushButton(pageBrowseOffers);
        btnExportOffers->setObjectName(QString::fromUtf8("btnExportOffers"));

        hboxLayout1->addWidget(btnExportOffers);


        vboxLayout1->addLayout(hboxLayout1);

        errLabel = new QLabel(pageBrowseOffers);
        errLabel->setObjectName(QString::fromUtf8("errLabel"));

        vboxLayout1->addWidget(errLabel);

        stackedWidget->addWidget(pageBrowseOffers);
        pageBrowseUsers = new QWidget();
        pageBrowseUsers->setObjectName(QString::fromUtf8("pageBrowseUsers"));
        vboxLayout2 = new QVBoxLayout(pageBrowseUsers);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        usersView = new QListView(pageBrowseUsers);
        usersView->setObjectName(QString::fromUtf8("usersView"));
        usersView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        usersView->setSelectionBehavior(QAbstractItemView::SelectRows);

        vboxLayout2->addWidget(usersView);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);

        btnAddUser = new QPushButton(pageBrowseUsers);
        btnAddUser->setObjectName(QString::fromUtf8("btnAddUser"));

        hboxLayout2->addWidget(btnAddUser);

        btnDeleteUser = new QPushButton(pageBrowseUsers);
        btnDeleteUser->setObjectName(QString::fromUtf8("btnDeleteUser"));

        hboxLayout2->addWidget(btnDeleteUser);

        btnExportUsers = new QPushButton(pageBrowseUsers);
        btnExportUsers->setObjectName(QString::fromUtf8("btnExportUsers"));

        hboxLayout2->addWidget(btnExportUsers);


        vboxLayout2->addLayout(hboxLayout2);

        stackedWidget->addWidget(pageBrowseUsers);
        pageBrowseMeasures = new QWidget();
        pageBrowseMeasures->setObjectName(QString::fromUtf8("pageBrowseMeasures"));
        vboxLayout3 = new QVBoxLayout(pageBrowseMeasures);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        tableMeasures = new QTableView(pageBrowseMeasures);
        tableMeasures->setObjectName(QString::fromUtf8("tableMeasures"));
        tableMeasures->setEditTriggers(QAbstractItemView::DoubleClicked);
        tableMeasures->setAlternatingRowColors(true);
        tableMeasures->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableMeasures->setSortingEnabled(true);

        vboxLayout3->addWidget(tableMeasures);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem3 = new QSpacerItem(301, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem3);

        btnAddMeasure = new QPushButton(pageBrowseMeasures);
        btnAddMeasure->setObjectName(QString::fromUtf8("btnAddMeasure"));

        hboxLayout3->addWidget(btnAddMeasure);

        btnDeleteMeasure = new QPushButton(pageBrowseMeasures);
        btnDeleteMeasure->setObjectName(QString::fromUtf8("btnDeleteMeasure"));

        hboxLayout3->addWidget(btnDeleteMeasure);

        btnExportMeasures = new QPushButton(pageBrowseMeasures);
        btnExportMeasures->setObjectName(QString::fromUtf8("btnExportMeasures"));

        hboxLayout3->addWidget(btnExportMeasures);


        vboxLayout3->addLayout(hboxLayout3);

        stackedWidget->addWidget(pageBrowseMeasures);
        pageCategories = new QWidget();
        pageCategories->setObjectName(QString::fromUtf8("pageCategories"));
        vboxLayout4 = new QVBoxLayout(pageCategories);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        tableCategories = new QTableView(pageCategories);
        tableCategories->setObjectName(QString::fromUtf8("tableCategories"));
        tableCategories->setEditTriggers(QAbstractItemView::DoubleClicked);
        tableCategories->setAlternatingRowColors(true);
        tableCategories->setSortingEnabled(true);

        vboxLayout4->addWidget(tableCategories);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        spacerItem4 = new QSpacerItem(301, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem4);

        btnAddCategory = new QPushButton(pageCategories);
        btnAddCategory->setObjectName(QString::fromUtf8("btnAddCategory"));

        hboxLayout4->addWidget(btnAddCategory);

        btnDeleteCategory = new QPushButton(pageCategories);
        btnDeleteCategory->setObjectName(QString::fromUtf8("btnDeleteCategory"));

        hboxLayout4->addWidget(btnDeleteCategory);

        btnExportCategories = new QPushButton(pageCategories);
        btnExportCategories->setObjectName(QString::fromUtf8("btnExportCategories"));

        hboxLayout4->addWidget(btnExportCategories);


        vboxLayout4->addLayout(hboxLayout4);

        stackedWidget->addWidget(pageCategories);
        pageClients = new QWidget();
        pageClients->setObjectName(QString::fromUtf8("pageClients"));
        vboxLayout5 = new QVBoxLayout(pageClients);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        clientsView = new QListView(pageClients);
        clientsView->setObjectName(QString::fromUtf8("clientsView"));

        vboxLayout5->addWidget(clientsView);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem5);

        btnAddClient = new QPushButton(pageClients);
        btnAddClient->setObjectName(QString::fromUtf8("btnAddClient"));

        hboxLayout5->addWidget(btnAddClient);

        btnDeleteClient = new QPushButton(pageClients);
        btnDeleteClient->setObjectName(QString::fromUtf8("btnDeleteClient"));

        hboxLayout5->addWidget(btnDeleteClient);

        btnExportClients = new QPushButton(pageClients);
        btnExportClients->setObjectName(QString::fromUtf8("btnExportClients"));

        hboxLayout5->addWidget(btnExportClients);


        vboxLayout5->addLayout(hboxLayout5);

        stackedWidget->addWidget(pageClients);
        pageRadomMsgs = new QWidget();
        pageRadomMsgs->setObjectName(QString::fromUtf8("pageRadomMsgs"));
        verticalLayout_16 = new QVBoxLayout(pageRadomMsgs);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        randomMsgTable = new QTableView(pageRadomMsgs);
        randomMsgTable->setObjectName(QString::fromUtf8("randomMsgTable"));

        verticalLayout_16->addWidget(randomMsgTable);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        btnAddRandomMsg = new QPushButton(pageRadomMsgs);
        btnAddRandomMsg->setObjectName(QString::fromUtf8("btnAddRandomMsg"));

        horizontalLayout_6->addWidget(btnAddRandomMsg);


        verticalLayout_16->addLayout(horizontalLayout_6);

        stackedWidget->addWidget(pageRadomMsgs);
        pageLog = new QWidget();
        pageLog->setObjectName(QString::fromUtf8("pageLog"));
        verticalLayout_8 = new QVBoxLayout(pageLog);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        logTable = new QTableView(pageLog);
        logTable->setObjectName(QString::fromUtf8("logTable"));

        verticalLayout_8->addWidget(logTable);

        stackedWidget->addWidget(pageLog);
        pageSO = new QWidget();
        pageSO->setObjectName(QString::fromUtf8("pageSO"));
        verticalLayout_9 = new QVBoxLayout(pageSO);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_6 = new QLabel(pageSO);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_9->addWidget(label_6);

        stackedWidget->addWidget(pageSO);
        pageReports = new QWidget();
        pageReports->setObjectName(QString::fromUtf8("pageReports"));
        verticalLayout_2 = new QVBoxLayout(pageReports);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(pageReports);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        tabOnScreen = new QWidget();
        tabOnScreen->setObjectName(QString::fromUtf8("tabOnScreen"));
        verticalLayout_6 = new QVBoxLayout(tabOnScreen);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btnCashFlow = new QToolButton(tabOnScreen);
        btnCashFlow->setObjectName(QString::fromUtf8("btnCashFlow"));
        btnCashFlow->setMinimumSize(QSize(34, 34));
        btnCashFlow->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(btnCashFlow);

        btnTransactions = new QToolButton(tabOnScreen);
        btnTransactions->setObjectName(QString::fromUtf8("btnTransactions"));
        btnTransactions->setMinimumSize(QSize(34, 34));
        btnTransactions->setIconSize(QSize(32, 32));
        btnTransactions->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout_4->addWidget(btnTransactions);

        btnBalances = new QToolButton(tabOnScreen);
        btnBalances->setObjectName(QString::fromUtf8("btnBalances"));
        btnBalances->setMinimumSize(QSize(34, 34));
        btnBalances->setIconSize(QSize(32, 32));
        btnBalances->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout_4->addWidget(btnBalances);

        btnSO = new QToolButton(tabOnScreen);
        btnSO->setObjectName(QString::fromUtf8("btnSO"));
        btnSO->setMinimumSize(QSize(34, 34));
        btnSO->setIconSize(QSize(32, 32));
        btnSO->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout_4->addWidget(btnSO);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_6->addLayout(horizontalLayout_4);

        stackedWidget2 = new QStackedWidget(tabOnScreen);
        stackedWidget2->setObjectName(QString::fromUtf8("stackedWidget2"));
        cashF_2 = new QWidget();
        cashF_2->setObjectName(QString::fromUtf8("cashF_2"));
        verticalLayout_5 = new QVBoxLayout(cashF_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        cashFlowTable = new QTableView(cashF_2);
        cashFlowTable->setObjectName(QString::fromUtf8("cashFlowTable"));
        cashFlowTable->setMinimumSize(QSize(0, 0));
        cashFlowTable->setSelectionMode(QAbstractItemView::SingleSelection);
        cashFlowTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        cashFlowTable->setSortingEnabled(true);

        verticalLayout_5->addWidget(cashFlowTable);

        stackedWidget2->addWidget(cashF_2);
        trans_2 = new QWidget();
        trans_2->setObjectName(QString::fromUtf8("trans_2"));
        verticalLayout_22 = new QVBoxLayout(trans_2);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        transactionsTable = new QTableView(trans_2);
        transactionsTable->setObjectName(QString::fromUtf8("transactionsTable"));
        transactionsTable->setMinimumSize(QSize(0, 0));
        transactionsTable->setSelectionMode(QAbstractItemView::SingleSelection);
        transactionsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        transactionsTable->setSortingEnabled(true);

        verticalLayout_22->addWidget(transactionsTable);

        stackedWidget2->addWidget(trans_2);
        balances_2 = new QWidget();
        balances_2->setObjectName(QString::fromUtf8("balances_2"));
        verticalLayout_4 = new QVBoxLayout(balances_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        balancesTable = new QTableView(balances_2);
        balancesTable->setObjectName(QString::fromUtf8("balancesTable"));
        balancesTable->setMinimumSize(QSize(0, 0));
        balancesTable->setSelectionMode(QAbstractItemView::SingleSelection);
        balancesTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        balancesTable->setSortingEnabled(true);

        verticalLayout_4->addWidget(balancesTable);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(638, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnPrintBalance = new QPushButton(balances_2);
        btnPrintBalance->setObjectName(QString::fromUtf8("btnPrintBalance"));

        horizontalLayout_3->addWidget(btnPrintBalance);

        btnExport = new QPushButton(balances_2);
        btnExport->setObjectName(QString::fromUtf8("btnExport"));

        horizontalLayout_3->addWidget(btnExport);


        verticalLayout_4->addLayout(horizontalLayout_3);

        stackedWidget2->addWidget(balances_2);
        so_2 = new QWidget();
        so_2->setObjectName(QString::fromUtf8("so_2"));
        verticalLayout_24 = new QVBoxLayout(so_2);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        tableSO = new QTableView(so_2);
        tableSO->setObjectName(QString::fromUtf8("tableSO"));
        tableSO->setSortingEnabled(true);

        verticalLayout_24->addWidget(tableSO);

        stackedWidget2->addWidget(so_2);
        pageFilters = new QWidget();
        pageFilters->setObjectName(QString::fromUtf8("pageFilters"));
        groupFilterBalances = new QGroupBox(pageFilters);
        groupFilterBalances->setObjectName(QString::fromUtf8("groupFilterBalances"));
        groupFilterBalances->setEnabled(true);
        groupFilterBalances->setGeometry(QRect(0, 20, 161, 111));
        sizePolicy3.setHeightForWidth(groupFilterBalances->sizePolicy().hasHeightForWidth());
        groupFilterBalances->setSizePolicy(sizePolicy3);
        groupFilterBalances->setMinimumSize(QSize(0, 0));
        groupFilterBalances->setMaximumSize(QSize(16777215, 150));
        groupFilterBalances->setCheckable(true);
        groupFilterBalances->setChecked(false);
        gridLayout_5 = new QGridLayout(groupFilterBalances);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        rbBalancesFilterByState = new QRadioButton(groupFilterBalances);
        rbBalancesFilterByState->setObjectName(QString::fromUtf8("rbBalancesFilterByState"));

        gridLayout_5->addWidget(rbBalancesFilterByState, 0, 0, 1, 1);

        rbBalancesFilterBySuspicious = new QRadioButton(groupFilterBalances);
        rbBalancesFilterBySuspicious->setObjectName(QString::fromUtf8("rbBalancesFilterBySuspicious"));

        gridLayout_5->addWidget(rbBalancesFilterBySuspicious, 1, 0, 1, 1);

        editBalancesFilterByDate = new KDateWidget(groupFilterBalances);
        editBalancesFilterByDate->setObjectName(QString::fromUtf8("editBalancesFilterByDate"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(editBalancesFilterByDate->sizePolicy().hasHeightForWidth());
        editBalancesFilterByDate->setSizePolicy(sizePolicy6);
        editBalancesFilterByDate->setDate(QDate(2000, 1, 1));

        gridLayout_5->addWidget(editBalancesFilterByDate, 1, 1, 2, 1);

        rbBalancesFilterByDate = new QRadioButton(groupFilterBalances);
        rbBalancesFilterByDate->setObjectName(QString::fromUtf8("rbBalancesFilterByDate"));

        gridLayout_5->addWidget(rbBalancesFilterByDate, 2, 0, 1, 1);

        rbBalancesFilterByUser = new QRadioButton(groupFilterBalances);
        rbBalancesFilterByUser->setObjectName(QString::fromUtf8("rbBalancesFilterByUser"));

        gridLayout_5->addWidget(rbBalancesFilterByUser, 3, 0, 1, 1);

        editBalancesFilterByVendor = new QLineEdit(groupFilterBalances);
        editBalancesFilterByVendor->setObjectName(QString::fromUtf8("editBalancesFilterByVendor"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(editBalancesFilterByVendor->sizePolicy().hasHeightForWidth());
        editBalancesFilterByVendor->setSizePolicy(sizePolicy7);
        editBalancesFilterByVendor->setMaximumSize(QSize(200, 16777215));

        gridLayout_5->addWidget(editBalancesFilterByVendor, 3, 1, 1, 1);

        rbBalancesFilterByCashInLess = new QRadioButton(groupFilterBalances);
        rbBalancesFilterByCashInLess->setObjectName(QString::fromUtf8("rbBalancesFilterByCashInLess"));
        sizePolicy5.setHeightForWidth(rbBalancesFilterByCashInLess->sizePolicy().hasHeightForWidth());
        rbBalancesFilterByCashInLess->setSizePolicy(sizePolicy5);

        gridLayout_5->addWidget(rbBalancesFilterByCashInLess, 4, 0, 1, 1);

        editBalancesFilterByCasInLess = new QDoubleSpinBox(groupFilterBalances);
        editBalancesFilterByCasInLess->setObjectName(QString::fromUtf8("editBalancesFilterByCasInLess"));
        QSizePolicy sizePolicy8(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(editBalancesFilterByCasInLess->sizePolicy().hasHeightForWidth());
        editBalancesFilterByCasInLess->setSizePolicy(sizePolicy8);
        editBalancesFilterByCasInLess->setMaximumSize(QSize(200, 16777215));
        editBalancesFilterByCasInLess->setMaximum(1e+09);

        gridLayout_5->addWidget(editBalancesFilterByCasInLess, 4, 1, 1, 1);

        rbBalancesFilterByCashInGrater = new QRadioButton(groupFilterBalances);
        rbBalancesFilterByCashInGrater->setObjectName(QString::fromUtf8("rbBalancesFilterByCashInGrater"));

        gridLayout_5->addWidget(rbBalancesFilterByCashInGrater, 5, 0, 2, 1);

        editBalancesFilterByCashInGrater = new QDoubleSpinBox(groupFilterBalances);
        editBalancesFilterByCashInGrater->setObjectName(QString::fromUtf8("editBalancesFilterByCashInGrater"));
        sizePolicy8.setHeightForWidth(editBalancesFilterByCashInGrater->sizePolicy().hasHeightForWidth());
        editBalancesFilterByCashInGrater->setSizePolicy(sizePolicy8);
        editBalancesFilterByCashInGrater->setMaximumSize(QSize(200, 16777215));
        editBalancesFilterByCashInGrater->setMaximum(1e+09);

        gridLayout_5->addWidget(editBalancesFilterByCashInGrater, 5, 1, 1, 1);

        rbBalancesFilgerByTerminalNum = new QRadioButton(groupFilterBalances);
        rbBalancesFilgerByTerminalNum->setObjectName(QString::fromUtf8("rbBalancesFilgerByTerminalNum"));

        gridLayout_5->addWidget(rbBalancesFilgerByTerminalNum, 7, 0, 1, 1);

        editBalancesFilterByTermNum = new QSpinBox(groupFilterBalances);
        editBalancesFilterByTermNum->setObjectName(QString::fromUtf8("editBalancesFilterByTermNum"));
        sizePolicy5.setHeightForWidth(editBalancesFilterByTermNum->sizePolicy().hasHeightForWidth());
        editBalancesFilterByTermNum->setSizePolicy(sizePolicy5);
        editBalancesFilterByTermNum->setMinimum(1);
        editBalancesFilterByTermNum->setMaximum(9999);

        gridLayout_5->addWidget(editBalancesFilterByTermNum, 6, 1, 2, 1);

        groupFilterTransactions = new QGroupBox(pageFilters);
        groupFilterTransactions->setObjectName(QString::fromUtf8("groupFilterTransactions"));
        groupFilterTransactions->setEnabled(true);
        groupFilterTransactions->setGeometry(QRect(160, 10, 391, 251));
        QSizePolicy sizePolicy9(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(groupFilterTransactions->sizePolicy().hasHeightForWidth());
        groupFilterTransactions->setSizePolicy(sizePolicy9);
        groupFilterTransactions->setMinimumSize(QSize(0, 180));
        groupFilterTransactions->setMaximumSize(QSize(760, 16777215));
        groupFilterTransactions->setCheckable(true);
        groupFilterTransactions->setChecked(false);
        gridLayout_6 = new QGridLayout(groupFilterTransactions);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        rbTransactionsFilterOnlySales = new QRadioButton(groupFilterTransactions);
        rbTransactionsFilterOnlySales->setObjectName(QString::fromUtf8("rbTransactionsFilterOnlySales"));

        gridLayout_6->addWidget(rbTransactionsFilterOnlySales, 0, 0, 1, 1);

        rbTransFilterByStateFinished = new QRadioButton(groupFilterTransactions);
        rbTransFilterByStateFinished->setObjectName(QString::fromUtf8("rbTransFilterByStateFinished"));

        gridLayout_6->addWidget(rbTransFilterByStateFinished, 0, 1, 1, 1);

        rbTransactionsFilterOnlyPurchases = new QRadioButton(groupFilterTransactions);
        rbTransactionsFilterOnlyPurchases->setObjectName(QString::fromUtf8("rbTransactionsFilterOnlyPurchases"));

        gridLayout_6->addWidget(rbTransactionsFilterOnlyPurchases, 1, 0, 1, 1);

        rbTransFilterByStateCancelled = new QRadioButton(groupFilterTransactions);
        rbTransFilterByStateCancelled->setObjectName(QString::fromUtf8("rbTransFilterByStateCancelled"));

        gridLayout_6->addWidget(rbTransFilterByStateCancelled, 1, 1, 1, 1);

        rbTransactionsFilterOnlyChangesReturns = new QRadioButton(groupFilterTransactions);
        rbTransactionsFilterOnlyChangesReturns->setObjectName(QString::fromUtf8("rbTransactionsFilterOnlyChangesReturns"));

        gridLayout_6->addWidget(rbTransactionsFilterOnlyChangesReturns, 2, 0, 1, 1);

        rbTransFilterByPaidCredit = new QRadioButton(groupFilterTransactions);
        rbTransFilterByPaidCredit->setObjectName(QString::fromUtf8("rbTransFilterByPaidCredit"));

        gridLayout_6->addWidget(rbTransFilterByPaidCredit, 2, 1, 1, 1);

        rbTransFilterByPaidCash = new QRadioButton(groupFilterTransactions);
        rbTransFilterByPaidCash->setObjectName(QString::fromUtf8("rbTransFilterByPaidCash"));

        gridLayout_6->addWidget(rbTransFilterByPaidCash, 3, 1, 1, 1);

        rbTransFilterByDate = new QRadioButton(groupFilterTransactions);
        rbTransFilterByDate->setObjectName(QString::fromUtf8("rbTransFilterByDate"));

        gridLayout_6->addWidget(rbTransFilterByDate, 4, 0, 1, 1);

        transactionsDateEditor = new KDateWidget(groupFilterTransactions);
        transactionsDateEditor->setObjectName(QString::fromUtf8("transactionsDateEditor"));
        sizePolicy6.setHeightForWidth(transactionsDateEditor->sizePolicy().hasHeightForWidth());
        transactionsDateEditor->setSizePolicy(sizePolicy6);
        transactionsDateEditor->setDate(QDate(2009, 1, 1));

        gridLayout_6->addWidget(transactionsDateEditor, 4, 1, 1, 1);

        rbTransFilterByUser = new QRadioButton(groupFilterTransactions);
        rbTransFilterByUser->setObjectName(QString::fromUtf8("rbTransFilterByUser"));

        gridLayout_6->addWidget(rbTransFilterByUser, 5, 0, 1, 1);

        editTransUsersFilter = new QLineEdit(groupFilterTransactions);
        editTransUsersFilter->setObjectName(QString::fromUtf8("editTransUsersFilter"));
        sizePolicy7.setHeightForWidth(editTransUsersFilter->sizePolicy().hasHeightForWidth());
        editTransUsersFilter->setSizePolicy(sizePolicy7);
        editTransUsersFilter->setMaximumSize(QSize(300, 16777215));

        gridLayout_6->addWidget(editTransUsersFilter, 5, 1, 1, 1);

        rbTransFilterByClient = new QRadioButton(groupFilterTransactions);
        rbTransFilterByClient->setObjectName(QString::fromUtf8("rbTransFilterByClient"));

        gridLayout_6->addWidget(rbTransFilterByClient, 6, 0, 1, 1);

        editTransClientsFilter = new QLineEdit(groupFilterTransactions);
        editTransClientsFilter->setObjectName(QString::fromUtf8("editTransClientsFilter"));
        editTransClientsFilter->setMaximumSize(QSize(300, 16777215));

        gridLayout_6->addWidget(editTransClientsFilter, 6, 1, 1, 1);

        rbTransFilterByAmountLess = new QRadioButton(groupFilterTransactions);
        rbTransFilterByAmountLess->setObjectName(QString::fromUtf8("rbTransFilterByAmountLess"));
        sizePolicy5.setHeightForWidth(rbTransFilterByAmountLess->sizePolicy().hasHeightForWidth());
        rbTransFilterByAmountLess->setSizePolicy(sizePolicy5);

        gridLayout_6->addWidget(rbTransFilterByAmountLess, 7, 0, 1, 1);

        editTransAmountLess = new QDoubleSpinBox(groupFilterTransactions);
        editTransAmountLess->setObjectName(QString::fromUtf8("editTransAmountLess"));
        QSizePolicy sizePolicy10(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(editTransAmountLess->sizePolicy().hasHeightForWidth());
        editTransAmountLess->setSizePolicy(sizePolicy10);
        editTransAmountLess->setMaximumSize(QSize(100, 80));
        editTransAmountLess->setMaximum(1e+09);

        gridLayout_6->addWidget(editTransAmountLess, 7, 1, 1, 1);

        rbTransFilterByAmountGreater = new QRadioButton(groupFilterTransactions);
        rbTransFilterByAmountGreater->setObjectName(QString::fromUtf8("rbTransFilterByAmountGreater"));

        gridLayout_6->addWidget(rbTransFilterByAmountGreater, 8, 0, 1, 1);

        editTransAmountGreater = new QDoubleSpinBox(groupFilterTransactions);
        editTransAmountGreater->setObjectName(QString::fromUtf8("editTransAmountGreater"));
        editTransAmountGreater->setMaximumSize(QSize(100, 16777215));
        editTransAmountGreater->setMaximum(1e+09);

        gridLayout_6->addWidget(editTransAmountGreater, 8, 1, 1, 1);

        rbTransFilterTerminalNum = new QRadioButton(groupFilterTransactions);
        rbTransFilterTerminalNum->setObjectName(QString::fromUtf8("rbTransFilterTerminalNum"));

        gridLayout_6->addWidget(rbTransFilterTerminalNum, 9, 0, 1, 1);

        editTransTermNum = new QSpinBox(groupFilterTransactions);
        editTransTermNum->setObjectName(QString::fromUtf8("editTransTermNum"));
        sizePolicy5.setHeightForWidth(editTransTermNum->sizePolicy().hasHeightForWidth());
        editTransTermNum->setSizePolicy(sizePolicy5);
        editTransTermNum->setMinimum(1);
        editTransTermNum->setMaximum(9999);

        gridLayout_6->addWidget(editTransTermNum, 9, 1, 1, 1);

        stackedWidget2->addWidget(pageFilters);

        verticalLayout_6->addWidget(stackedWidget2);

        tabWidget->addTab(tabOnScreen, QString());
        tabPrinted = new QWidget();
        tabPrinted->setObjectName(QString::fromUtf8("tabPrinted"));
        verticalLayout_3 = new QVBoxLayout(tabPrinted);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        reportsList = new QListWidget(tabPrinted);
        reportsList->setObjectName(QString::fromUtf8("reportsList"));
        reportsList->setMaximumSize(QSize(50000, 16777215));
        reportsList->setIconSize(QSize(40, 40));
        reportsList->setTextElideMode(Qt::ElideMiddle);
        reportsList->setViewMode(QListView::ListMode);
        reportsList->setWordWrap(true);

        verticalLayout_3->addWidget(reportsList);

        tabWidget->addTab(tabPrinted, QString());

        verticalLayout_2->addWidget(tabWidget);

        stackedWidget->addWidget(pageReports);
        pageCurrencies = new QWidget();
        pageCurrencies->setObjectName(QString::fromUtf8("pageCurrencies"));
        verticalLayout_7 = new QVBoxLayout(pageCurrencies);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        tableCurrencies = new QTableView(pageCurrencies);
        tableCurrencies->setObjectName(QString::fromUtf8("tableCurrencies"));

        verticalLayout_7->addWidget(tableCurrencies);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_5);

        btnAddCurrency = new QPushButton(pageCurrencies);
        btnAddCurrency->setObjectName(QString::fromUtf8("btnAddCurrency"));
        sizePolicy5.setHeightForWidth(btnAddCurrency->sizePolicy().hasHeightForWidth());
        btnAddCurrency->setSizePolicy(sizePolicy5);
        btnAddCurrency->setMaximumSize(QSize(150, 16777215));
        btnAddCurrency->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_13->addWidget(btnAddCurrency);

        btnDeleteCurrency = new QPushButton(pageCurrencies);
        btnDeleteCurrency->setObjectName(QString::fromUtf8("btnDeleteCurrency"));

        horizontalLayout_13->addWidget(btnDeleteCurrency);


        verticalLayout_7->addLayout(horizontalLayout_13);

        stackedWidget->addWidget(pageCurrencies);
        pageReservations = new QWidget();
        pageReservations->setObjectName(QString::fromUtf8("pageReservations"));
        horizontalLayout_12 = new QHBoxLayout(pageReservations);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        tableReservations = new QTableView(pageReservations);
        tableReservations->setObjectName(QString::fromUtf8("tableReservations"));
        tableReservations->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableReservations->setAlternatingRowColors(true);
        tableReservations->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout_12->addWidget(tableReservations);

        lblReservationDetails = new QLabel(pageReservations);
        lblReservationDetails->setObjectName(QString::fromUtf8("lblReservationDetails"));
        lblReservationDetails->setMinimumSize(QSize(200, 0));
        lblReservationDetails->setStyleSheet(QString::fromUtf8("background:white;\n"
"border: 2px solid gray;\n"
"border-radius: 4px;\n"
"padding: 2px;\n"
"font-weight:normal;\n"
"color:black;"));
        lblReservationDetails->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_12->addWidget(lblReservationDetails);

        stackedWidget->addWidget(pageReservations);
        pageFilters1 = new QWidget();
        pageFilters1->setObjectName(QString::fromUtf8("pageFilters1"));
        groupFilterOffers = new QGroupBox(pageFilters1);
        groupFilterOffers->setObjectName(QString::fromUtf8("groupFilterOffers"));
        groupFilterOffers->setGeometry(QRect(10, 20, 401, 126));
        QSizePolicy sizePolicy11(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(groupFilterOffers->sizePolicy().hasHeightForWidth());
        groupFilterOffers->setSizePolicy(sizePolicy11);
        groupFilterOffers->setCheckable(true);
        groupFilterOffers->setChecked(false);
        _2 = new QGridLayout(groupFilterOffers);
        _2->setObjectName(QString::fromUtf8("_2"));
        _3 = new QHBoxLayout();
        _3->setObjectName(QString::fromUtf8("_3"));
        chOffersFilterByProduct = new QRadioButton(groupFilterOffers);
        chOffersFilterByProduct->setObjectName(QString::fromUtf8("chOffersFilterByProduct"));
        chOffersFilterByProduct->setChecked(true);

        _3->addWidget(chOffersFilterByProduct);

        editOffersFilterByProduct = new QLineEdit(groupFilterOffers);
        editOffersFilterByProduct->setObjectName(QString::fromUtf8("editOffersFilterByProduct"));
        sizePolicy8.setHeightForWidth(editOffersFilterByProduct->sizePolicy().hasHeightForWidth());
        editOffersFilterByProduct->setSizePolicy(sizePolicy8);

        _3->addWidget(editOffersFilterByProduct);


        _2->addLayout(_3, 0, 0, 1, 2);

        chOffersTodayDiscounts = new QRadioButton(groupFilterOffers);
        chOffersTodayDiscounts->setObjectName(QString::fromUtf8("chOffersTodayDiscounts"));
        chOffersTodayDiscounts->setChecked(false);

        _2->addWidget(chOffersTodayDiscounts, 1, 0, 1, 1);

        chOffersSelectDate = new QRadioButton(groupFilterOffers);
        chOffersSelectDate->setObjectName(QString::fromUtf8("chOffersSelectDate"));

        _2->addWidget(chOffersSelectDate, 1, 1, 1, 1);

        chOffersOldDiscounts = new QRadioButton(groupFilterOffers);
        chOffersOldDiscounts->setObjectName(QString::fromUtf8("chOffersOldDiscounts"));

        _2->addWidget(chOffersOldDiscounts, 2, 0, 1, 1);

        offersDateEditor = new KDateWidget(groupFilterOffers);
        offersDateEditor->setObjectName(QString::fromUtf8("offersDateEditor"));
        offersDateEditor->setDate(QDate(2009, 1, 1));

        _2->addWidget(offersDateEditor, 2, 1, 1, 1);

        groupFilterProducts = new QGroupBox(pageFilters1);
        groupFilterProducts->setObjectName(QString::fromUtf8("groupFilterProducts"));
        groupFilterProducts->setGeometry(QRect(20, 160, 521, 138));
        QSizePolicy sizePolicy12(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(groupFilterProducts->sizePolicy().hasHeightForWidth());
        groupFilterProducts->setSizePolicy(sizePolicy12);
        groupFilterProducts->setMinimumSize(QSize(0, 0));
        groupFilterProducts->setMaximumSize(QSize(16777215, 16777215));
        groupFilterProducts->setFlat(false);
        groupFilterProducts->setCheckable(true);
        groupFilterProducts->setChecked(false);
        gridLayout_3 = new QGridLayout(groupFilterProducts);
        gridLayout_3->setContentsMargins(2, 2, 2, 2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(2);
        rbProductsFilterByDesc = new QRadioButton(groupFilterProducts);
        rbProductsFilterByDesc->setObjectName(QString::fromUtf8("rbProductsFilterByDesc"));

        gridLayout_3->addWidget(rbProductsFilterByDesc, 0, 0, 1, 1);

        editProductsFilterByDesc = new QLineEdit(groupFilterProducts);
        editProductsFilterByDesc->setObjectName(QString::fromUtf8("editProductsFilterByDesc"));
        sizePolicy7.setHeightForWidth(editProductsFilterByDesc->sizePolicy().hasHeightForWidth());
        editProductsFilterByDesc->setSizePolicy(sizePolicy7);

        gridLayout_3->addWidget(editProductsFilterByDesc, 0, 1, 1, 1);

        rbProductsFilterByCategory = new QRadioButton(groupFilterProducts);
        rbProductsFilterByCategory->setObjectName(QString::fromUtf8("rbProductsFilterByCategory"));

        gridLayout_3->addWidget(rbProductsFilterByCategory, 1, 0, 1, 1);

        comboProductsFilterByCategory = new QComboBox(groupFilterProducts);
        comboProductsFilterByCategory->setObjectName(QString::fromUtf8("comboProductsFilterByCategory"));
        sizePolicy7.setHeightForWidth(comboProductsFilterByCategory->sizePolicy().hasHeightForWidth());
        comboProductsFilterByCategory->setSizePolicy(sizePolicy7);

        gridLayout_3->addWidget(comboProductsFilterByCategory, 1, 1, 1, 1);

        rbProductsFilterByAvailable = new QRadioButton(groupFilterProducts);
        rbProductsFilterByAvailable->setObjectName(QString::fromUtf8("rbProductsFilterByAvailable"));

        gridLayout_3->addWidget(rbProductsFilterByAvailable, 2, 0, 1, 1);

        rbProductsFilterByAlmostSoldOut = new QRadioButton(groupFilterProducts);
        rbProductsFilterByAlmostSoldOut->setObjectName(QString::fromUtf8("rbProductsFilterByAlmostSoldOut"));

        gridLayout_3->addWidget(rbProductsFilterByAlmostSoldOut, 0, 2, 1, 1);

        rbProductsFilterByNotAvailable = new QRadioButton(groupFilterProducts);
        rbProductsFilterByNotAvailable->setObjectName(QString::fromUtf8("rbProductsFilterByNotAvailable"));

        gridLayout_3->addWidget(rbProductsFilterByNotAvailable, 1, 2, 1, 1);

        rbProductsFilterByLessSold = new QRadioButton(groupFilterProducts);
        rbProductsFilterByLessSold->setObjectName(QString::fromUtf8("rbProductsFilterByLessSold"));

        gridLayout_3->addWidget(rbProductsFilterByLessSold, 2, 2, 1, 1);

        rbProductsFilterByMostSold = new QRadioButton(groupFilterProducts);
        rbProductsFilterByMostSold->setObjectName(QString::fromUtf8("rbProductsFilterByMostSold"));

        gridLayout_3->addWidget(rbProductsFilterByMostSold, 2, 1, 1, 1);

        rbProductsFilterByRaw = new QRadioButton(groupFilterProducts);
        rbProductsFilterByRaw->setObjectName(QString::fromUtf8("rbProductsFilterByRaw"));

        gridLayout_3->addWidget(rbProductsFilterByRaw, 3, 0, 1, 1);

        rbProductsFilterByGroup = new QRadioButton(groupFilterProducts);
        rbProductsFilterByGroup->setObjectName(QString::fromUtf8("rbProductsFilterByGroup"));

        gridLayout_3->addWidget(rbProductsFilterByGroup, 3, 1, 1, 1);

        groupSOFilter = new QGroupBox(pageFilters1);
        groupSOFilter->setObjectName(QString::fromUtf8("groupSOFilter"));
        groupSOFilter->setGeometry(QRect(10, 290, 611, 197));
        groupSOFilter->setCheckable(true);
        groupSOFilter->setChecked(false);
        gridLayout_7 = new QGridLayout(groupSOFilter);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        label_5 = new QLabel(groupSOFilter);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_14->addWidget(label_5);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(15, -1, -1, -1);
        rbSOByDate = new QRadioButton(groupSOFilter);
        rbSOByDate->setObjectName(QString::fromUtf8("rbSOByDate"));

        verticalLayout_13->addWidget(rbSOByDate);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        datePicker = new KDateWidget(groupSOFilter);
        datePicker->setObjectName(QString::fromUtf8("datePicker"));

        horizontalLayout_5->addWidget(datePicker);


        verticalLayout_13->addLayout(horizontalLayout_5);

        rbSOByThisWeek = new QRadioButton(groupSOFilter);
        rbSOByThisWeek->setObjectName(QString::fromUtf8("rbSOByThisWeek"));

        verticalLayout_13->addWidget(rbSOByThisWeek);

        rbSOByThisMonth = new QRadioButton(groupSOFilter);
        rbSOByThisMonth->setObjectName(QString::fromUtf8("rbSOByThisMonth"));

        verticalLayout_13->addWidget(rbSOByThisMonth);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_13->addItem(verticalSpacer);


        verticalLayout_14->addLayout(verticalLayout_13);


        gridLayout_7->addLayout(verticalLayout_14, 0, 0, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_4 = new QLabel(groupSOFilter);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_12->addWidget(label_4);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(15, -1, -1, -1);
        rbSOByStatusPending = new QRadioButton(groupSOFilter);
        rbSOByStatusPending->setObjectName(QString::fromUtf8("rbSOByStatusPending"));

        verticalLayout_11->addWidget(rbSOByStatusPending);

        rbSOByStatusInProgress = new QRadioButton(groupSOFilter);
        rbSOByStatusInProgress->setObjectName(QString::fromUtf8("rbSOByStatusInProgress"));

        verticalLayout_11->addWidget(rbSOByStatusInProgress);

        rbSOByStatusReady = new QRadioButton(groupSOFilter);
        rbSOByStatusReady->setObjectName(QString::fromUtf8("rbSOByStatusReady"));

        verticalLayout_11->addWidget(rbSOByStatusReady);

        rbSOByStatusDelivered = new QRadioButton(groupSOFilter);
        rbSOByStatusDelivered->setObjectName(QString::fromUtf8("rbSOByStatusDelivered"));

        verticalLayout_11->addWidget(rbSOByStatusDelivered);

        rbSOByStatusCancelled = new QRadioButton(groupSOFilter);
        rbSOByStatusCancelled->setObjectName(QString::fromUtf8("rbSOByStatusCancelled"));

        verticalLayout_11->addWidget(rbSOByStatusCancelled);


        verticalLayout_12->addLayout(verticalLayout_11);


        gridLayout_7->addLayout(verticalLayout_12, 0, 1, 1, 1);

        stackedWidget->addWidget(pageFilters1);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(squeezeview_base);

        stackedWidget->setCurrentIndex(11);
        tabWidget->setCurrentIndex(0);
        stackedWidget2->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(squeezeview_base);
    } // setupUi

    void retranslateUi(QWidget *squeezeview_base)
    {
        squeezeview_base->setWindowTitle(tr2i18n("Form", 0));
        headerImg->setText(tr2i18n("TextLabel", 0));
        headerLabel->setText(tr2i18n("welcome", 0));
        logoLabel->setText(tr2i18n("TextLabel", 0));
        lblGraphSoldItems->setText(tr2i18n("5 Most Sold Items", 0));
        lblGraphAlmostSoldOutItems->setText(tr2i18n("Almost Sold Out Items (Top 5 sold items)", 0));
        lblGraphSales->setText(tr2i18n("Sales", 0));
        lblGraphProfit->setText(tr2i18n("Profit", 0));
        lblProd1->setText(tr2i18n("1.-", 0));
        counter1->setText(QString());
        lblProd2->setText(tr2i18n("2.-", 0));
        counter2->setText(QString());
        lblProd3->setText(tr2i18n("3.-", 0));
        counter3->setText(QString());
        lblProd4->setText(tr2i18n("4.-", 0));
        counter4->setText(QString());
        lblProd5->setText(tr2i18n("5.-", 0));
        counter5->setText(QString());
        groupBox->setTitle(QString());
        label->setText(tr2i18n("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; font-style:italic;\">View Products List As</span>:</p></body></html>", 0));
        chViewProductsListAsTable->setText(tr2i18n("Table", 0));
        chViewProductsListAsGrid->setText(tr2i18n("Grid", 0));
        btnAddProduct->setText(tr2i18n("Add Product", 0));
        btnDeleteProduct->setText(tr2i18n("Delete Product", 0));
        btnExportProducts->setText(tr2i18n("Export", 0));
#ifndef UI_QT_NO_TOOLTIP
        tableBrowseOffers->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        btnAddOffer->setText(tr2i18n("Create New Offer", 0));
        btnDeleteOffer->setText(tr2i18n("Delete Selected Offer", 0));
        btnExportOffers->setText(tr2i18n("Export", 0));
        errLabel->setText(tr2i18n("TextLabel", 0));
#ifndef UI_QT_NO_TOOLTIP
        usersView->setToolTip(tr2i18n("To edit an user, double click on it.", 0));
#endif // QT_NO_TOOLTIP
        btnAddUser->setText(tr2i18n("Add User", 0));
        btnDeleteUser->setText(tr2i18n("Delete Selected", 0));
        btnExportUsers->setText(tr2i18n("Export", 0));
        btnAddMeasure->setText(tr2i18n("Add Measure", 0));
        btnDeleteMeasure->setText(tr2i18n("Delete Selected", 0));
        btnExportMeasures->setText(tr2i18n("Export", 0));
        btnAddCategory->setText(tr2i18n("Add Category", 0));
        btnDeleteCategory->setText(tr2i18n("Delete Selected", 0));
        btnExportCategories->setText(tr2i18n("Export", 0));
        btnAddClient->setText(tr2i18n("Add Client", 0));
        btnDeleteClient->setText(tr2i18n("Delete Selected", 0));
        btnExportClients->setText(tr2i18n("Export", 0));
        btnAddRandomMsg->setText(tr2i18n("Add New Message", 0));
        label_6->setText(tr2i18n("TextLabel", 0));
#ifndef UI_QT_NO_TOOLTIP
        btnCashFlow->setToolTip(tr2i18n("Cash Flow", 0));
#endif // QT_NO_TOOLTIP
        btnCashFlow->setText(tr2i18n("...", 0));
#ifndef UI_QT_NO_TOOLTIP
        btnTransactions->setToolTip(tr2i18n("Transactions", 0));
#endif // QT_NO_TOOLTIP
        btnTransactions->setText(tr2i18n("...", 0));
#ifndef UI_QT_NO_TOOLTIP
        btnBalances->setToolTip(tr2i18n("Balances", 0));
#endif // QT_NO_TOOLTIP
        btnBalances->setText(tr2i18n("...", 0));
#ifndef UI_QT_NO_TOOLTIP
        btnSO->setToolTip(tr2i18n("Special Orders", 0));
#endif // QT_NO_TOOLTIP
        btnSO->setText(tr2i18n("...", 0));
        btnPrintBalance->setText(tr2i18n("Print", 0));
        btnExport->setText(tr2i18n("Export", 0));
        groupFilterBalances->setTitle(tr2i18n("Filter", 0));
        rbBalancesFilterByState->setText(tr2i18n("show not empty balances", 0));
        rbBalancesFilterBySuspicious->setText(tr2i18n("show suspicious balances", 0));
        rbBalancesFilterByDate->setText(tr2i18n("by Date:", 0));
        rbBalancesFilterByUser->setText(tr2i18n("by Vendor Name", 0));
        rbBalancesFilterByCashInLess->setText(tr2i18n("Cash In <", 0));
        editBalancesFilterByCasInLess->setPrefix(tr2i18n("$", 0));
        rbBalancesFilterByCashInGrater->setText(tr2i18n("Cash In >", 0));
        editBalancesFilterByCashInGrater->setPrefix(tr2i18n("$", 0));
        rbBalancesFilgerByTerminalNum->setText(tr2i18n("by Terminal Number", 0));
        groupFilterTransactions->setTitle(tr2i18n("Filter", 0));
        rbTransactionsFilterOnlySales->setText(tr2i18n("Only Sales", 0));
        rbTransFilterByStateFinished->setText(tr2i18n("show finished transactions", 0));
        rbTransactionsFilterOnlyPurchases->setText(tr2i18n("Only Purchases", 0));
        rbTransFilterByStateCancelled->setText(tr2i18n("show cancelled transactions", 0));
        rbTransactionsFilterOnlyChangesReturns->setText(tr2i18n("Only Changes and Returns", 0));
        rbTransFilterByPaidCredit->setText(tr2i18n("show transactions paid with card", 0));
        rbTransFilterByPaidCash->setText(tr2i18n("show transactions paid in cash", 0));
        rbTransFilterByDate->setText(tr2i18n("by Date:", 0));
        rbTransFilterByUser->setText(tr2i18n("by Vendor Name", 0));
        rbTransFilterByClient->setText(tr2i18n("by Client Name:", 0));
        rbTransFilterByAmountLess->setText(tr2i18n("Amount Paid <", 0));
        editTransAmountLess->setPrefix(tr2i18n("$", 0));
        rbTransFilterByAmountGreater->setText(tr2i18n("Amount Paid >", 0));
        editTransAmountGreater->setPrefix(tr2i18n("$", 0));
        rbTransFilterTerminalNum->setText(tr2i18n("by Terminal Number", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabOnScreen), tr2i18n("On Screen", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabPrinted), tr2i18n("Printed", 0));
        btnAddCurrency->setText(tr2i18n("Add Currency", 0));
        btnDeleteCurrency->setText(tr2i18n("Delete Currency", 0));
        lblReservationDetails->setText(tr2i18n("TextLabel", 0));
        groupFilterOffers->setTitle(tr2i18n("Filter", 0));
        chOffersFilterByProduct->setText(tr2i18n("by product description", 0));
        chOffersTodayDiscounts->setText(tr2i18n("by today discounts", 0));
        chOffersSelectDate->setText(tr2i18n("by valid discount for date:", 0));
        chOffersOldDiscounts->setText(tr2i18n("by old discounts", 0));
        groupFilterProducts->setTitle(tr2i18n("Filter", 0));
        rbProductsFilterByDesc->setText(tr2i18n("by description", 0));
        rbProductsFilterByCategory->setText(tr2i18n("by category", 0));
        rbProductsFilterByAvailable->setText(tr2i18n("show available items", 0));
        rbProductsFilterByAlmostSoldOut->setText(tr2i18n("show almost sold out items", 0));
        rbProductsFilterByNotAvailable->setText(tr2i18n("show sold out items", 0));
        rbProductsFilterByLessSold->setText(tr2i18n("show less sold", 0));
        rbProductsFilterByMostSold->setText(tr2i18n("show most sold", 0));
        rbProductsFilterByRaw->setText(tr2i18n("show raw products only", 0));
        rbProductsFilterByGroup->setText(tr2i18n("show only group/pack products", 0));
        groupSOFilter->setTitle(tr2i18n("Filter", 0));
        label_5->setText(tr2i18n("By Date:", 0));
        rbSOByDate->setText(tr2i18n("All orders for day:", 0));
        rbSOByThisWeek->setText(tr2i18n("All orders whitin 7 days", 0));
        rbSOByThisMonth->setText(tr2i18n("All orders within 30 days", 0));
        label_4->setText(tr2i18n("By Order Status:", 0));
        rbSOByStatusPending->setText(tr2i18n("All Pending orders", 0));
        rbSOByStatusInProgress->setText(tr2i18n("All In-Progress orders", 0));
        rbSOByStatusReady->setText(tr2i18n("All Ready orders", 0));
        rbSOByStatusDelivered->setText(tr2i18n("All Delivered orders", 0));
        rbSOByStatusCancelled->setText(tr2i18n("All Cancelled orders", 0));
    } // retranslateUi

};

namespace Ui {
    class squeezeview_base: public Ui_squeezeview_base {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SQUEEZEVIEW_BASE_H

