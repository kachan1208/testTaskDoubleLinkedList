TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    doublelinkedlist.cpp \
    listnode.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    doublelinkedlist.h \
    listnode.h \
    nodevalue.h

