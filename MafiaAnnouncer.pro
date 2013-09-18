#-------------------------------------------------
#
# Project created by QtCreator 2013-09-18T21:27:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MafiaAnnouncer
TEMPLATE = app


SOURCES += main.cpp\
        mafiaannouncer.cpp \
        gamesetup.cpp \
        mafiaplayer.cpp

HEADERS  += mafiaannouncer.h \
        gamesetup.h \
        mafiaplayer.h

FORMS    += mafiaannouncer.ui \
        gamesetup.ui

RESOURCES += \
    Images.qrc
