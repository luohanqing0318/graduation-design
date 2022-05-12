/********************************************************************************
** Form generated from reading UI file 'signdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNDIALOG_H
#define UI_SIGNDIALOG_H

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

class Ui_SignDialog
{
public:
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;
    QRadioButton *radioButton_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_5;
    QRadioButton *radioButton;
    QLabel *label_3;
    QLabel *label_4;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *SignDialog)
    {
        if (SignDialog->objectName().isEmpty())
            SignDialog->setObjectName(QStringLiteral("SignDialog"));
        SignDialog->resize(418, 448);
        lineEdit_2 = new QLineEdit(SignDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 130, 113, 21));
        lineEdit_5 = new QLineEdit(SignDialog);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(180, 250, 113, 21));
        pushButton = new QPushButton(SignDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 350, 93, 28));
        radioButton_2 = new QRadioButton(SignDialog);
        buttonGroup = new QButtonGroup(SignDialog);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(250, 310, 115, 19));
        lineEdit_4 = new QLineEdit(SignDialog);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(180, 210, 113, 21));
        lineEdit_3 = new QLineEdit(SignDialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(180, 170, 113, 21));
        label_6 = new QLabel(SignDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(170, 50, 72, 15));
        lineEdit = new QLineEdit(SignDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 90, 113, 21));
        label_2 = new QLabel(SignDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 130, 72, 15));
        pushButton_2 = new QPushButton(SignDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 350, 93, 28));
        label = new QLabel(SignDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 90, 72, 15));
        label_5 = new QLabel(SignDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 250, 72, 15));
        radioButton = new QRadioButton(SignDialog);
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(80, 310, 115, 19));
        radioButton->setChecked(true);
        label_3 = new QLabel(SignDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 170, 72, 15));
        label_4 = new QLabel(SignDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 210, 72, 15));

        retranslateUi(SignDialog);

        QMetaObject::connectSlotsByName(SignDialog);
    } // setupUi

    void retranslateUi(QDialog *SignDialog)
    {
        SignDialog->setWindowTitle(QApplication::translate("SignDialog", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SignDialog", "\345\256\214\346\210\220", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("SignDialog", "\346\210\221\346\230\257\346\210\277\344\270\234", Q_NULLPTR));
        label_6->setText(QApplication::translate("SignDialog", "\346\254\242\350\277\216\346\263\250\345\206\214", Q_NULLPTR));
        label_2->setText(QApplication::translate("SignDialog", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SignDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("SignDialog", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("SignDialog", "\347\224\265\350\257\235\357\274\232", Q_NULLPTR));
        radioButton->setText(QApplication::translate("SignDialog", "\346\210\221\346\230\257\347\247\237\345\256\242", Q_NULLPTR));
        label_3->setText(QApplication::translate("SignDialog", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("SignDialog", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SignDialog: public Ui_SignDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNDIALOG_H
