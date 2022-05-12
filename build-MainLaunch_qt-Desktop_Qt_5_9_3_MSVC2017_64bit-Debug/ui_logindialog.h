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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLineEdit *username_lineEdit;
    QLineEdit *password_lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_6;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_1;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(423, 380);
        LoginDialog->setStyleSheet(QStringLiteral("background-color{color:white};"));
        username_lineEdit = new QLineEdit(LoginDialog);
        username_lineEdit->setObjectName(QStringLiteral("username_lineEdit"));
        username_lineEdit->setGeometry(QRect(160, 150, 131, 21));
        password_lineEdit = new QLineEdit(LoginDialog);
        password_lineEdit->setObjectName(QStringLiteral("password_lineEdit"));
        password_lineEdit->setGeometry(QRect(160, 190, 131, 20));
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 40, 231, 91));
        label_2->setStyleSheet(QStringLiteral("font: 25pt \"CountryBlueprint\";"));
        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 150, 61, 16));
        label_3->setStyleSheet(QStringLiteral("font: 9pt \"Microsoft YaHei UI\";"));
        label_4 = new QLabel(LoginDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 190, 41, 16));
        label_4->setStyleSheet(QStringLiteral("font: 9pt \"Microsoft YaHei UI\";"));
        horizontalLayoutWidget = new QWidget(LoginDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(70, 280, 291, 82));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 60));
        pushButton->setMaximumSize(QSize(16777215, 60));
        pushButton->setStyleSheet(QStringLiteral("font: 25 12pt \"Microsoft YaHei\";"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 60));
        pushButton_2->setMaximumSize(QSize(16777215, 60));
        pushButton_2->setStyleSheet(QStringLiteral("font: 25 12pt \"Microsoft YaHei\";"));

        horizontalLayout->addWidget(pushButton_2);

        label_5 = new QLabel(LoginDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 10, 181, 161));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/images/\345\205\266\344\273\226\357\274\214zjark\347\231\273\345\275\225\350\203\214\346\231\257.png);"));
        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 230, 121, 21));
        label->setStyleSheet(QString::fromUtf8("image: url(:/200\347\224\250\346\210\267_\347\224\250\346\210\267.png);"));
        label_6 = new QLabel(LoginDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(200, 230, 71, 31));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/\344\270\232\344\270\273.png);"));
        radioButton_2 = new QRadioButton(LoginDialog);
        buttonGroup = new QButtonGroup(LoginDialog);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(260, 230, 126, 24));
        radioButton_2->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));
        radioButton_1 = new QRadioButton(LoginDialog);
        buttonGroup->addButton(radioButton_1);
        radioButton_1->setObjectName(QStringLiteral("radioButton_1"));
        radioButton_1->setGeometry(QRect(100, 230, 101, 24));
        radioButton_1->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));
        radioButton_1->setChecked(true);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", Q_NULLPTR));
        label_2->setText(QApplication::translate("LoginDialog", "LightHouse", Q_NULLPTR));
        label_3->setText(QApplication::translate("LoginDialog", "\347\224\250\346\210\267\345\220\215:", Q_NULLPTR));
        label_4->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("LoginDialog", "\346\263\250\345\206\214", Q_NULLPTR));
        label_5->setText(QString());
        label->setText(QString());
        label_6->setText(QString());
        radioButton_2->setText(QApplication::translate("LoginDialog", "\346\210\221\346\230\257\346\210\277\344\270\234", Q_NULLPTR));
        radioButton_1->setText(QApplication::translate("LoginDialog", "\346\210\221\346\230\257\347\247\237\345\256\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
