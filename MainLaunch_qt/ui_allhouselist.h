/********************************************************************************
** Form generated from reading UI file 'allhouselist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLHOUSELIST_H
#define UI_ALLHOUSELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_allhouselist
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *allhouselist)
    {
        if (allhouselist->objectName().isEmpty())
            allhouselist->setObjectName(QStringLiteral("allhouselist"));
        allhouselist->resize(553, 553);
        listWidget = new QListWidget(allhouselist);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 531, 481));
        pushButton = new QPushButton(allhouselist);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 500, 141, 41));
        pushButton->setStyleSheet(QStringLiteral("font: 25 14pt \"Microsoft YaHei\";"));

        retranslateUi(allhouselist);

        QMetaObject::connectSlotsByName(allhouselist);
    } // setupUi

    void retranslateUi(QWidget *allhouselist)
    {
        allhouselist->setWindowTitle(QApplication::translate("allhouselist", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("allhouselist", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class allhouselist: public Ui_allhouselist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLHOUSELIST_H
