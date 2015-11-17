#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'prefs_base.ui'
**
** Created: Mon Apr 20 14:00:14 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFS_BASE_H
#define UI_PREFS_BASE_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kcolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_prefs_base
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *hboxLayout;
    QLabel *label_3;
    QLineEdit *kcfg_editTerminalNumber;
    QGroupBox *groupBoxOb;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *kcfg_showDialogOnPrinting;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QSpinBox *kcfg_ticketTime;
    QCheckBox *kcfg_requiereDelAuth;
    QGroupBox *groupMatrix;
    QVBoxLayout *vboxLayout;
    QCheckBox *kcfg_showGrid;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSpinBox *kcfg_stockAlertValue;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *kcfg_displayWarningOnLowCash;
    QDoubleSpinBox *kcfg_cashMinLevel;
    QGroupBox *groupTax;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *kcfg_addTax;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *prefs_base)
    {
        if (prefs_base->objectName().isEmpty())
            prefs_base->setObjectName(QString::fromUtf8("prefs_base"));
        prefs_base->resize(439, 525);
        prefs_base->setMinimumSize(QSize(0, 525));
        verticalLayout_2 = new QVBoxLayout(prefs_base);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_3 = new QLabel(prefs_base);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout->addWidget(label_3);

        kcfg_editTerminalNumber = new QLineEdit(prefs_base);
        kcfg_editTerminalNumber->setObjectName(QString::fromUtf8("kcfg_editTerminalNumber"));

        hboxLayout->addWidget(kcfg_editTerminalNumber);


        verticalLayout_2->addLayout(hboxLayout);

        groupBoxOb = new QGroupBox(prefs_base);
        groupBoxOb->setObjectName(QString::fromUtf8("groupBoxOb"));
        groupBoxOb->setMinimumSize(QSize(0, 0));
        verticalLayout_3 = new QVBoxLayout(groupBoxOb);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        kcfg_showDialogOnPrinting = new QCheckBox(groupBoxOb);
        kcfg_showDialogOnPrinting->setObjectName(QString::fromUtf8("kcfg_showDialogOnPrinting"));

        verticalLayout_3->addWidget(kcfg_showDialogOnPrinting);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(groupBoxOb);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setIndent(30);

        horizontalLayout_2->addWidget(label_5);

        kcfg_ticketTime = new QSpinBox(groupBoxOb);
        kcfg_ticketTime->setObjectName(QString::fromUtf8("kcfg_ticketTime"));

        horizontalLayout_2->addWidget(kcfg_ticketTime);


        verticalLayout_3->addLayout(horizontalLayout_2);

        kcfg_requiereDelAuth = new QCheckBox(groupBoxOb);
        kcfg_requiereDelAuth->setObjectName(QString::fromUtf8("kcfg_requiereDelAuth"));

        verticalLayout_3->addWidget(kcfg_requiereDelAuth);


        verticalLayout_2->addWidget(groupBoxOb);

        groupMatrix = new QGroupBox(prefs_base);
        groupMatrix->setObjectName(QString::fromUtf8("groupMatrix"));
        vboxLayout = new QVBoxLayout(groupMatrix);
        vboxLayout->setSpacing(2);
        vboxLayout->setContentsMargins(2, 2, 2, 2);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        kcfg_showGrid = new QCheckBox(groupMatrix);
        kcfg_showGrid->setObjectName(QString::fromUtf8("kcfg_showGrid"));

        vboxLayout->addWidget(kcfg_showGrid);


        verticalLayout_2->addWidget(groupMatrix);

        groupBox_2 = new QGroupBox(prefs_base);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        kcfg_stockAlertValue = new QSpinBox(groupBox_2);
        kcfg_stockAlertValue->setObjectName(QString::fromUtf8("kcfg_stockAlertValue"));
        kcfg_stockAlertValue->setMinimum(1);
        kcfg_stockAlertValue->setMaximum(9999);
        kcfg_stockAlertValue->setValue(10);

        horizontalLayout->addWidget(kcfg_stockAlertValue);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(prefs_base);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 80));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        kcfg_displayWarningOnLowCash = new QCheckBox(groupBox_3);
        kcfg_displayWarningOnLowCash->setObjectName(QString::fromUtf8("kcfg_displayWarningOnLowCash"));

        horizontalLayout_3->addWidget(kcfg_displayWarningOnLowCash);

        kcfg_cashMinLevel = new QDoubleSpinBox(groupBox_3);
        kcfg_cashMinLevel->setObjectName(QString::fromUtf8("kcfg_cashMinLevel"));
        kcfg_cashMinLevel->setMaximum(1e+06);

        horizontalLayout_3->addWidget(kcfg_cashMinLevel);


        verticalLayout_2->addWidget(groupBox_3);

        groupTax = new QGroupBox(prefs_base);
        groupTax->setObjectName(QString::fromUtf8("groupTax"));
        verticalLayout_4 = new QVBoxLayout(groupTax);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        kcfg_addTax = new QCheckBox(groupTax);
        kcfg_addTax->setObjectName(QString::fromUtf8("kcfg_addTax"));

        verticalLayout_4->addWidget(kcfg_addTax);


        verticalLayout_2->addWidget(groupTax);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(spacerItem);

#ifndef UI_QT_NO_SHORTCUT
        label_3->setBuddy(kcfg_editTerminalNumber);
#endif // QT_NO_SHORTCUT

        retranslateUi(prefs_base);

        QMetaObject::connectSlotsByName(prefs_base);
    } // setupUi

    void retranslateUi(QWidget *prefs_base)
    {
        label_3->setText(tr2i18n("This is the &Terminal Number:", 0));
        kcfg_editTerminalNumber->setInputMask(tr2i18n("0000; ", 0));
        groupBoxOb->setTitle(tr2i18n("Dialogs and Authorizations", 0));
        kcfg_showDialogOnPrinting->setText(tr2i18n("Show a dialog when printing ticket", 0));
        label_5->setText(tr2i18n("Time showing the dialog:", 0));
        kcfg_ticketTime->setSuffix(tr2i18n(" seconds", 0));
        kcfg_requiereDelAuth->setText(tr2i18n("Requiere authorisation to delete items from shopping list", 0));
        groupMatrix->setTitle(tr2i18n("Products Grid", 0));
        kcfg_showGrid->setText(tr2i18n("Show products grid", 0));
        groupBox_2->setTitle(tr2i18n("Low Stock", 0));
        label_4->setText(tr2i18n("Minimum value for alert", 0));
        groupBox_3->setTitle(tr2i18n("Drawer Cash Level", 0));
        kcfg_displayWarningOnLowCash->setText(tr2i18n("Display warning message when level is lower than", 0));
        kcfg_cashMinLevel->setPrefix(tr2i18n("$", 0));
        groupTax->setTitle(tr2i18n("Taxes", 0));
        kcfg_addTax->setText(tr2i18n("Add taxes to sale (not included in price)", 0));
        Q_UNUSED(prefs_base);
    } // retranslateUi

};

namespace Ui {
    class prefs_base: public Ui_prefs_base {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PREFS_BASE_H

