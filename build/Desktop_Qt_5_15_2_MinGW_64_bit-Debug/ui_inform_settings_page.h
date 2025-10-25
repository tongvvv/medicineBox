/********************************************************************************
** Form generated from reading UI file 'inform_settings_page.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORM_SETTINGS_PAGE_H
#define UI_INFORM_SETTINGS_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mytimeedit.h>
#include <scaled_pixmap_label.h>
#include <switchcontrol.h>

QT_BEGIN_NAMESPACE

class Ui_inform_settings_page
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    scaled_pixmap_label *voice;
    QLabel *voice_text;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_3;
    scaled_pixmap_label *music;
    QLabel *music_text;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_4;
    scaled_pixmap_label *ad;
    QLabel *ad_text;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    ComboLineEdit *lineEdit_2;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    SwitchButton *widget_9;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QLabel *label_8;
    ComboLineEdit *lineEdit_3;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_2;
    SwitchButton *widget_10;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *comboBox;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *comboBox_2;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_5;
    scaled_pixmap_label *sound;
    QSlider *horizontalSlider;

    void setupUi(QWidget *inform_settings_page)
    {
        if (inform_settings_page->objectName().isEmpty())
            inform_settings_page->setObjectName(QString::fromUtf8("inform_settings_page"));
        inform_settings_page->resize(730, 522);
        verticalLayout = new QVBoxLayout(inform_settings_page);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 70, 20);
        widget = new QWidget(inform_settings_page);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"background-color: rgb(235, 235, 235);\n"
"}"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(label);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        voice = new scaled_pixmap_label(widget_4);
        voice->setObjectName(QString::fromUtf8("voice"));

        verticalLayout_2->addWidget(voice);

        voice_text = new QLabel(widget_4);
        voice_text->setObjectName(QString::fromUtf8("voice_text"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(voice_text->sizePolicy().hasHeightForWidth());
        voice_text->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        voice_text->setFont(font1);
        voice_text->setStyleSheet(QString::fromUtf8(""));
        voice_text->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(voice_text);


        horizontalLayout->addWidget(widget_4);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        verticalLayout_3 = new QVBoxLayout(widget_5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        music = new scaled_pixmap_label(widget_5);
        music->setObjectName(QString::fromUtf8("music"));

        verticalLayout_3->addWidget(music);

        music_text = new QLabel(widget_5);
        music_text->setObjectName(QString::fromUtf8("music_text"));
        sizePolicy.setHeightForWidth(music_text->sizePolicy().hasHeightForWidth());
        music_text->setSizePolicy(sizePolicy);
        music_text->setFont(font1);
        music_text->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(music_text);


        horizontalLayout->addWidget(widget_5);

        widget_6 = new QWidget(widget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        verticalLayout_4 = new QVBoxLayout(widget_6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        ad = new scaled_pixmap_label(widget_6);
        ad->setObjectName(QString::fromUtf8("ad"));

        verticalLayout_4->addWidget(ad);

        ad_text = new QLabel(widget_6);
        ad_text->setObjectName(QString::fromUtf8("ad_text"));
        sizePolicy.setHeightForWidth(ad_text->sizePolicy().hasHeightForWidth());
        ad_text->setSizePolicy(sizePolicy);
        ad_text->setFont(font1);
        ad_text->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(ad_text);


        horizontalLayout->addWidget(widget_6);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(inform_settings_page);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget#widget_2\n"
"{\n"
"background-color: rgb(235, 235, 235);\n"
"}"));
        verticalLayout_5 = new QVBoxLayout(widget_2);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout_5->addWidget(label_2);

        widget_7 = new QWidget(widget_2);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_2 = new QHBoxLayout(widget_7);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        lineEdit = new QLineEdit(widget_7);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(lineEdit);

        label_4 = new QLabel(widget_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font1);

        horizontalLayout_2->addWidget(label_4);

        lineEdit_2 = new ComboLineEdit(widget_7);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy2.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(lineEdit_2);

        label_5 = new QLabel(widget_7);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);
        label_5->setFont(font1);

        horizontalLayout_2->addWidget(label_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        widget_9 = new SwitchButton(widget_7);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(widget_9->sizePolicy().hasHeightForWidth());
        widget_9->setSizePolicy(sizePolicy4);
        widget_9->setMinimumSize(QSize(100, 45));
        widget_9->setMaximumSize(QSize(100, 45));

        horizontalLayout_2->addWidget(widget_9);

        horizontalLayout_2->setStretch(0, 5);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 3);
        horizontalLayout_2->setStretch(3, 3);
        horizontalLayout_2->setStretch(4, 3);
        horizontalLayout_2->setStretch(5, 2);
        horizontalLayout_2->setStretch(6, 2);

        verticalLayout_5->addWidget(widget_7);

        widget_8 = new QWidget(widget_2);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_3 = new QHBoxLayout(widget_8);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(widget_8);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setFont(font1);

        horizontalLayout_3->addWidget(label_7);

        lineEdit_4 = new QLineEdit(widget_8);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        sizePolicy2.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy2);
        lineEdit_4->setFont(font1);

        horizontalLayout_3->addWidget(lineEdit_4);

        label_8 = new QLabel(widget_8);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setFont(font1);

        horizontalLayout_3->addWidget(label_8);

        lineEdit_3 = new ComboLineEdit(widget_8);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        sizePolicy2.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(lineEdit_3);

        label_6 = new QLabel(widget_8);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);
        label_6->setFont(font1);

        horizontalLayout_3->addWidget(label_6);

        horizontalSpacer_2 = new QSpacerItem(170, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        widget_10 = new SwitchButton(widget_8);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        sizePolicy4.setHeightForWidth(widget_10->sizePolicy().hasHeightForWidth());
        widget_10->setSizePolicy(sizePolicy4);
        widget_10->setMinimumSize(QSize(100, 45));
        widget_10->setMaximumSize(QSize(100, 45));

        horizontalLayout_3->addWidget(widget_10);

        horizontalLayout_3->setStretch(0, 5);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 3);
        horizontalLayout_3->setStretch(3, 3);
        horizontalLayout_3->setStretch(4, 3);
        horizontalLayout_3->setStretch(5, 2);
        horizontalLayout_3->setStretch(6, 2);

        verticalLayout_5->addWidget(widget_8);

        verticalLayout_5->setStretch(0, 3);
        verticalLayout_5->setStretch(1, 4);
        verticalLayout_5->setStretch(2, 4);

        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(inform_settings_page);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget#widget_3\n"
"{\n"
"background-color: rgb(235, 235, 235);\n"
"}"));
        verticalLayout_6 = new QVBoxLayout(widget_3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        widget_11 = new QWidget(widget_3);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        horizontalLayout_4 = new QHBoxLayout(widget_11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_9 = new QLabel(widget_11);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy5);
        label_9->setFont(font);

        horizontalLayout_4->addWidget(label_9);

        horizontalSpacer_3 = new QSpacerItem(449, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        comboBox = new QComboBox(widget_11);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font);

        horizontalLayout_4->addWidget(comboBox);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 8);
        horizontalLayout_4->setStretch(2, 2);

        verticalLayout_6->addWidget(widget_11);

        widget_12 = new QWidget(widget_3);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        horizontalLayout_5 = new QHBoxLayout(widget_12);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_10 = new QLabel(widget_12);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        horizontalLayout_5->addWidget(label_10);

        horizontalSpacer_4 = new QSpacerItem(449, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        comboBox_2 = new QComboBox(widget_12);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setFont(font);

        horizontalLayout_5->addWidget(comboBox_2);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 8);
        horizontalLayout_5->setStretch(2, 2);

        verticalLayout_6->addWidget(widget_12);

        widget_13 = new QWidget(widget_3);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        horizontalLayout_6 = new QHBoxLayout(widget_13);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, 0);
        label_11 = new QLabel(widget_13);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);
        label_11->setFont(font);

        horizontalLayout_6->addWidget(label_11);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        sound = new scaled_pixmap_label(widget_13);
        sound->setObjectName(QString::fromUtf8("sound"));

        horizontalLayout_6->addWidget(sound);

        horizontalSlider = new QSlider(widget_13);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        sizePolicy5.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy5);
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    height: 8px; /* \347\250\215\345\276\256\345\242\236\345\244\247\350\275\250\351\201\223\351\253\230\345\272\246 */\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"                                stop: 0 rgb(124, 124, 124), \n"
"                                stop: 1.0 rgb(72, 71, 71));\n"
"    border-radius: 4px; /* \350\275\250\351\201\223\345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    /* \345\244\247\345\234\206\345\275\242\346\273\221\345\235\227 */\n"
"    background: qradialgradient(cx:0.5, cy:0.5, radius: 0.5, fx:0.5, fy:0.5,\n"
"                                stop:0.6 #f6f7fa, stop:0.7 #c4c4c4);\n"
"    width: 40px;   /* \346\273\221\345\235\227\345\256\275\345\272\246 */\n"
"    height: 40px;  /* \346\273\221\345\235\227\351\253\230\345\272\246 */\n"
"    margin: -18px 0; /* \350\264\237\350\276\271\350\267\235\344\275\277\346\273\221\345\235\227\350\266\205\345\207\272\350\275\250\351\201\223 */\n"
"    border"
                        "-radius: 20px; /* \345\234\206\345\275\242\346\273\221\345\235\227\357\274\214\345\215\212\345\276\204\344\270\272\351\253\230\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 1px solid #5c5c5c;\n"
"}\n"
"\n"
"/* \346\202\254\345\201\234\346\225\210\346\236\234 */\n"
"QSlider::handle:horizontal:hover {\n"
"    background: qradialgradient(cx:0.5, cy:0.5, radius: 0.5, fx:0.5, fy:0.5,\n"
"                                stop:0.6 #ffffff, stop:0.7 #d0d0d0);\n"
"}\n"
"\n"
"/* \346\214\211\344\270\213\346\225\210\346\236\234 */\n"
"QSlider::handle:horizontal:pressed {\n"
"    background: qradialgradient(cx:0.5, cy:0.5, radius: 0.5, fx:0.5, fy:0.5,\n"
"                                stop:0.6 #e0e0e0, stop:0.7 #a0a0a0);\n"
"}"));
        horizontalSlider->setValue(50);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider);

        horizontalLayout_6->setStretch(0, 2);
        horizontalLayout_6->setStretch(1, 1);
        horizontalLayout_6->setStretch(2, 1);
        horizontalLayout_6->setStretch(3, 7);

        verticalLayout_6->addWidget(widget_13);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 1);
        verticalLayout_6->setStretch(2, 1);

        verticalLayout->addWidget(widget_3);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(1, 6);
        verticalLayout->setStretch(2, 7);

        retranslateUi(inform_settings_page);

        QMetaObject::connectSlotsByName(inform_settings_page);
    } // setupUi

    void retranslateUi(QWidget *inform_settings_page)
    {
        inform_settings_page->setWindowTitle(QCoreApplication::translate("inform_settings_page", "Form", nullptr));
        label->setText(QCoreApplication::translate("inform_settings_page", "\n"
"\346\217\220\351\206\222\346\226\271\345\274\217", nullptr));
        voice->setText(QString());
        voice_text->setText(QCoreApplication::translate("inform_settings_page", "\350\257\255\351\237\263\346\222\255\346\212\245", nullptr));
        music->setText(QString());
        music_text->setText(QCoreApplication::translate("inform_settings_page", "\347\211\271\346\225\210\351\237\263\344\271\220", nullptr));
        ad->setText(QString());
        ad_text->setText(QCoreApplication::translate("inform_settings_page", "\346\214\257\345\212\250", nullptr));
        label_2->setText(QCoreApplication::translate("inform_settings_page", "\346\217\220\351\206\222\346\227\266\351\227\264\350\256\276\347\275\256", nullptr));
        label_3->setText(QCoreApplication::translate("inform_settings_page", "\350\267\235\347\246\273\350\215\257\345\223\201\346\234\211\346\225\210\346\234\237", nullptr));
        lineEdit->setText(QCoreApplication::translate("inform_settings_page", "1", nullptr));
        label_4->setText(QCoreApplication::translate("inform_settings_page", "\345\244\251\346\227\266\357\274\214\346\257\217\345\244\251", nullptr));
        label_5->setText(QCoreApplication::translate("inform_settings_page", "\346\217\220\351\206\222\346\210\221", nullptr));
        label_7->setText(QCoreApplication::translate("inform_settings_page", "\350\215\257\345\223\201\346\225\260\351\207\217\345\260\217\344\272\216", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("inform_settings_page", "1", nullptr));
        label_8->setText(QCoreApplication::translate("inform_settings_page", "\346\227\266\357\274\214\346\257\217\345\244\251", nullptr));
        label_6->setText(QCoreApplication::translate("inform_settings_page", "\346\217\220\351\206\222\346\210\221", nullptr));
        label_9->setText(QCoreApplication::translate("inform_settings_page", "\346\217\220\351\206\222\351\227\264\351\232\224", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("inform_settings_page", "10\345\210\206\351\222\237", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("inform_settings_page", "15\345\210\206\351\222\237", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("inform_settings_page", "30\345\210\206\351\222\237", nullptr));

        label_10->setText(QCoreApplication::translate("inform_settings_page", "\351\237\263\346\225\210", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("inform_settings_page", "\351\237\263\346\225\2101", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("inform_settings_page", "\351\237\263\346\225\2102", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("inform_settings_page", "\351\237\263\346\225\2103", nullptr));

        label_11->setText(QCoreApplication::translate("inform_settings_page", "\345\243\260\351\237\263\345\244\247\345\260\217", nullptr));
        sound->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class inform_settings_page: public Ui_inform_settings_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORM_SETTINGS_PAGE_H
