#-------------------------------------------------
#
# Project created by QtCreator 2016-06-28T16:04:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PID_Emulator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    pidthread.cpp \
    poschart.cpp

HEADERS  += mainwindow.h \
    pidthread.h \
    poschart.h

FORMS    += mainwindow.ui
