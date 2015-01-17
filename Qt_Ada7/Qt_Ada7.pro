#-------------------------------------------------
#
# Project created by QtCreator 2015-01-13T21:27:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qt_Ada7
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ../../Qtraspberrylib/ht16k33.cpp \
    ../../Qtraspberrylib/ada7seg.cpp

LIBS += -lwiringPi

HEADERS  += mainwindow.h \
    ../../Qtraspberrylib/ht16k33.h \
    ../../Qtraspberrylib/ada7seg.h

FORMS    += mainwindow.ui
