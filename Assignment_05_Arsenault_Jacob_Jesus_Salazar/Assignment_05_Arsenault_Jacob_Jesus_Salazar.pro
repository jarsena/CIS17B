TEMPLATE = app
TARGET = Bank_Interface

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    summarywindow.cpp
HEADERS += \
    summarywindow.h
