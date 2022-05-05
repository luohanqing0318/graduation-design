/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLineEdit *username_lineEdit;
    QLineEdit *password_lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_1;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(400, 300);
        username_lineEdit = new QLineEdit(LoginDialog);
        username_lineEdit->setObjectName(QStringLiteral("username_lineEdit"));
        username_lineEdit->setGeometry(QRect(140, 150, 131, 21));
        password_lineEdit = new QLineEdit(LoginDialog);
        password_lineEdit->setObjectName(QStringLiteral("password_lineEdit"));
        password_lineEdit->setGeometry(QRect(140, 190, 131, 20));
        pushButton = new QPushButton(LoginDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 250, 80, 31));
        pushButton_2 = new QPushButton(LoginDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 250, 80, 31));
        radioButton_2 = new QRadioButton(LoginDialog);
        buttonGroup = new QButtonGroup(LoginDialog);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(240, 220, 115, 19));
        radioButton_1 = new QRadioButton(LoginDialog);
        buttonGroup->addButton(radioButton_1);
        radioButton_1->setObjectName(QStringLiteral("radioButton_1"));
        radioButton_1->setGeometry(QRect(80, 220, 115, 19));
        radioButton_1->setChecked(true);
        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 60, 72, 15));
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 110, 72, 15));
        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 150, 61, 16));
        label_4 = new QLabel(LoginDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 190, 41, 16));

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("LoginDialog", "\346\263\250\345\206\214", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("LoginDialog", "\346\210\221\346\230\257\346\210\277\344\270\234", Q_NULLPTR));
        radioButton_1->setText(QApplication::translate("LoginDialog", "\346\210\221\346\230\257\347\247\237\345\256\242", Q_NULLPTR));
        label->setText(QApplication::translate("LoginDialog", "\346\254\242\350\277\216\344\275\277\347\224\250", Q_NULLPTR));
        label_2->setText(QApplication::translate("LoginDialog", "LightHouse", Q_NULLPTR));
        label_3->setText(QApplication::translate("LoginDialog", "\347\224\250\346\210\267\345\220\215:", Q_NULLPTR));
        label_4->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
