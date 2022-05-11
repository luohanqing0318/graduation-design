/********************************************************************************
** Form generated from reading UI file 'tentantswishlist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TENTANTSWISHLIST_H
#define UI_TENTANTSWISHLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tentantswishlist
{
public:
    QListWidget *listWidget;

    void setupUi(QWidget *tentantswishlist)
    {
        if (tentantswishlist->objectName().isEmpty())
            tentantswishlist->setObjectName(QStringLiteral("tentantswishlist"));
        tentantswishlist->resize(440, 456);
        listWidget = new QListWidget(tentantswishlist);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 421, 431));

        retranslateUi(tentantswishlist);

        QMetaObject::connectSlotsByName(tentantswishlist);
    } // setupUi

    void retranslateUi(QWidget *tentantswishlist)
    {
        tentantswishlist->setWindowTitle(QApplication::translate("tentantswishlist", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tentantswishlist: public Ui_tentantswishlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TENTANTSWISHLIST_H
