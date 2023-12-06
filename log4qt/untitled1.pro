QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

DESTDIR = ./bin

CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS

include(./log4Qt/log4Qt.prf)

SOURCES += \
    logger.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    logger.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
