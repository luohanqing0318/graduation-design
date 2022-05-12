/********************************************************************************
** Form generated from reading UI file 'smallhouselist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMALLHOUSELIST_H
#define UI_SMALLHOUSELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_smallhouselist
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *smallhouselist)
    {
        if (smallhouselist->objectName().isEmpty())
            smallhouselist->setObjectName(QStringLiteral("smallhouselist"));
        smallhouselist->resize(604, 573);
        listWidget = new QListWidget(smallhouselist);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 30, 561, 471));
        pushButton = new QPushButton(smallhouselist);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 510, 121, 51));
        pushButton->setStyleSheet(QStringLiteral("font: 25 14pt \"Microsoft YaHei\";"));

        retranslateUi(smallhouselist);

        QMetaObject::connectSlotsByName(smallhouselist);
    } // setupUi

    void retranslateUi(QWidget *smallhouselist)
    {
        smallhouselist->setWindowTitle(QApplication::translate("smallhouselist", "\345\220\210\347\247\237", Q_NULLPTR));
        pushButton->setText(QApplication::translate("smallhouselist", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class smallhouselist: public Ui_smallhouselist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMALLHOUSELIST_H
