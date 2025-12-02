QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    basic_settings_page.cpp \
    change_plan.cpp \
    change_plan_confirm.cpp \
    data_structs.cpp \
    dialog_fetch_force_store.cpp \
    dialog_fetch_med.cpp \
    dialog_fetch_nomed.cpp \
    dialog_fetch_wrong_med.cpp \
    dialog_store_success.cpp \
    emergency_page.cpp \
    fetch_card.cpp \
    inform_settings_page.cpp \
    main.cpp \
    main_page.cpp \
    mainwindow.cpp \
    med_detailed_info.cpp \
    med_list.cpp \
    medcine_information.cpp \
    mytimeedit.cpp \
    ocrmanager.cpp \
    plan_card.cpp \
    scaled_pixmap_label.cpp \
    settings.cpp \
    signal_route.cpp \
    store_page.cpp \
    store_page1.cpp \
    store_page2.cpp \
    store_page3.cpp \
    store_page4.cpp \
    switchcontrol.cpp \
    usage_plan.cpp \
    usage_record.cpp \
    utils.cpp \
    wifi_item.cpp \
    wifi_page.cpp \
    yolomanager.cpp

HEADERS += \
    basic_settings_page.h \
    change_plan.h \
    change_plan_confirm.h \
    data_structs.h \
    dialog_fetch_force_store.h \
    dialog_fetch_med.h \
    dialog_fetch_nomed.h \
    dialog_fetch_wrong_med.h \
    dialog_store_success.h \
    emergency_page.h \
    fetch_card.h \
    inform_settings_page.h \
    main_page.h \
    mainwindow.h \
    med_detailed_info.h \
    med_list.h \
    medcine_information.h \
    mytimeedit.h \
    ocrmanager.h \
    plan_card.h \
    scaled_pixmap_label.h \
    settings.h \
    signal_route.h \
    store_page.h \
    store_page1.h \
    store_page2.h \
    store_page3.h \
    store_page4.h \
    switchcontrol.h \
    usage_plan.h \
    usage_record.h \
    utils.h \
    wifi_item.h \
    wifi_page.h \
    yolomanager.h

FORMS += \
    basic_settings_page.ui \
    change_plan.ui \
    change_plan_confirm.ui \
    dialog_fetch_force_store.ui \
    dialog_fetch_med.ui \
    dialog_fetch_nomed.ui \
    dialog_fetch_wrong_med.ui \
    dialog_store_success.ui \
    emergency_page.ui \
    fetch_card.ui \
    inform_settings_page.ui \
    main_page.ui \
    mainwindow.ui \
    med_list.ui \
    medcine_information.ui \
    plan_card.ui \
    settings.ui \
    store_page.ui \
    store_page1.ui \
    store_page2.ui \
    store_page3.ui \
    store_page4.ui \
    usage_plan.ui \
    usage_record.ui \
    wifi_item.ui \
    wifi_page.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
