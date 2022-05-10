/********************************************************************************
** Form generated from reading UI file 'addhouse.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDHOUSE_H
#define UI_ADDHOUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addHouse
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *comboBox_2;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;

    void setupUi(QWidget *addHouse)
    {
        if (addHouse->objectName().isEmpty())
            addHouse->setObjectName(QStringLiteral("addHouse"));
        addHouse->resize(512, 541);
        verticalLayoutWidget = new QWidget(addHouse);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(80, 30, 383, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        comboBox_2 = new QComboBox(verticalLayoutWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(0, 30));

        horizontalLayout_5->addWidget(comboBox_2);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(0, 30));

        horizontalLayout_5->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_3);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(300, 0));
        lineEdit_2->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_8->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_2);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(300, 0));
        lineEdit->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_7->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(185, 80));
        label->setMaximumSize(QSize(185, 16777215));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 50));
        pushButton_3->setStyleSheet(QStringLiteral("font: 25 14pt \"Microsoft YaHei\";"));

        horizontalLayout_4->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 50));
        pushButton_2->setStyleSheet(QStringLiteral("font: 25 14pt \"Microsoft YaHei\";"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 50));
        pushButton->setStyleSheet(QStringLiteral("font: 25 14pt \"Microsoft YaHei\";"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 50));
        pushButton_4->setStyleSheet(QStringLiteral("font: 25 14pt \"Microsoft YaHei\";"));

        verticalLayout->addWidget(pushButton_4);


        retranslateUi(addHouse);

        QMetaObject::connectSlotsByName(addHouse);
    } // setupUi

    void retranslateUi(QWidget *addHouse)
    {
        addHouse->setWindowTitle(QApplication::translate("addHouse", "Form", Q_NULLPTR));
        label_3->setText(QApplication::translate("addHouse", "\346\210\277\345\261\213\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("addHouse", "\344\273\267\346\240\274", Q_NULLPTR));
        label->setText(QApplication::translate("addHouse", "\346\227\240\345\233\276\347\211\207", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("addHouse", "\344\270\212\344\274\240\345\233\276\347\211\207", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("addHouse", "\344\270\212\344\274\240\351\207\207\345\205\211\345\212\250\347\224\273", Q_NULLPTR));
        pushButton->setText(QApplication::translate("addHouse", "\351\242\204\350\247\210\351\207\207\345\205\211\345\212\250\347\224\273", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("addHouse", "\346\217\220\344\272\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addHouse: public Ui_addHouse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDHOUSE_H
