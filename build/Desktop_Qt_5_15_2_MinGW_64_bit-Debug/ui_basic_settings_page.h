/********************************************************************************
** Form generated from reading UI file 'basic_settings_page.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASIC_SETTINGS_PAGE_H
#define UI_BASIC_SETTINGS_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <switchcontrol.h>

QT_BEGIN_NAMESPACE

class Ui_basic_settings_page
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSlider *horizontalSlider;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *small;
    QPushButton *medium;
    QPushButton *big;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBox;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    SwitchButton *widget_9;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_3;
    SwitchButton *widget_10;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;

    void setupUi(QWidget *basic_settings_page)
    {
        if (basic_settings_page->objectName().isEmpty())
            basic_settings_page->setObjectName(QString::fromUtf8("basic_settings_page"));
        basic_settings_page->resize(718, 526);
        verticalLayout = new QVBoxLayout(basic_settings_page);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 70, 20);
        widget = new QWidget(basic_settings_page);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"background-color: rgb(235, 235, 235);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        horizontalSlider->setFont(font1);
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

        verticalLayout_2->addWidget(horizontalSlider);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 3);

        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(basic_settings_page);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget#widget_2\n"
"{\n"
"background-color: rgb(235, 235, 235);\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font);

        verticalLayout_3->addWidget(label_2);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout = new QHBoxLayout(widget_5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        small = new QPushButton(widget_5);
        small->setObjectName(QString::fromUtf8("small"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(small->sizePolicy().hasHeightForWidth());
        small->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        small->setFont(font2);
        small->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border: 1px solid #1E90FF;\n"
"    color: #1E90FF;\n"
"    border-radius: 4px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgb(16, 251, 255);\n"
"}"));

        horizontalLayout->addWidget(small);

        medium = new QPushButton(widget_5);
        medium->setObjectName(QString::fromUtf8("medium"));
        sizePolicy2.setHeightForWidth(medium->sizePolicy().hasHeightForWidth());
        medium->setSizePolicy(sizePolicy2);
        medium->setFont(font);
        medium->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border: 1px solid #1E90FF;\n"
"    color: #1E90FF;\n"
"    border-radius: 4px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgb(16, 251, 255);\n"
"}"));

        horizontalLayout->addWidget(medium);

        big = new QPushButton(widget_5);
        big->setObjectName(QString::fromUtf8("big"));
        sizePolicy2.setHeightForWidth(big->sizePolicy().hasHeightForWidth());
        big->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(18);
        big->setFont(font3);
        big->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border: 1px solid #1E90FF;\n"
"    color: #1E90FF;\n"
"    border-radius: 4px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgb(16, 251, 255);\n"
"}"));

        horizontalLayout->addWidget(big);


        verticalLayout_3->addWidget(widget_5);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(basic_settings_page);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget#widget_3\n"
"{\n"
"background-color: rgb(235, 235, 235);\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(449, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        comboBox = new QComboBox(widget_3);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font);

        horizontalLayout_2->addWidget(comboBox);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 8);
        horizontalLayout_2->setStretch(2, 2);

        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(basic_settings_page);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setStyleSheet(QString::fromUtf8("QWidget#widget_4\n"
"{\n"
"background-color: rgb(235, 235, 235);\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(widget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout_4->addWidget(label_4);

        widget_6 = new QWidget(widget_4);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_3 = new QHBoxLayout(widget_6);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setFont(font);

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        widget_9 = new SwitchButton(widget_6);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setMaximumSize(QSize(16777215, 45));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Microsoft YaHei"));
        widget_9->setFont(font4);

        horizontalLayout_3->addWidget(widget_9);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 9);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_4->addWidget(widget_6);

        widget_8 = new QWidget(widget_4);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_5 = new QHBoxLayout(widget_8);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget_8);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setFont(font);

        horizontalLayout_5->addWidget(label_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        widget_10 = new SwitchButton(widget_8);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setMaximumSize(QSize(16777215, 45));

        horizontalLayout_5->addWidget(widget_10);

        horizontalLayout_5->setStretch(0, 2);
        horizontalLayout_5->setStretch(1, 9);
        horizontalLayout_5->setStretch(2, 1);

        verticalLayout_4->addWidget(widget_8);

        widget_7 = new QWidget(widget_4);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_4 = new QHBoxLayout(widget_7);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        horizontalLayout_4->addWidget(label_7);


        verticalLayout_4->addWidget(widget_7);


        verticalLayout->addWidget(widget_4);

        verticalLayout->setStretch(0, 4);
        verticalLayout->setStretch(1, 4);
        verticalLayout->setStretch(2, 2);
        verticalLayout->setStretch(3, 6);

        retranslateUi(basic_settings_page);

        QMetaObject::connectSlotsByName(basic_settings_page);
    } // setupUi

    void retranslateUi(QWidget *basic_settings_page)
    {
        basic_settings_page->setWindowTitle(QCoreApplication::translate("basic_settings_page", "Form", nullptr));
        label->setText(QCoreApplication::translate("basic_settings_page", "\345\261\217\345\271\225\344\272\256\345\272\246", nullptr));
        label_2->setText(QCoreApplication::translate("basic_settings_page", "\345\255\227\344\275\223\345\244\247\345\260\217", nullptr));
        small->setText(QCoreApplication::translate("basic_settings_page", "\345\260\217", nullptr));
        medium->setText(QCoreApplication::translate("basic_settings_page", "\344\270\255", nullptr));
        big->setText(QCoreApplication::translate("basic_settings_page", "\345\244\247", nullptr));
        label_3->setText(QCoreApplication::translate("basic_settings_page", "\350\257\255\350\250\200", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("basic_settings_page", "\347\256\200\344\275\223\344\270\255\346\226\207", nullptr));

        label_4->setText(QCoreApplication::translate("basic_settings_page", "\346\227\266\351\227\264\350\256\276\347\275\256", nullptr));
        label_5->setText(QCoreApplication::translate("basic_settings_page", "24\345\260\217\346\227\266\345\210\266", nullptr));
        label_6->setText(QCoreApplication::translate("basic_settings_page", "\350\207\252\345\212\250\350\256\276\347\275\256\346\227\266\351\227\264", nullptr));
        label_7->setText(QCoreApplication::translate("basic_settings_page", "\346\227\266\345\214\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class basic_settings_page: public Ui_basic_settings_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASIC_SETTINGS_PAGE_H
