QT       += core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
DESTDIR = ./bin

include(./window/window.pri)
include(./qcustomplot/qcustomplot.prf)

SOURCES += \
    framelesswindow.cpp \
    main.cpp \
    pinyin.cpp \
    widget.cpp

HEADERS += \
    framelesswindow.h \
    pinyin.h \
    toolutil.h \
    widget.h

FORMS += \
    ui/widget.ui

RESOURCES += \
    ./image/image.qrc
