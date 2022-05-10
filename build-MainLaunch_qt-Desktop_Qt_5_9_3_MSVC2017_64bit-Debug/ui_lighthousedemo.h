/********************************************************************************
** Form generated from reading UI file 'lighthousedemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <opengl_widget.h>

QT_BEGIN_NAMESPACE

class Ui_LightHouseDemo
{
public:
    QAction *actionLoadModel;
    QWidget *centralwidget;
    OpenGL_Widget *openGLWidget;
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
        actionLoadModel = new QAction(LightHouseDemo);
        actionLoadModel->setObjectName(QStringLiteral("actionLoadModel"));
        centralwidget = new QWidget(LightHouseDemo);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        openGLWidget = new OpenGL_Widget(centralwidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        openGLWidget->setGeometry(QRect(200, 130, 300, 200));
        LightHouseDemo->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(LightHouseDemo);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LightHouseDemo->setStatusBar(statusbar);
        toolBar = new QToolBar(LightHouseDemo);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        LightHouseDemo->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionLoadModel);

        retranslateUi(LightHouseDemo);

        QMetaObject::connectSlotsByName(LightHouseDemo);
    } // setupUi

    void retranslateUi(QMainWindow *LightHouseDemo)
    {
        LightHouseDemo->setWindowTitle(QApplication::translate("LightHouseDemo", "LightHouseDemo", Q_NULLPTR));
        actionLoadModel->setText(QApplication::translate("LightHouseDemo", "\350\275\275\345\205\245\346\250\241\345\236\213", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("LightHouseDemo", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LightHouseDemo: public Ui_LightHouseDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTHOUSEDEMO_H
