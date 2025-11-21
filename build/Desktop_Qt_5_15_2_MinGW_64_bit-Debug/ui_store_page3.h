/********************************************************************************
** Form generated from reading UI file 'store_page3.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORE_PAGE3_H
#define UI_STORE_PAGE3_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_store_page3
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QWidget *widget_7;
    QHBoxLayout *hlayout_fre;
    QPushButton *everyday;
    QPushButton *two_day;
    QPushButton *three_day;
    QPushButton *everyweek;
    QToolButton *more_freopt;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_10;
    QDateEdit *dateEdit;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QScrollArea *scrollArea_2;
    QWidget *widget_8;
    QHBoxLayout *layout_eat_count;
    QPushButton *once_a_day;
    QPushButton *twice_a_day;
    QPushButton *three_times;
    QToolButton *more_timeopt;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *layout_eat_time;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *next;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *skip;
    QSpacerItem *horizontalSpacer_6;
    QButtonGroup *button;
    QButtonGroup *button_fre;

    void setupUi(QWidget *store_page3)
    {
        if (store_page3->objectName().isEmpty())
            store_page3->setObjectName(QString::fromUtf8("store_page3"));
        store_page3->resize(915, 564);
        verticalLayout = new QVBoxLayout(store_page3);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(200, 0, 200, 50);
        widget = new QWidget(store_page3);
        widget->setObjectName(QString::fromUtf8("widget"));
        QFont font;
        font.setPointSize(11);
        widget->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(7);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("padding: 4px,8px;\n"
"border-radius: 8px;\n"
"\n"
""));

        horizontalLayout_2->addWidget(lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 6);

        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(store_page3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        horizontalLayout->addWidget(label_2);

        widget_7 = new QWidget(widget_2);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(14);
        widget_7->setFont(font3);
        hlayout_fre = new QHBoxLayout(widget_7);
        hlayout_fre->setSpacing(15);
        hlayout_fre->setObjectName(QString::fromUtf8("hlayout_fre"));
        hlayout_fre->setContentsMargins(7, 0, 0, 0);
        everyday = new QPushButton(widget_7);
        button_fre = new QButtonGroup(store_page3);
        button_fre->setObjectName(QString::fromUtf8("button_fre"));
        button_fre->addButton(everyday);
        everyday->setObjectName(QString::fromUtf8("everyday"));
        sizePolicy1.setHeightForWidth(everyday->sizePolicy().hasHeightForWidth());
        everyday->setSizePolicy(sizePolicy1);
        everyday->setFont(font3);
        everyday->setStyleSheet(QString::fromUtf8("QPushButton{    \n"
"	background-color: rgb(255, 255, 255);\n"
"	padding-top: 4px;\n"
"    padding-right: 8px;\n"
"    padding-bottom: 4px;\n"
"    padding-left: 8px;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	background-color: #0078d7;\n"
"    color: white;\n"
"	padding-top: 4px;\n"
"    padding-right: 8px;\n"
"    padding-bottom: 4px;\n"
"    padding-left: 8px;\n"
"border-radius: 8px;\n"
"}"));
        everyday->setCheckable(true);
        everyday->setChecked(true);

        hlayout_fre->addWidget(everyday);

        two_day = new QPushButton(widget_7);
        button_fre->addButton(two_day);
        two_day->setObjectName(QString::fromUtf8("two_day"));
        sizePolicy1.setHeightForWidth(two_day->sizePolicy().hasHeightForWidth());
        two_day->setSizePolicy(sizePolicy1);
        two_day->setFont(font3);
        two_day->setStyleSheet(QString::fromUtf8("QPushButton{    \n"
"	background-color: rgb(255, 255, 255);\n"
"	padding-top: 4px;\n"
"    padding-right: 8px;\n"
"    padding-bottom: 4px;\n"
"    padding-left: 8px;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	background-color: #0078d7;\n"
"    color: white;\n"
"	padding-top: 4px;\n"
"    padding-right: 8px;\n"
"    padding-bottom: 4px;\n"
"    padding-left: 8px;\n"
"border-radius: 8px;\n"
"}"));
        two_day->setCheckable(true);

        hlayout_fre->addWidget(two_day);

        three_day = new QPushButton(widget_7);
        button_fre->addButton(three_day);
        three_day->setObjectName(QString::fromUtf8("three_day"));
        sizePolicy1.setHeightForWidth(three_day->sizePolicy().hasHeightForWidth());
        three_day->setSizePolicy(sizePolicy1);
        three_day->setFont(font3);
        three_day->setStyleSheet(QString::fromUtf8("QPushButton{    \n"
"	background-color: rgb(255, 255, 255);\n"
"	padding-top: 4px;\n"
"    padding-right: 8px;\n"
"    padding-bottom: 4px;\n"
"    padding-left: 8px;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	background-color: #0078d7;\n"
"    color: white;\n"
"	padding-top: 4px;\n"
"    padding-right: 8px;\n"
"    padding-bottom: 4px;\n"
"    padding-left: 8px;\n"
"border-radius: 8px;\n"
"}"));
        three_day->setCheckable(true);

        hlayout_fre->addWidget(three_day);

        everyweek = new QPushButton(widget_7);
        button_fre->addButton(everyweek);
        everyweek->setObjectName(QString::fromUtf8("everyweek"));
        sizePolicy1.setHeightForWidth(everyweek->sizePolicy().hasHeightForWidth());
        everyweek->setSizePolicy(sizePolicy1);
        everyweek->setFont(font3);
        everyweek->setStyleSheet(QString::fromUtf8("QPushButton{    \n"
"	background-color: rgb(255, 255, 255);\n"
"	padding-top: 4px;\n"
"    padding-right: 8px;\n"
"    padding-bottom: 4px;\n"
"    padding-left: 8px;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	background-color: #0078d7;\n"
"    color: white;\n"
"	padding-top: 4px;\n"
"    padding-right: 8px;\n"
"    padding-bottom: 4px;\n"
"    padding-left: 8px;\n"
"border-radius: 8px;\n"
"}"));
        everyweek->setCheckable(true);

        hlayout_fre->addWidget(everyweek);

        more_freopt = new QToolButton(widget_7);
        more_freopt->setObjectName(QString::fromUtf8("more_freopt"));
        more_freopt->setMinimumSize(QSize(30, 30));
        more_freopt->setMaximumSize(QSize(30, 30));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setKerning(false);
        more_freopt->setFont(font4);
        more_freopt->setStyleSheet(QString::fromUtf8("min-width:     30px;     \n"
"min-height:    30px;     \n"
"max-width:     30px;    \n"
"max-height:    30px;    \n"
"border-radius: 15px;      \n"
"background-color: rgb(200, 255, 255);\n"
"\n"
""));

        hlayout_fre->addWidget(more_freopt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlayout_fre->addItem(horizontalSpacer_3);

        hlayout_fre->setStretch(0, 1);
        hlayout_fre->setStretch(1, 1);
        hlayout_fre->setStretch(2, 1);
        hlayout_fre->setStretch(3, 1);
        hlayout_fre->setStretch(5, 5);

        horizontalLayout->addWidget(widget_7);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 8);

        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(store_page3);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);

        horizontalLayout_3->addWidget(label_3);

        widget_9 = new QWidget(widget_3);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        horizontalLayout_10 = new QHBoxLayout(widget_9);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(7, 0, 0, 0);
        dateEdit = new QDateEdit(widget_9);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        sizePolicy1.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy1);
        dateEdit->setFont(font3);
        dateEdit->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"border-radius: 4px;\n"
"padding: 4px,8px;\n"
"}\n"
"QCalendarWidget QToolButton {\n"
"    height: 30px;\n"
"    color: black; /* \346\234\210\344\273\275\345\271\264\344\273\275\351\273\221\350\211\262 */\n"
"    border-radius: 3px;\n"
"    margin: 2px;\n"
"}\n"
""));
        dateEdit->setDate(QDate(2025, 10, 10));

        horizontalLayout_10->addWidget(dateEdit);

        horizontalSpacer_2 = new QSpacerItem(419, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 5);

        horizontalLayout_3->addWidget(widget_9);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 8);

        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(store_page3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);

        horizontalLayout_4->addWidget(label_4);

        scrollArea_2 = new QScrollArea(widget_4);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setStyleSheet(QString::fromUtf8("QScrollArea#scrollArea_2{\n"
"	background: transparent;\n"
"	border: none;\n"
"}"));
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_2->setWidgetResizable(true);
        widget_8 = new QWidget();
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setGeometry(QRect(0, 0, 458, 79));
        widget_8->setStyleSheet(QString::fromUtf8("#widget_8\n"
"{\n"
"	background: transparent;\n"
"}"));
        layout_eat_count = new QHBoxLayout(widget_8);
        layout_eat_count->setSpacing(15);
        layout_eat_count->setObjectName(QString::fromUtf8("layout_eat_count"));
        layout_eat_count->setContentsMargins(7, -1, -1, -1);
        once_a_day = new QPushButton(widget_8);
        button = new QButtonGroup(store_page3);
        button->setObjectName(QString::fromUtf8("button"));
        button->addButton(once_a_day);
        once_a_day->setObjectName(QString::fromUtf8("once_a_day"));
        sizePolicy1.setHeightForWidth(once_a_day->sizePolicy().hasHeightForWidth());
        once_a_day->setSizePolicy(sizePolicy1);
        once_a_day->setFont(font3);
        once_a_day->setStyleSheet(QString::fromUtf8("QPushButton{    \n"
"	background-color: rgb(255, 255, 255);\n"
"	padding-top: 4px;\n"
"    padding-right: 8px;\n"
"    padding-bottom: 4px;\n"
"    padding-left: 8px;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	background-color: #0078d7;\n"
"    color: white;\n"
"	padding-top: 4px;\n"
"    padding-right: 8px;\n"
"    padding-bottom: 4px;\n"
"    padding-left: 8px;\n"
"border-radius: 8px;\n"
"}"));
        once_a_day->setCheckable(true);
        once_a_day->setChecked(true);

        layout_eat_count->addWidget(once_a_day);

        twice_a_day = new QPushButton(widget_8);
        button->addButton(twice_a_day);
        twice_a_day->setObjectName(QString::fromUtf8("twice_a_day"));
        sizePolicy1.setHeightForWidth(twice_a_day->sizePolicy().hasHeightForWidth());
        twice_a_day->setSizePolicy(sizePolicy1);
        twice_a_day->setFont(font3);
        twice_a_day->setStyleSheet(QString::fromUtf8("QPushButton{    \n"
"	background-color: rgb(255, 255, 255);\n"
"	padding-top: 4px;\n"
"    padding-right: 8px;\n"
"    padding-bottom: 4px;\n"
"    padding-left: 8px;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	background-color: #0078d7;\n"
"    color: white;\n"
"	padding-top: 4px;\n"
"    padding-right: 8px;\n"
"    padding-bottom: 4px;\n"
"    padding-left: 8px;\n"
"border-radius: 8px;\n"
"}"));
        twice_a_day->setCheckable(true);
        twice_a_day->setChecked(false);

        layout_eat_count->addWidget(twice_a_day);

        three_times = new QPushButton(widget_8);
        button->addButton(three_times);
        three_times->setObjectName(QString::fromUtf8("three_times"));
        sizePolicy1.setHeightForWidth(three_times->sizePolicy().hasHeightForWidth());
        three_times->setSizePolicy(sizePolicy1);
        three_times->setFont(font3);
        three_times->setStyleSheet(QString::fromUtf8("QPushButton{    \n"
"	background-color: rgb(255, 255, 255);\n"
"	padding-top: 4px;\n"
"    padding-right: 8px;\n"
"    padding-bottom: 4px;\n"
"    padding-left: 8px;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	background-color: #0078d7;\n"
"    color: white;\n"
"	padding-top: 4px;\n"
"    padding-right: 8px;\n"
"    padding-bottom: 4px;\n"
"    padding-left: 8px;\n"
"border-radius: 8px;\n"
"}"));
        three_times->setCheckable(true);
        three_times->setChecked(false);

        layout_eat_count->addWidget(three_times);

        more_timeopt = new QToolButton(widget_8);
        more_timeopt->setObjectName(QString::fromUtf8("more_timeopt"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(more_timeopt->sizePolicy().hasHeightForWidth());
        more_timeopt->setSizePolicy(sizePolicy2);
        more_timeopt->setMinimumSize(QSize(30, 30));
        more_timeopt->setMaximumSize(QSize(30, 30));
        more_timeopt->setFont(font1);
        more_timeopt->setStyleSheet(QString::fromUtf8("min-width:     30px;     \n"
"min-height:    30px;     \n"
"max-width:     30px;    \n"
"max-height:    30px;    \n"
"border-radius: 15px;      \n"
"background-color: rgb(200, 255, 255);\n"
"\n"
""));

        layout_eat_count->addWidget(more_timeopt);

        horizontalSpacer_7 = new QSpacerItem(244, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_eat_count->addItem(horizontalSpacer_7);

        scrollArea_2->setWidget(widget_8);

        horizontalLayout_4->addWidget(scrollArea_2);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 8);

        verticalLayout->addWidget(widget_4);

        widget_6 = new QWidget(store_page3);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font5.setPointSize(13);
        widget_6->setFont(font5);
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        scrollArea = new QScrollArea(widget_6);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy3);
        scrollArea->setLayoutDirection(Qt::LeftToRight);
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea#scrollArea{\n"
"	background: transparent;\n"
"	border: none;\n"
"}"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 458, 119));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("#scrollAreaWidgetContents\n"
"{\n"
"	background: transparent;\n"
"}"));
        layout_eat_time = new QHBoxLayout(scrollAreaWidgetContents);
        layout_eat_time->setSpacing(15);
        layout_eat_time->setObjectName(QString::fromUtf8("layout_eat_time"));
        layout_eat_time->setSizeConstraint(QLayout::SetMinimumSize);
        layout_eat_time->setContentsMargins(7, 0, 0, 0);
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_eat_time->addItem(horizontalSpacer_8);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_5->addWidget(scrollArea);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 8);

        verticalLayout->addWidget(widget_6);

        widget_5 = new QWidget(store_page3);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_7 = new QHBoxLayout(widget_5);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, -1, 25);
        horizontalSpacer_4 = new QSpacerItem(79, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        next = new QPushButton(widget_5);
        next->setObjectName(QString::fromUtf8("next"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(next->sizePolicy().hasHeightForWidth());
        next->setSizePolicy(sizePolicy4);
        next->setFont(font3);
        next->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0078d7;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    border: none;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #106ebe;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #005a9e;\n"
"}"));

        horizontalLayout_7->addWidget(next);

        horizontalSpacer_5 = new QSpacerItem(79, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        skip = new QPushButton(widget_5);
        skip->setObjectName(QString::fromUtf8("skip"));
        sizePolicy4.setHeightForWidth(skip->sizePolicy().hasHeightForWidth());
        skip->setSizePolicy(sizePolicy4);
        skip->setFont(font3);
        skip->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0078d7;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    border: none;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #106ebe;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #005a9e;\n"
"}"));

        horizontalLayout_7->addWidget(skip);

        horizontalSpacer_6 = new QSpacerItem(79, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 2);
        horizontalLayout_7->setStretch(2, 1);
        horizontalLayout_7->setStretch(3, 2);
        horizontalLayout_7->setStretch(4, 1);

        verticalLayout->addWidget(widget_5);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 2);
        verticalLayout->setStretch(3, 2);
        verticalLayout->setStretch(4, 3);
        verticalLayout->setStretch(5, 2);

        retranslateUi(store_page3);

        everyday->setDefault(false);
        once_a_day->setDefault(false);
        twice_a_day->setDefault(false);
        three_times->setDefault(false);


        QMetaObject::connectSlotsByName(store_page3);
    } // setupUi

    void retranslateUi(QWidget *store_page3)
    {
        store_page3->setWindowTitle(QCoreApplication::translate("store_page3", "Form", nullptr));
        label->setText(QCoreApplication::translate("store_page3", "\346\234\215\347\224\250\344\272\272", nullptr));
        label_2->setText(QCoreApplication::translate("store_page3", "\346\234\215\350\215\257\351\242\221\347\216\207", nullptr));
        everyday->setText(QCoreApplication::translate("store_page3", "\346\257\217\345\244\251", nullptr));
        two_day->setText(QCoreApplication::translate("store_page3", "\346\257\2172\345\244\251", nullptr));
        three_day->setText(QCoreApplication::translate("store_page3", "\346\257\2173\345\244\251", nullptr));
        everyweek->setText(QCoreApplication::translate("store_page3", "\346\257\217\345\221\250\344\270\200\346\254\241", nullptr));
        more_freopt->setText(QCoreApplication::translate("store_page3", "+", nullptr));
        label_3->setText(QCoreApplication::translate("store_page3", "\345\274\200\345\247\213\346\227\245\346\234\237", nullptr));
        label_4->setText(QCoreApplication::translate("store_page3", "\346\234\215\350\215\257\346\227\266\351\227\264", nullptr));
        once_a_day->setText(QCoreApplication::translate("store_page3", "1\345\244\2511\346\254\241", nullptr));
        twice_a_day->setText(QCoreApplication::translate("store_page3", "1\345\244\2512\346\254\241", nullptr));
        three_times->setText(QCoreApplication::translate("store_page3", "1\345\244\2513\346\254\241", nullptr));
        more_timeopt->setText(QCoreApplication::translate("store_page3", "+", nullptr));
        label_5->setText(QString());
        next->setText(QCoreApplication::translate("store_page3", "\345\256\214\346\210\220\357\274\214\344\270\213\344\270\200\346\255\245", nullptr));
        skip->setText(QCoreApplication::translate("store_page3", "\350\267\263\350\277\207\357\274\214\347\250\215\345\220\216\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class store_page3: public Ui_store_page3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORE_PAGE3_H
