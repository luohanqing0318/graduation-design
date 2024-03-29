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
    mobiledata.cpp \
    src/sign/signdialog.cpp \
    picturewidget.cpp \
    myinformation.cpp \
    common_data.cpp \
    changepersonalinformation.cpp \
    newitem_btn.cpp \
    newitem_label.cpp \
    addhouse.cpp \
    houseinfor.cpp \
    newiteminfo_btn.cpp \
    houseinfor_btn.cpp \
    smallhouselist.cpp \
    bighouselist.cpp \
    goodhouselist.cpp \
    tentantswishlist.cpp \
    tenantsbought_information.cpp \
    landlordsbought_information.cpp \
    searchlist.cpp \
    watchhistorylist.cpp \
    allhouselist.cpp \
    deleteitem_btn.cpp \
    alllighthouselist.cpp

HEADERS += \
        mainwindow.h \
    src/login/logindialog.h \
    src/lighthouse/lighthousedemo.h \
    src/lighthouse/opengl_widget.h \
    src/camera/camera.h \
    src/mesh/mesh.h \
    src/model/model.h \
    common_data.h \
    mobiledata.h \
    src/sign/signdialog.h \
    picturewidget.h \
    myinformation.h \
    changepersonalinformation.h \
    newitem_btn.h \
    newitem_label.h \
    addhouse.h \
    houseinfor.h \
    newiteminfo_btn.h \
    houseinfor_btn.h \
    smallhouselist.h \
    bighouselist.h \
    goodhouselist.h \
    tentantswishlist.h \
    tenantsbought_information.h \
    landlordsbought_information.h \
    searchlist.h \
    watchhistorylist.h \
    allhouselist.h \
    deleteitem_btn.h \
    alllighthouselist.h

FORMS += \
        mainwindow.ui \
    src/login/logindialog.ui \
    src/lighthouse/lighthousedemo.ui \
    src/sign/signdialog.ui \
    picturewidget.ui \
    myinformation.ui \
    changepersonalinformation.ui \
    addhouse.ui \
    houseinfor.ui \
    smallhouselist.ui \
    bighouselist.ui \
    goodhouselist.ui \
    tentantswishlist.ui \
    tenantsbought_information.ui \
    landlordsbought_information.ui \
    searchlist.ui \
    watchhistorylist.ui \
    allhouselist.ui \
    alllighthouselist.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ui_style.qrc \
    glsl_file.qrc \
    other_resources.qrc \
    obj/obj_resources.qrc \
    icon/icons.qrc \
    images/picturewall/picturewall.qrc

DISTFILES +=

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../third-lib/assimp-5.0.1/lib/ -lassimp-vc140-mt
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../third-lib/assimp-5.0.1/lib/ -lassimp-vc140-mtd

INCLUDEPATH += $$PWD/../../third-lib/assimp-5.0.1/include
DEPENDPATH += $$PWD/../../third-lib/assimp-5.0.1/include


