/********************************************************************************
** Form generated from reading UI file 'searchlist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHLIST_H
#define UI_SEARCHLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_searchlist
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *searchlist)
    {
        if (searchlist->objectName().isEmpty())
            searchlist->setObjectName(QStringLiteral("searchlist"));
        searchlist->resize(512, 520);
        listWidget = new QListWidget(searchlist);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 491, 441));
        pushButton = new QPushButton(searchlist);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 460, 131, 51));
        pushButton->setStyleSheet(QStringLiteral("font: 25 14pt \"Microsoft YaHei\";"));

        retranslateUi(searchlist);

        QMetaObject::connectSlotsByName(searchlist);
    } // setupUi

    void retranslateUi(QWidget *searchlist)
    {
        searchlist->setWindowTitle(QApplication::translate("searchlist", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("searchlist", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class searchlist: public Ui_searchlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHLIST_H
