/********************************************************************************
** Form generated from reading UI file 'changepersonalinformation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPERSONALINFORMATION_H
#define UI_CHANGEPERSONALINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changepersonalinformation
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *changepersonalinformation)
    {
        if (changepersonalinformation->objectName().isEmpty())
            changepersonalinformation->setObjectName(QStringLiteral("changepersonalinformation"));
        changepersonalinformation->resize(231, 319);
        verticalLayoutWidget = new QWidget(changepersonalinformation);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 30, 41, 191));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));

        verticalLayout->addWidget(label);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));

        verticalLayout->addWidget(label_3);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));

        verticalLayout->addWidget(label_5);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));

        verticalLayout->addWidget(label_4);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));

        verticalLayout->addWidget(label_6);

        verticalLayoutWidget_2 = new QWidget(changepersonalinformation);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(70, 30, 141, 201));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(verticalLayoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout_2->addWidget(lineEdit_5);

        horizontalLayoutWidget = new QWidget(changepersonalinformation);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 240, 195, 61));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));

        horizontalLayout_2->addWidget(pushButton);


        retranslateUi(changepersonalinformation);

        QMetaObject::connectSlotsByName(changepersonalinformation);
    } // setupUi

    void retranslateUi(QWidget *changepersonalinformation)
    {
        changepersonalinformation->setWindowTitle(QApplication::translate("changepersonalinformation", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("changepersonalinformation", "\350\264\246\345\217\267:", Q_NULLPTR));
        label_3->setText(QApplication::translate("changepersonalinformation", "\345\257\206\347\240\201:", Q_NULLPTR));
        label_5->setText(QApplication::translate("changepersonalinformation", "\345\247\223\345\220\215:", Q_NULLPTR));
        label_4->setText(QApplication::translate("changepersonalinformation", "\345\271\264\351\276\204:", Q_NULLPTR));
        label_6->setText(QApplication::translate("changepersonalinformation", "\347\224\265\350\257\235:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("changepersonalinformation", "\346\217\220\344\272\244\344\277\256\346\224\271", Q_NULLPTR));
        pushButton->setText(QApplication::translate("changepersonalinformation", "\350\277\224\345\233\236\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class changepersonalinformation: public Ui_changepersonalinformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPERSONALINFORMATION_H
