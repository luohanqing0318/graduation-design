/********************************************************************************
** Form generated from reading UI file 'alllighthouselist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLLIGHTHOUSELIST_H
#define UI_ALLLIGHTHOUSELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alllighthouselist
{
public:
    QPushButton *pushButton;
    QListWidget *listWidget;

    void setupUi(QWidget *alllighthouselist)
    {
        if (alllighthouselist->objectName().isEmpty())
            alllighthouselist->setObjectName(QStringLiteral("alllighthouselist"));
        alllighthouselist->resize(482, 512);
        pushButton = new QPushButton(alllighthouselist);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 460, 121, 41));
        pushButton->setStyleSheet(QStringLiteral("font: 25 12pt \"Microsoft YaHei\";"));
        listWidget = new QListWidget(alllighthouselist);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 461, 441));

        retranslateUi(alllighthouselist);

        QMetaObject::connectSlotsByName(alllighthouselist);
    } // setupUi

    void retranslateUi(QWidget *alllighthouselist)
    {
        alllighthouselist->setWindowTitle(QApplication::translate("alllighthouselist", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("alllighthouselist", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class alllighthouselist: public Ui_alllighthouselist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLLIGHTHOUSELIST_H
