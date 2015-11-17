#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'edituser_widget.ui'
**
** Created: Mon Apr 20 14:08:46 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITUSER_WIDGET_H
#define UI_EDITUSER_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userEditor
{
public:
    QGridLayout *gridLayout;
    QLabel *label_14;
    QLabel *labelUsersPhoto;
    QLineEdit *editUsersUsername;
    QLabel *labelp;
    QLineEdit *editUsersPassword;
    QLabel *label_15;
    QLineEdit *editUsersName;
    QPushButton *btnChangeUserPhoto;
    QLabel *label_16;
    QTextEdit *editUsersAddress;
    QSpacerItem *spacerItem;
    QLabel *label_17;
    QLineEdit *editUsersPhone;
    QLabel *label_18;
    QLineEdit *editUsersCell;
    QGroupBox *groupRoles;
    QVBoxLayout *verticalLayout;
    QRadioButton *chRoleBasic;
    QRadioButton *chRoleSupervisor;
    QRadioButton *chRoleAdmin;

    void setupUi(QWidget *userEditor)
    {
        if (userEditor->objectName().isEmpty())
            userEditor->setObjectName(QString::fromUtf8("userEditor"));
        userEditor->resize(420, 465);
        gridLayout = new QGridLayout(userEditor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_14 = new QLabel(userEditor);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 0, 0, 1, 1);

        labelUsersPhoto = new QLabel(userEditor);
        labelUsersPhoto->setObjectName(QString::fromUtf8("labelUsersPhoto"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelUsersPhoto->sizePolicy().hasHeightForWidth());
        labelUsersPhoto->setSizePolicy(sizePolicy);
        labelUsersPhoto->setMinimumSize(QSize(128, 128));
        labelUsersPhoto->setFrameShape(QFrame::StyledPanel);
        labelUsersPhoto->setFrameShadow(QFrame::Sunken);
        labelUsersPhoto->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelUsersPhoto, 0, 1, 5, 1);

        editUsersUsername = new QLineEdit(userEditor);
        editUsersUsername->setObjectName(QString::fromUtf8("editUsersUsername"));

        gridLayout->addWidget(editUsersUsername, 1, 0, 1, 1);

        labelp = new QLabel(userEditor);
        labelp->setObjectName(QString::fromUtf8("labelp"));

        gridLayout->addWidget(labelp, 2, 0, 1, 1);

        editUsersPassword = new QLineEdit(userEditor);
        editUsersPassword->setObjectName(QString::fromUtf8("editUsersPassword"));

        gridLayout->addWidget(editUsersPassword, 3, 0, 1, 1);

        label_15 = new QLabel(userEditor);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 4, 0, 1, 1);

        editUsersName = new QLineEdit(userEditor);
        editUsersName->setObjectName(QString::fromUtf8("editUsersName"));

        gridLayout->addWidget(editUsersName, 5, 0, 1, 1);

        btnChangeUserPhoto = new QPushButton(userEditor);
        btnChangeUserPhoto->setObjectName(QString::fromUtf8("btnChangeUserPhoto"));

        gridLayout->addWidget(btnChangeUserPhoto, 5, 1, 2, 1);

        label_16 = new QLabel(userEditor);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 6, 0, 1, 1);

        editUsersAddress = new QTextEdit(userEditor);
        editUsersAddress->setObjectName(QString::fromUtf8("editUsersAddress"));
        editUsersAddress->setMaximumSize(QSize(16777215, 100));
        editUsersAddress->setTabChangesFocus(true);
        editUsersAddress->setAcceptRichText(false);

        gridLayout->addWidget(editUsersAddress, 7, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 7, 1, 1, 1);

        label_17 = new QLabel(userEditor);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 8, 0, 1, 1);

        editUsersPhone = new QLineEdit(userEditor);
        editUsersPhone->setObjectName(QString::fromUtf8("editUsersPhone"));

        gridLayout->addWidget(editUsersPhone, 9, 0, 1, 1);

        label_18 = new QLabel(userEditor);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout->addWidget(label_18, 10, 0, 1, 1);

        editUsersCell = new QLineEdit(userEditor);
        editUsersCell->setObjectName(QString::fromUtf8("editUsersCell"));

        gridLayout->addWidget(editUsersCell, 11, 0, 1, 1);

        groupRoles = new QGroupBox(userEditor);
        groupRoles->setObjectName(QString::fromUtf8("groupRoles"));
        verticalLayout = new QVBoxLayout(groupRoles);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        chRoleBasic = new QRadioButton(groupRoles);
        chRoleBasic->setObjectName(QString::fromUtf8("chRoleBasic"));
        chRoleBasic->setChecked(true);

        verticalLayout->addWidget(chRoleBasic);

        chRoleSupervisor = new QRadioButton(groupRoles);
        chRoleSupervisor->setObjectName(QString::fromUtf8("chRoleSupervisor"));

        verticalLayout->addWidget(chRoleSupervisor);

        chRoleAdmin = new QRadioButton(groupRoles);
        chRoleAdmin->setObjectName(QString::fromUtf8("chRoleAdmin"));

        verticalLayout->addWidget(chRoleAdmin);


        gridLayout->addWidget(groupRoles, 12, 0, 1, 1);

#ifndef UI_QT_NO_SHORTCUT
        label_14->setBuddy(editUsersUsername);
        labelp->setBuddy(editUsersPassword);
        label_15->setBuddy(editUsersName);
        label_16->setBuddy(editUsersAddress);
        label_17->setBuddy(editUsersPhone);
        label_18->setBuddy(editUsersCell);
#endif // QT_NO_SHORTCUT

        retranslateUi(userEditor);

        QMetaObject::connectSlotsByName(userEditor);
    } // setupUi

    void retranslateUi(QWidget *userEditor)
    {
        userEditor->setWindowTitle(tr2i18n("Form", 0));
        label_14->setText(tr2i18n("&Username:", 0));
        labelUsersPhoto->setText(QString());
        labelp->setText(tr2i18n("&Password:", 0));
        label_15->setText(tr2i18n("&Full Name:", 0));
        btnChangeUserPhoto->setText(tr2i18n("Change &Photo", 0));
        label_16->setText(tr2i18n("&Address:", 0));
        label_17->setText(tr2i18n("Phone", 0));
        label_18->setText(tr2i18n("Cell Phone:", 0));
        groupRoles->setTitle(tr2i18n("User Role", 0));
        chRoleBasic->setText(tr2i18n("Vendor", 0));
        chRoleSupervisor->setText(tr2i18n("Supervisor", 0));
        chRoleAdmin->setText(tr2i18n("Administrator", 0));
    } // retranslateUi

};

namespace Ui {
    class userEditor: public Ui_userEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // EDITUSER_WIDGET_H

