/********************************************************************************
** Form generated from reading UI file 'bighouselist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIGHOUSELIST_H
#define UI_BIGHOUSELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bighouselist
{
public:
    QListWidget *listWidget;

    void setupUi(QWidget *bighouselist)
    {
        if (bighouselist->objectName().isEmpty())
            bighouselist->setObjectName(QStringLiteral("bighouselist"));
        bighouselist->resize(462, 468);
        listWidget = new QListWidget(bighouselist);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 20, 421, 411));

        retranslateUi(bighouselist);

        QMetaObject::connectSlotsByName(bighouselist);
    } // setupUi

    void retranslateUi(QWidget *bighouselist)
    {
        bighouselist->setWindowTitle(QApplication::translate("bighouselist", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bighouselist: public Ui_bighouselist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIGHOUSELIST_H
