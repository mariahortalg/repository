QT += core gui
CONFIG += c++11
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app
TARGET = miProyecto1

SOURCES += main.cpp \
    infonegos.cpp \
    infooficinas.cpp \
    infoowners.cpp \
    mainwindow.cpp \
    negos.cpp \
    oficinas.cpp \
    owners.cpp \
    clasefecha.cpp \
    clasenegos.cpp \
    claseoficinas.cpp \
    claseowners.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    mainwindow.hpp \
    negos.hpp \
    oficinas.hpp \
    owners.hpp \
    infonegos.hpp \
    infooficinas.hpp \
    infoowners.hpp \
    clasefecha.hpp \
    clasenegos.hpp \
    claseoficinas.hpp \
    claseowners.hpp \
    vector.h

FORMS += \
    infonegos.ui \
    infooficinas.ui \
    infoowners.ui \
    mainwindow.ui \
    negos.ui \
    oficinas.ui \
    owners.ui

