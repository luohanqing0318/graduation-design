/********************************************************************************
** Form generated from reading UI file 'watchhistorylist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WATCHHISTORYLIST_H
#define UI_WATCHHISTORYLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_watchhistorylist
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *watchhistorylist)
    {
        if (watchhistorylist->objectName().isEmpty())
            watchhistorylist->setObjectName(QStringLiteral("watchhistorylist"));
        watchhistorylist->resize(531, 507);
        listWidget = new QListWidget(watchhistorylist);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 511, 421));
        pushButton = new QPushButton(watchhistorylist);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 440, 151, 51));
        pushButton->setStyleSheet(QStringLiteral("font: 25 12pt \"Microsoft YaHei\";"));

        retranslateUi(watchhistorylist);

        QMetaObject::connectSlotsByName(watchhistorylist);
    } // setupUi

    void retranslateUi(QWidget *watchhistorylist)
    {
        watchhistorylist->setWindowTitle(QApplication::translate("watchhistorylist", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("watchhistorylist", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class watchhistorylist: public Ui_watchhistorylist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WATCHHISTORYLIST_H
