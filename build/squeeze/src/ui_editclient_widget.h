#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'editclient_widget.ui'
**
** Created: Mon Apr 20 14:08:46 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCLIENT_WIDGET_H
#define UI_EDITCLIENT_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>
#include "../../../mibitWidgets/mibitlineedit.h"
#include "kdatewidget.h"

QT_BEGIN_NAMESPACE

class Ui_clientEditor
{
public:
    QGridLayout *gridLayout;
    QLabel *label_14;
    QLabel *labelClientPhoto;
    MibitLineEdit *editClientName;
    QLabel *label_16;
    QTextEdit *editClientAddress;
    QLabel *label_17;
    QLabel *label_18;
    MibitLineEdit *editClientPhone;
    MibitLineEdit *editClientCell;
    QPushButton *btnChangeClientPhoto;
    QLabel *label;
    QLabel *label_2;
    MibitLineEdit *editClientPoints;
    MibitLineEdit *editClientDiscount;
    QLabel *label_3;
    KDateWidget *sinceDatePicker;
    QFrame *line;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *clientEditor)
    {
        if (clientEditor->objectName().isEmpty())
            clientEditor->setObjectName(QString::fromUtf8("clientEditor"));
        clientEditor->resize(348, 295);
        gridLayout = new QGridLayout(clientEditor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_14 = new QLabel(clientEditor);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 0, 0, 1, 1);

        labelClientPhoto = new QLabel(clientEditor);
        labelClientPhoto->setObjectName(QString::fromUtf8("labelClientPhoto"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelClientPhoto->sizePolicy().hasHeightForWidth());
        labelClientPhoto->setSizePolicy(sizePolicy);
        labelClientPhoto->setMinimumSize(QSize(128, 128));
        labelClientPhoto->setFrameShape(QFrame::StyledPanel);
        labelClientPhoto->setFrameShadow(QFrame::Sunken);
        labelClientPhoto->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelClientPhoto, 0, 2, 4, 1);

        editClientName = new MibitLineEdit(clientEditor);
        editClientName->setObjectName(QString::fromUtf8("editClientName"));

        gridLayout->addWidget(editClientName, 1, 0, 1, 2);

        label_16 = new QLabel(clientEditor);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 2, 0, 1, 1);

        editClientAddress = new QTextEdit(clientEditor);
        editClientAddress->setObjectName(QString::fromUtf8("editClientAddress"));
        editClientAddress->setMaximumSize(QSize(16777215, 60));
        editClientAddress->setTabChangesFocus(true);
        editClientAddress->setAcceptRichText(false);

        gridLayout->addWidget(editClientAddress, 3, 0, 1, 2);

        label_17 = new QLabel(clientEditor);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 4, 0, 1, 1);

        label_18 = new QLabel(clientEditor);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout->addWidget(label_18, 4, 1, 1, 1);

        editClientPhone = new MibitLineEdit(clientEditor);
        editClientPhone->setObjectName(QString::fromUtf8("editClientPhone"));
        editClientPhone->setMinimumSize(QSize(94, 0));
        editClientPhone->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(editClientPhone, 5, 0, 1, 1);

        editClientCell = new MibitLineEdit(clientEditor);
        editClientCell->setObjectName(QString::fromUtf8("editClientCell"));
        editClientCell->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(editClientCell, 5, 1, 1, 1);

        btnChangeClientPhoto = new QPushButton(clientEditor);
        btnChangeClientPhoto->setObjectName(QString::fromUtf8("btnChangeClientPhoto"));

        gridLayout->addWidget(btnChangeClientPhoto, 5, 2, 1, 1);

        label = new QLabel(clientEditor);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 6, 0, 1, 1);

        label_2 = new QLabel(clientEditor);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 6, 1, 1, 1);

        editClientPoints = new MibitLineEdit(clientEditor);
        editClientPoints->setObjectName(QString::fromUtf8("editClientPoints"));
        editClientPoints->setMinimumSize(QSize(94, 0));
        editClientPoints->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(editClientPoints, 7, 0, 1, 1);

        editClientDiscount = new MibitLineEdit(clientEditor);
        editClientDiscount->setObjectName(QString::fromUtf8("editClientDiscount"));
        editClientDiscount->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(editClientDiscount, 7, 1, 1, 1);

        label_3 = new QLabel(clientEditor);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 8, 0, 1, 1);

        sinceDatePicker = new KDateWidget(clientEditor);
        sinceDatePicker->setObjectName(QString::fromUtf8("sinceDatePicker"));

        gridLayout->addWidget(sinceDatePicker, 9, 0, 1, 2);

        line = new QFrame(clientEditor);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 10, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 11, 0, 1, 1);

#ifndef UI_QT_NO_SHORTCUT
        label_14->setBuddy(editClientName);
        label_16->setBuddy(editClientAddress);
        label_17->setBuddy(editClientPhone);
        label_18->setBuddy(editClientCell);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(editClientName, editClientAddress);
        QWidget::setTabOrder(editClientAddress, editClientPhone);
        QWidget::setTabOrder(editClientPhone, editClientCell);
        QWidget::setTabOrder(editClientCell, editClientPoints);
        QWidget::setTabOrder(editClientPoints, editClientDiscount);
        QWidget::setTabOrder(editClientDiscount, btnChangeClientPhoto);

        retranslateUi(clientEditor);

        QMetaObject::connectSlotsByName(clientEditor);
    } // setupUi

    void retranslateUi(QWidget *clientEditor)
    {
        clientEditor->setWindowTitle(tr2i18n("Form", 0));
        label_14->setText(tr2i18n("&Name:", 0));
        labelClientPhoto->setText(QString());
        label_16->setText(tr2i18n("&Address:", 0));
        label_17->setText(tr2i18n("Phone", 0));
        label_18->setText(tr2i18n("Cell Phone:", 0));
        btnChangeClientPhoto->setText(tr2i18n("Change &Photo", 0));
        label->setText(tr2i18n("Points:", 0));
        label_2->setText(tr2i18n("Discount:", 0));
        label_3->setText(tr2i18n("Since:", 0));
    } // retranslateUi

};

namespace Ui {
    class clientEditor: public Ui_clientEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // EDITCLIENT_WIDGET_H

