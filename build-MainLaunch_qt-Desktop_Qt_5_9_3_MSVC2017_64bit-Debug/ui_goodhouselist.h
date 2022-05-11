/********************************************************************************
** Form generated from reading UI file 'goodhouselist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOODHOUSELIST_H
#define UI_GOODHOUSELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_goodhouselist
{
public:
    QListWidget *listWidget;

    void setupUi(QWidget *goodhouselist)
    {
        if (goodhouselist->objectName().isEmpty())
            goodhouselist->setObjectName(QStringLiteral("goodhouselist"));
        goodhouselist->resize(608, 572);
        listWidget = new QListWidget(goodhouselist);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 581, 501));

        retranslateUi(goodhouselist);

        QMetaObject::connectSlotsByName(goodhouselist);
    } // setupUi

    void retranslateUi(QWidget *goodhouselist)
    {
        goodhouselist->setWindowTitle(QApplication::translate("goodhouselist", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class goodhouselist: public Ui_goodhouselist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOODHOUSELIST_H
