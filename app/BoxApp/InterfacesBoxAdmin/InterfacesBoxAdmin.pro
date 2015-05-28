#-------------------------------------------------
#
# Project created by QtCreator 2014-09-05T17:39:03
#
#-------------------------------------------------

QT       -= gui

TARGET = InterfacesBoxAdmin
TEMPLATE = lib

DEFINES += INTERFACESBOXADMIN_LIBRARY

SOURCES += interfacesboxadmin.cpp\
           ifactorydatabase.cpp\
           idaoclient.cpp\
           idaorequest.cpp

HEADERS += interfacesboxadmin.h\
        interfacesboxadmin_global.h\
        ifactorydatabase.h\
        idaoclient.h\
        idaorequest.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
