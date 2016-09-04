#-------------------------------------------------
#
# Project created by QtCreator 2016-09-03T19:34:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    wall_left.cpp \
    wall_right.cpp \
    wall_top.cpp \
    wall_botton.cpp \
    blocks.cpp \
    palette.cpp \
    ball.cpp \
    bullet.cpp

HEADERS  += mainwindow.h \
    wall_left.h \
    wall_right.h \
    wall_top.h \
    wall_botton.h \
    blocks.h \
    palette.h \
    ball.h \
    bullet.h

FORMS    += mainwindow.ui
