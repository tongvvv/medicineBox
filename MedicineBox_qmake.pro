QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    data_structs.cpp \
    fetch_card.cpp \
    main.cpp \
    main_page.cpp \
    mainwindow.cpp \
    med_list.cpp \
    medcine_information.cpp \
    signal_route.cpp \
    store_page.cpp \
    store_page1.cpp \
    switchcontrol.cpp

HEADERS += \
    data_structs.h \
    fetch_card.h \
    main_page.h \
    mainwindow.h \
    med_list.h \
    medcine_information.h \
    signal_route.h \
    store_page.h \
    store_page1.h \
    switchcontrol.h

FORMS += \
    fetch_card.ui \
    main_page.ui \
    mainwindow.ui \
    med_list.ui \
    medcine_information.ui \
    store_page.ui \
    store_page1.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
