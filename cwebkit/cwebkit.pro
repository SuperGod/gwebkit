#-------------------------------------------------
#
# Project created by QtCreator 2015-10-31T19:43:20
#
#-------------------------------------------------

TARGET = cwebkit
TEMPLATE = lib

DEFINES += CWEBKIT_LIBRARY

SOURCES += \
    webview.cpp \
    app.cpp \
    qtapp.cpp \
    cwebview.cpp

HEADERS +=\
        cwebkit_global.h \
    webview.h \
    app.h \
    qtapp.h \
    cwebview.h
CONFIG += c++11

QT += webkitwidgets widgets
