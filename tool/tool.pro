QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

DESTDIR = ./bin

include(./window/window.pri)

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

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ./image/image.qrc
