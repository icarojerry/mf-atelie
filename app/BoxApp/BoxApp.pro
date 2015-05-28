#-------------------------------------------------
#
# Project created by QtCreator 2014-09-05T17:26:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BoxApp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp\
    coreapplication.cpp\
    projectcontroller.cpp\
    idatabase.cpp\
    interfacesboxadmin.cpp\
           ifactorydatabase.cpp\
           idaoclient.cpp\
           idaorequest.cpp

HEADERS  += mainwindow.h\
    coreapplication.h\
    projectcontroller.h\
    idatabase.h\
    interfacesboxadmin.h\
        interfacesboxadmin_global.h\
        ifactorydatabase.h\
        idaoclient.h\
        idaorequest.h


FORMS    += mainwindow.ui\
    login_dialog.ui
