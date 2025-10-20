QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    change_plan.cpp \
    change_plan_confirm.cpp \
    data_structs.cpp \
    dialog_fetch_force_store.cpp \
    dialog_fetch_med.cpp \
    dialog_fetch_nomed.cpp \
    dialog_fetch_wrong_med.cpp \
    dialog_store_success.cpp \
    fetch_card.cpp \
    main.cpp \
    main_page.cpp \
    mainwindow.cpp \
    med_list.cpp \
    medcine_information.cpp \
    mytimeedit.cpp \
    signal_route.cpp \
    store_page.cpp \
    store_page1.cpp \
    store_page2.cpp \
    store_page3.cpp \
    store_page4.cpp \
    switchcontrol.cpp

HEADERS += \
    change_plan.h \
    change_plan_confirm.h \
    data_structs.h \
    dialog_fetch_force_store.h \
    dialog_fetch_med.h \
    dialog_fetch_nomed.h \
    dialog_fetch_wrong_med.h \
    dialog_store_success.h \
    fetch_card.h \
    main_page.h \
    mainwindow.h \
    med_list.h \
    medcine_information.h \
    mytimeedit.h \
    signal_route.h \
    store_page.h \
    store_page1.h \
    store_page2.h \
    store_page3.h \
    store_page4.h \
    switchcontrol.h \
    utils.h

FORMS += \
    change_plan.ui \
    change_plan_confirm.ui \
    dialog_fetch_force_store.ui \
    dialog_fetch_med.ui \
    dialog_fetch_nomed.ui \
    dialog_fetch_wrong_med.ui \
    dialog_store_success.ui \
    fetch_card.ui \
    main_page.ui \
    mainwindow.ui \
    med_list.ui \
    medcine_information.ui \
    store_page.ui \
    store_page1.ui \
    store_page2.ui \
    store_page3.ui \
    store_page4.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
