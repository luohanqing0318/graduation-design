/********************************************************************************
** Form generated from reading UI file 'lighthousedemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTHOUSEDEMO_H
#define UI_LIGHTHOUSEDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <src/lighthouse/opengl_widget.h>

QT_BEGIN_NAMESPACE

class Ui_LightHouseDemo
{
public:
    QAction *actionDebug;
    QWidget *centralwidget;
    OpenGL_Widget *openGLWidget;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *LightHouseDemo)
    {
        if (LightHouseDemo->objectName().isEmpty())
            LightHouseDemo->setObjectName(QStringLiteral("LightHouseDemo"));
        LightHouseDemo->resize(800, 600);
        LightHouseDemo->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:rgb(68,68,68);\n"
"	color:rgb(255,255,255);\n"
"	font:10pt\"\345\271\274\345\234\206\";\n"
"}\n"
"QMenuBar{\n"
"	background-color:rgb(200,200,200);\n"
"	color:rgb(60,60,60);\n"
"}"));
        actionDebug = new QAction(LightHouseDemo);
        actionDebug->setObjectName(QStringLiteral("actionDebug"));
        centralwidget = new QWidget(LightHouseDemo);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        openGLWidget = new OpenGL_Widget(centralwidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        openGLWidget->setGeometry(QRect(200, 130, 300, 200));
        LightHouseDemo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LightHouseDemo);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        LightHouseDemo->setMenuBar(menubar);
        statusbar = new QStatusBar(LightHouseDemo);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LightHouseDemo->setStatusBar(statusbar);
        toolBar = new QToolBar(LightHouseDemo);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        LightHouseDemo->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        toolBar->addAction(actionDebug);

        retranslateUi(LightHouseDemo);

        QMetaObject::connectSlotsByName(LightHouseDemo);
    } // setupUi

    void retranslateUi(QMainWindow *LightHouseDemo)
    {
        LightHouseDemo->setWindowTitle(QApplication::translate("LightHouseDemo", "LightHouseDemo", Q_NULLPTR));
        actionDebug->setText(QApplication::translate("LightHouseDemo", "\350\260\203\350\257\225", Q_NULLPTR));
        menu->setTitle(QApplication::translate("LightHouseDemo", "\346\226\207\344\273\266", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("LightHouseDemo", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LightHouseDemo: public Ui_LightHouseDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTHOUSEDEMO_H
