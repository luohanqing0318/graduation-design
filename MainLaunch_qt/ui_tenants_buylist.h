/********************************************************************************
** Form generated from reading UI file 'tenants_buylist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TENANTS_BUYLIST_H
#define UI_TENANTS_BUYLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tenants_buylist
{
public:
    QListWidget *listWidget;

    void setupUi(QWidget *tenants_buylist)
    {
        if (tenants_buylist->objectName().isEmpty())
            tenants_buylist->setObjectName(QStringLiteral("tenants_buylist"));
        tenants_buylist->resize(453, 472);
        listWidget = new QListWidget(tenants_buylist);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 20, 411, 431));

        retranslateUi(tenants_buylist);

        QMetaObject::connectSlotsByName(tenants_buylist);
    } // setupUi

    void retranslateUi(QWidget *tenants_buylist)
    {
        tenants_buylist->setWindowTitle(QApplication::translate("tenants_buylist", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tenants_buylist: public Ui_tenants_buylist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TENANTS_BUYLIST_H
