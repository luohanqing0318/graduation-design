/********************************************************************************
** Form generated from reading UI file 'picturewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTUREWIDGET_H
#define UI_PICTUREWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Picturewidget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *Picturewidget)
    {
        if (Picturewidget->objectName().isEmpty())
            Picturewidget->setObjectName(QStringLiteral("Picturewidget"));
        Picturewidget->resize(584, 211);
        pushButton = new QPushButton(Picturewidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 90, 21, 21));
        pushButton_2 = new QPushButton(Picturewidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 90, 21, 21));
        verticalLayoutWidget = new QWidget(Picturewidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 561, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(verticalLayoutWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);


        retranslateUi(Picturewidget);

        QMetaObject::connectSlotsByName(Picturewidget);
    } // setupUi

    void retranslateUi(QWidget *Picturewidget)
    {
        Picturewidget->setWindowTitle(QApplication::translate("Picturewidget", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Picturewidget", "<", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Picturewidget", ">", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Picturewidget: public Ui_Picturewidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTUREWIDGET_H
