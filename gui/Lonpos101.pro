#-------------------------------------------------
#
# Project created by QtCreator 2016-01-19T11:11:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += static
LIBS += -static -lpthread -static-libgcc -static-libstdc++

TARGET = Lonpos101
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    containerwidget.cpp \
    boardwidget.cpp \
    piece.cpp \
    rowsolver.cpp \
    waiter.cpp

HEADERS  += mainwindow.h \
    containerwidget.h \
    boardwidget.h \
    piece.h \
    rowsolver.h \
    waiter.h
