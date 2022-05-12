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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bighouselist
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *bighouselist)
    {
        if (bighouselist->objectName().isEmpty())
            bighouselist->setObjectName(QStringLiteral("bighouselist"));
        bighouselist->resize(606, 572);
        listWidget = new QListWidget(bighouselist);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 20, 561, 481));
        pushButton = new QPushButton(bighouselist);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 510, 121, 51));
        pushButton->setStyleSheet(QStringLiteral("font: 25 14pt \"Microsoft YaHei\";"));

        retranslateUi(bighouselist);

        QMetaObject::connectSlotsByName(bighouselist);
    } // setupUi

    void retranslateUi(QWidget *bighouselist)
    {
        bighouselist->setWindowTitle(QApplication::translate("bighouselist", "\346\225\264\347\247\237", Q_NULLPTR));
        pushButton->setText(QApplication::translate("bighouselist", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bighouselist: public Ui_bighouselist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIGHOUSELIST_H
