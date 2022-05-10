/********************************************************************************
** Form generated from reading UI file 'myinformation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYINFORMATION_H
#define UI_MYINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myinformation
{
public:
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *myinformation)
    {
        if (myinformation->objectName().isEmpty())
            myinformation->setObjectName(QStringLiteral("myinformation"));
        myinformation->resize(400, 495);
        label = new QLabel(myinformation);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 72, 61));
        label->setStyleSheet(QStringLiteral("border-image: url(:/tenants.png);"));
        horizontalLayoutWidget = new QWidget(myinformation);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(110, 20, 221, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 16777215));
        label_2->setStyleSheet(QStringLiteral("font: 25 12pt \"Microsoft YaHei\";"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(16777215, 16777215));
        label_3->setStyleSheet(QStringLiteral("font: 25 12pt \"Microsoft YaHei\";"));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(16777215, 16777215));
        label_4->setStyleSheet(QStringLiteral("font: 25 12pt \"Microsoft YaHei\";"));

        horizontalLayout->addWidget(label_4);

        horizontalLayoutWidget_2 = new QWidget(myinformation);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(40, 100, 321, 82));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 50));
        pushButton_2->setStyleSheet(QLatin1String("font: 25 9pt \"Microsoft YaHei\";\n"
""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/personalinfo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(40, 40));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 50));
        pushButton->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/bill.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(40, 40));

        horizontalLayout_2->addWidget(pushButton);


        retranslateUi(myinformation);

        QMetaObject::connectSlotsByName(myinformation);
    } // setupUi

    void retranslateUi(QWidget *myinformation)
    {
        myinformation->setWindowTitle(QApplication::translate("myinformation", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("myinformation", "Hi\357\274\232", Q_NULLPTR));
        label_3->setText(QString());
        label_4->setText(QString());
        pushButton_2->setText(QApplication::translate("myinformation", "\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        pushButton->setText(QApplication::translate("myinformation", "\345\220\210\345\220\214\344\277\241\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class myinformation: public Ui_myinformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYINFORMATION_H
