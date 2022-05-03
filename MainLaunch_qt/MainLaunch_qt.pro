#-------------------------------------------------
#
# Project created by QtCreator 2022-04-18T17:04:54
#
#-------------------------------------------------

QT       += core gui
QT += sql
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
    src/mesh/mesh.cpp \
    src/model/model.cpp \
    src/sign/dialog.cpp \
    mobiledata.cpp

HEADERS += \
        mainwindow.h \
    src/login/logindialog.h \
    src/lighthouse/lighthousedemo.h \
    src/lighthouse/opengl_widget.h \
    src/camera/camera.h \
    src/mesh/mesh.h \
    src/model/model.h \
    common_data.h \
    src/sign/dialog.h \
    mobiledata.h

FORMS += \
        mainwindow.ui \
    src/login/logindialog.ui \
    src/lighthouse/lighthousedemo.ui \
    src/sign/dialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ui_style.qrc \
    glsl_file.qrc \
    other_resources.qrc \
    obj/obj_resources.qrc

DISTFILES +=

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../third-lib/assimp-5.0.1/lib/ -lassimp-vc140-mt
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../third-lib/assimp-5.0.1/lib/ -lassimp-vc140-mtd

INCLUDEPATH += $$PWD/../../third-lib/assimp-5.0.1/include
DEPENDPATH += $$PWD/../../third-lib/assimp-5.0.1/include


