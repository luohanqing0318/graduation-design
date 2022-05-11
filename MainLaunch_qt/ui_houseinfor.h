/********************************************************************************
** Form generated from reading UI file 'houseinfor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOUSEINFOR_H
#define UI_HOUSEINFOR_H

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

class Ui_houseinfor
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *houseinfor)
    {
        if (houseinfor->objectName().isEmpty())
            houseinfor->setObjectName(QStringLiteral("houseinfor"));
        houseinfor->resize(400, 300);
        label = new QLabel(houseinfor);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 60, 91, 71));
        label->setStyleSheet(QStringLiteral("border-image: url(:/landlordshead.png);"));
        label_2 = new QLabel(houseinfor);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 50, 72, 15));
        label_2->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));
        label_3 = new QLabel(houseinfor);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 90, 72, 15));
        label_3->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));
        label_4 = new QLabel(houseinfor);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 130, 72, 15));
        label_4->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));
        horizontalLayoutWidget = new QWidget(houseinfor);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(70, 160, 261, 102));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 70));
        pushButton_2->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 70));
        pushButton->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));

        horizontalLayout->addWidget(pushButton);

        label_5 = new QLabel(houseinfor);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(271, 50, 91, 21));
        label_5->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));
        label_6 = new QLabel(houseinfor);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(271, 90, 91, 20));
        label_6->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));
        label_7 = new QLabel(houseinfor);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(271, 130, 91, 21));
        label_7->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));

        retranslateUi(houseinfor);

        QMetaObject::connectSlotsByName(houseinfor);
    } // setupUi

    void retranslateUi(QWidget *houseinfor)
    {
        houseinfor->setWindowTitle(QApplication::translate("houseinfor", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("houseinfor", "\346\210\277\344\270\234\345\247\223\345\220\215:", Q_NULLPTR));
        label_3->setText(QApplication::translate("houseinfor", "\345\271\264\351\276\204:", Q_NULLPTR));
        label_4->setText(QApplication::translate("houseinfor", "\350\201\224\347\263\273\347\224\265\350\257\235:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("houseinfor", "\347\255\276\350\256\242\345\220\210\347\272\246", Q_NULLPTR));
        pushButton->setText(QApplication::translate("houseinfor", "\345\212\240\345\205\245\347\234\213\346\210\277\345\215\225", Q_NULLPTR));
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class houseinfor: public Ui_houseinfor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOUSEINFOR_H
