/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

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

class Ui_Dialog
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_6;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 364);
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(170, 50, 113, 21));
        lineEdit_2 = new QLineEdit(Dialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 90, 113, 21));
        lineEdit_3 = new QLineEdit(Dialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(170, 130, 113, 21));
        lineEdit_4 = new QLineEdit(Dialog);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(170, 170, 113, 21));
        lineEdit_5 = new QLineEdit(Dialog);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(170, 210, 113, 21));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 50, 72, 15));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 90, 72, 15));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 130, 72, 15));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 170, 72, 15));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 210, 72, 15));
        radioButton = new QRadioButton(Dialog);
        buttonGroup = new QButtonGroup(Dialog);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(70, 270, 115, 19));
        radioButton_2 = new QRadioButton(Dialog);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(240, 270, 115, 19));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 310, 93, 28));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 310, 93, 28));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(160, 10, 72, 15));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog", "\347\224\265\350\257\235\357\274\232", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Dialog", "\346\210\221\346\230\257\347\247\237\345\256\242", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("Dialog", "\346\210\221\346\230\257\346\210\277\344\270\234", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog", "\345\256\214\346\210\220", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog", "\345\217\226\346\266\210", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog", "\346\254\242\350\277\216\346\263\250\345\206\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
