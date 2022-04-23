#-------------------------------------------------
#
# Project created by QtCreator 2022-04-18T17:04:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MainLaunch_qt
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    src/login/logindialog.cpp \
    src/lighthouse/lighthousedemo.cpp \
    src/lighthouse/opengl_widget.cpp \
    src/mesh/mesh.cpp

HEADERS += \
        mainwindow.h \
    src/login/logindialog.h \
    src/lighthouse/lighthousedemo.h \
    src/lighthouse/opengl_widget.h \
    src/camera/camera.h \
    src/mesh/mesh.h

FORMS += \
        mainwindow.ui \
    src/login/logindialog.ui \
    src/lighthouse/lighthousedemo.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ui_style.qrc \
    glsl_file.qrc
