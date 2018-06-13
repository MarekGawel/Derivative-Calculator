TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
 greaterThan(QT_MAJOR_VERSION, 4) {
        QT += widgets
        DEFINES += HAVE_QT5
    }

SOURCES += main.cpp \
    Struktura.cpp \
    Tablica.cpp \
    pliki.cpp \
    wielomiany.cpp \
    funkcje.cpp

HEADERS += \
    Struktura.h \
    Tablica.h \
    pliki.h \
    wielomiany.h \
    funkcje.h

FORMS += \
    mainwindow.ui

RESOURCES +=

