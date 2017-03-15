TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    trader.cpp \
    market.cpp

HEADERS += \
    trader.h \
    market.h
