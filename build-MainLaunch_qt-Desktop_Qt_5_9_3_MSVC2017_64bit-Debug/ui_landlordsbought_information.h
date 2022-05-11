/********************************************************************************
** Form generated from reading UI file 'landlordsbought_information.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANDLORDSBOUGHT_INFORMATION_H
#define UI_LANDLORDSBOUGHT_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_landlordsbought_information
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *landlordsbought_information)
    {
        if (landlordsbought_information->objectName().isEmpty())
            landlordsbought_information->setObjectName(QStringLiteral("landlordsbought_information"));
        landlordsbought_information->resize(510, 558);
        listWidget = new QListWidget(landlordsbought_information);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 481, 491));
        pushButton = new QPushButton(landlordsbought_information);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 510, 131, 41));
        pushButton->setStyleSheet(QStringLiteral("font: 25 12pt \"Microsoft YaHei\";"));

        retranslateUi(landlordsbought_information);

        QMetaObject::connectSlotsByName(landlordsbought_information);
    } // setupUi

    void retranslateUi(QWidget *landlordsbought_information)
    {
        landlordsbought_information->setWindowTitle(QApplication::translate("landlordsbought_information", "\346\210\277\344\270\234\345\220\210\345\220\214\344\277\241\346\201\257", Q_NULLPTR));
        pushButton->setText(QApplication::translate("landlordsbought_information", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class landlordsbought_information: public Ui_landlordsbought_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANDLORDSBOUGHT_INFORMATION_H
