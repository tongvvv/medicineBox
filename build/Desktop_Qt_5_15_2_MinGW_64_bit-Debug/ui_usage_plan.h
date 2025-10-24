/********************************************************************************
** Form generated from reading UI file 'usage_plan.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USAGE_PLAN_H
#define UI_USAGE_PLAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_usage_plan
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *time;
    QSpacerItem *horizontalSpacer;
    QPushButton *back;
    QWidget *date_select;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *date0;
    QPushButton *date1;
    QPushButton *date2;
    QPushButton *date3;
    QPushButton *date4;
    QPushButton *date5;
    QPushButton *date6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *card_layout;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *usage_plan)
    {
        if (usage_plan->objectName().isEmpty())
            usage_plan->setObjectName(QString::fromUtf8("usage_plan"));
        usage_plan->resize(843, 567);
        verticalLayout = new QVBoxLayout(usage_plan);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 40);
        widget_2 = new QWidget(usage_plan);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        time = new QLabel(widget_2);
        time->setObjectName(QString::fromUtf8("time"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        time->setFont(font);

        horizontalLayout->addWidget(time);

        horizontalSpacer = new QSpacerItem(647, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        back = new QPushButton(widget_2);
        back->setObjectName(QString::fromUtf8("back"));
        back->setFont(font);
        back->setStyleSheet(QString::fromUtf8("padding: 6px 12px;"));

        horizontalLayout->addWidget(back);


        verticalLayout->addWidget(widget_2);

        date_select = new QWidget(usage_plan);
        date_select->setObjectName(QString::fromUtf8("date_select"));
        horizontalLayout_2 = new QHBoxLayout(date_select);
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, -1, 30, -1);
        date0 = new QPushButton(date_select);
        buttonGroup = new QButtonGroup(usage_plan);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(date0);
        date0->setObjectName(QString::fromUtf8("date0"));
        date0->setFont(font);
        date0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: none;\n"
"    border: none;\n"
"    color: black;\n"
"    padding: 8px 16px;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: white;\n"
" 	color: blue;\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"    background-color: white;\n"
"	color: blue;\n"
"}"));
        date0->setCheckable(true);

        horizontalLayout_2->addWidget(date0);

        date1 = new QPushButton(date_select);
        buttonGroup->addButton(date1);
        date1->setObjectName(QString::fromUtf8("date1"));
        date1->setFont(font);
        date1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    color: black;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: white;\n"
" 	color: blue;\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"    background-color: white;\n"
"	color: blue;\n"
"}"));
        date1->setCheckable(true);

        horizontalLayout_2->addWidget(date1);

        date2 = new QPushButton(date_select);
        buttonGroup->addButton(date2);
        date2->setObjectName(QString::fromUtf8("date2"));
        date2->setFont(font);
        date2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    color: black;\n"
"    padding: 8px 16px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: white;\n"
" 	color: blue;\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"    background-color: white;\n"
"	color: blue;\n"
"}"));
        date2->setCheckable(true);

        horizontalLayout_2->addWidget(date2);

        date3 = new QPushButton(date_select);
        buttonGroup->addButton(date3);
        date3->setObjectName(QString::fromUtf8("date3"));
        date3->setFont(font);
        date3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    color: black;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: white;\n"
" 	color: blue;\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"    background-color: white;\n"
"	color: blue;\n"
"}"));
        date3->setCheckable(true);
        date3->setChecked(false);

        horizontalLayout_2->addWidget(date3);

        date4 = new QPushButton(date_select);
        buttonGroup->addButton(date4);
        date4->setObjectName(QString::fromUtf8("date4"));
        date4->setFont(font);
        date4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    color: black;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: white;\n"
" 	color: blue;\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"    background-color: white;\n"
"	color: blue;\n"
"}"));
        date4->setCheckable(true);

        horizontalLayout_2->addWidget(date4);

        date5 = new QPushButton(date_select);
        buttonGroup->addButton(date5);
        date5->setObjectName(QString::fromUtf8("date5"));
        date5->setFont(font);
        date5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    color: black;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: white;\n"
" 	color: blue;\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"    background-color: white;\n"
"	color: blue;\n"
"}"));
        date5->setCheckable(true);

        horizontalLayout_2->addWidget(date5);

        date6 = new QPushButton(date_select);
        buttonGroup->addButton(date6);
        date6->setObjectName(QString::fromUtf8("date6"));
        date6->setFont(font);
        date6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    color: black;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: white;\n"
" 	color: blue;\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"    background-color: white;\n"
"	color: blue;\n"
"}"));
        date6->setCheckable(true);

        horizontalLayout_2->addWidget(date6);


        verticalLayout->addWidget(date_select);

        scrollArea = new QScrollArea(usage_plan);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setAutoFillBackground(true);
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea#scrollArea{\n"
"	background: transparent;\n"
"	border: none;\n"
"}"));
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 831, 385));
        scrollAreaWidgetContents->setAutoFillBackground(false);
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("QWidget#scrollAreaWidgetContents\n"
"{\n"
"	background: transparent;\n"
"}"));
        card_layout = new QGridLayout(scrollAreaWidgetContents);
        card_layout->setObjectName(QString::fromUtf8("card_layout"));
        card_layout->setSizeConstraint(QLayout::SetDefaultConstraint);
        card_layout->setHorizontalSpacing(60);
        card_layout->setVerticalSpacing(40);
        card_layout->setContentsMargins(100, 20, 100, 20);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 3);
        verticalLayout->setStretch(2, 15);

        retranslateUi(usage_plan);

        QMetaObject::connectSlotsByName(usage_plan);
    } // setupUi

    void retranslateUi(QWidget *usage_plan)
    {
        usage_plan->setWindowTitle(QCoreApplication::translate("usage_plan", "Form", nullptr));
        time->setText(QCoreApplication::translate("usage_plan", "09\357\274\23230", nullptr));
        back->setText(QCoreApplication::translate("usage_plan", "\350\277\224\345\233\236\351\246\226\351\241\265", nullptr));
        date0->setText(QCoreApplication::translate("usage_plan", "12\346\234\21015\346\227\245", nullptr));
        date1->setText(QCoreApplication::translate("usage_plan", "12\346\234\21015\346\227\245", nullptr));
        date2->setText(QCoreApplication::translate("usage_plan", "12\346\234\21015\346\227\245", nullptr));
        date3->setText(QCoreApplication::translate("usage_plan", "10\346\234\21023\346\227\245", nullptr));
        date4->setText(QCoreApplication::translate("usage_plan", "10\346\234\21024\346\227\245", nullptr));
        date5->setText(QCoreApplication::translate("usage_plan", "10\346\234\21025\346\227\245", nullptr));
        date6->setText(QCoreApplication::translate("usage_plan", "10\346\234\21026\346\227\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class usage_plan: public Ui_usage_plan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USAGE_PLAN_H
