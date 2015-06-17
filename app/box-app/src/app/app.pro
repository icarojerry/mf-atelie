QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = box-app
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp\
    shell/core.cpp\
    shell/projectcontroller.cpp\
    idatabase.cpp\
    interfacesboxadmin.cpp\
           ifactorydatabase.cpp\
           idaoclient.cpp\
           idaorequest.cpp

HEADERS  += mainwindow.h\
    shell/core.h\
    shell/projectcontroller.h\
    idatabase.h\
    interfacesboxadmin.h\
        interfacesboxadmin_global.h\
        ifactorydatabase.h\
        idaoclient.h\
        idaorequest.h


FORMS    += mainwindow.ui\
    login_dialog.ui
