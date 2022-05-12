/********************************************************************************
** Form generated from reading UI file 'tenantsbought_information.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TENANTSBOUGHT_INFORMATION_H
#define UI_TENANTSBOUGHT_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tenantsbought_information
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *tenantsbought_information)
    {
        if (tenantsbought_information->objectName().isEmpty())
            tenantsbought_information->setObjectName(QStringLiteral("tenantsbought_information"));
        tenantsbought_information->resize(511, 557);
        listWidget = new QListWidget(tenantsbought_information);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 491, 481));
        pushButton = new QPushButton(tenantsbought_information);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 500, 151, 41));
        pushButton->setStyleSheet(QStringLiteral("font: 25 10pt \"Microsoft YaHei\";"));

        retranslateUi(tenantsbought_information);

        QMetaObject::connectSlotsByName(tenantsbought_information);
    } // setupUi

    void retranslateUi(QWidget *tenantsbought_information)
    {
        tenantsbought_information->setWindowTitle(QApplication::translate("tenantsbought_information", "\347\247\237\345\256\242\345\220\210\345\220\214\344\277\241\346\201\257", Q_NULLPTR));
        pushButton->setText(QApplication::translate("tenantsbought_information", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tenantsbought_information: public Ui_tenantsbought_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TENANTSBOUGHT_INFORMATION_H
