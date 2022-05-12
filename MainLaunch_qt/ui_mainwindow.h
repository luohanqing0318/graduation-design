/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *listWidget;
    QWidget *tab_2;
    QPushButton *pushButton_4;
    QLabel *label;
    QPushButton *pushButton_6;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(927, 885);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 750, 181, 71));
        pushButton->setStyleSheet(QStringLiteral("font: 25 12pt \"Microsoft YaHei\";"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/\346\232\202\346\227\240\346\270\205\345\215\225.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(70, 70));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(700, 750, 191, 71));
        pushButton_2->setStyleSheet(QLatin1String("font: 25 12pt \"Microsoft YaHei\";\n"
"\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/\346\210\221\347\232\204\345\200\237\345\270\246\350\257\201.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(120, 120));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 410, 865, 321));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        listWidget = new QListWidget(tab);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 841, 271));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 130, 81, 81));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: #f5f6fa;\n"
"image: url(:/\346\210\277\345\255\22012.png);"));
        pushButton_4->setFlat(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 220, 81, 31));
        label->setStyleSheet(QStringLiteral("font: 25 12pt \"Microsoft YaHei\";"));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(40, 10, 81, 81));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: #f5f6fa;\n"
"image: url(:/\346\210\277\345\255\22010.png);"));
        pushButton_6->setFlat(false);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 100, 81, 21));
        label_2->setStyleSheet(QStringLiteral("font: 25 12pt \"Microsoft YaHei\";"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 350, 81, 21));
        label_3->setStyleSheet(QStringLiteral("font: 25 12pt \"Microsoft YaHei\";"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(40, 250, 81, 81));
        pushButton_5->setStyleSheet(QString::fromUtf8("image: url(:/\346\210\277\345\255\22014.png);\n"
"background-color: #f5f6fa;\n"
"    "));
        pushButton_5->setFlat(false);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(280, 30, 461, 31));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(170, 360, 221, 51));
        pushButton_7->setStyleSheet(QLatin1String("font: 25 9pt \"Microsoft YaHei\";\n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/\346\245\274\346\210\277.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon2);
        pushButton_7->setIconSize(QSize(60, 60));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(400, 360, 241, 51));
        pushButton_8->setStyleSheet(QStringLiteral(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/\351\230\263\345\205\211.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon3);
        pushButton_8->setIconSize(QSize(50, 50));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(170, 80, 701, 251));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(650, 360, 221, 51));
        pushButton_9->setStyleSheet(QStringLiteral(""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/\346\232\202\346\227\240\350\256\260\345\275\225.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon4);
        pushButton_9->setIconSize(QSize(50, 50));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(20, 750, 181, 71));
        pushButton_10->setStyleSheet(QLatin1String("font: 25 12pt \"Microsoft YaHei\";\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/\345\220\210\345\220\214 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon5);
        pushButton_10->setIconSize(QSize(70, 70));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, -10, 141, 91));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/\346\220\234\347\264\242.png);"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(760, 30, 61, 31));
        pushButton_3->setStyleSheet(QStringLiteral("font: 25 9pt \"Microsoft YaHei\";"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 927, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\270\273\347\225\214\351\235\242", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\347\234\213\346\210\277\345\215\225", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "  \346\210\221\347\232\204", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\346\234\200\346\226\260", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\347\262\276\351\200\211", Q_NULLPTR));
        pushButton_4->setText(QString());
        label->setText(QApplication::translate("MainWindow", "\346\225\264\347\247\237\345\210\227\350\241\250", Q_NULLPTR));
        pushButton_6->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\345\220\210\347\247\237\345\210\227\350\241\250", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\346\210\277\344\270\234\347\233\264\347\247\237", Q_NULLPTR));
        pushButton_5->setText(QString());
        pushButton_7->setText(QApplication::translate("MainWindow", "\346\211\200\346\234\211\346\210\277\345\261\213", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "\346\211\200\346\234\211LIGHTHOUSES", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "\346\265\217\350\247\210\350\256\260\345\275\225", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "\344\270\212\344\274\240\345\220\210\345\220\214", Q_NULLPTR));
        label_4->setText(QString());
        pushButton_3->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
