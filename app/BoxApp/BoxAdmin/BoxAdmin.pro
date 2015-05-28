#-------------------------------------------------
#
# Project created by QtCreator 2014-09-05T17:26:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BoxAdmin
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp\
    coreapplication.cpp\
    projectcontroller.cpp\
    idatabase.cpp

HEADERS  += mainwindow.h\
    coreapplication.h\
    projectcontroller.h\
    idatabase.h

FORMS    += mainwindow.ui\
    login_dialog.ui

RESOURCES +=
