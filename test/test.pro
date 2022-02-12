QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    account.cpp \
    changeprofile.cpp \
    main.cpp \
    mainwindow.cpp \
    registration_form.cpp \
    solving.cpp \
    tasks.cpp

HEADERS += \
    account.h \
    changeprofile.h \
    mainwindow.h \
    registration_form.h \
    solving.h \
    tasks.h

FORMS += \
    account.ui \
    changeprofile.ui \
    mainwindow.ui \
    registration_form.ui \
    solving.ui \
    tasks.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    src.qrc
