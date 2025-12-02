/********************************************************************************
** Form generated from reading UI file 'main_page.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_PAGE_H
#define UI_MAIN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_page
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *main_time;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *med_list;
    QPushButton *use_record;
    QPushButton *med_plan;
    QPushButton *settings;
    QPushButton *special_med;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *main_store;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QPushButton *main_fetch;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *main_page)
    {
        if (main_page->objectName().isEmpty())
            main_page->setObjectName(QString::fromUtf8("main_page"));
        main_page->resize(774, 589);
        verticalLayout = new QVBoxLayout(main_page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(main_page);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        main_time = new QLabel(widget);
        main_time->setObjectName(QString::fromUtf8("main_time"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(main_time->sizePolicy().hasHeightForWidth());
        main_time->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        font.setBold(false);
        main_time->setFont(font);
        main_time->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        main_time->setWordWrap(false);
        main_time->setIndent(10);

        horizontalLayout->addWidget(main_time);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        med_list = new QPushButton(widget);
        med_list->setObjectName(QString::fromUtf8("med_list"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(med_list->sizePolicy().hasHeightForWidth());
        med_list->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(15);
        font1.setBold(false);
        med_list->setFont(font1);

        horizontalLayout->addWidget(med_list);

        use_record = new QPushButton(widget);
        use_record->setObjectName(QString::fromUtf8("use_record"));
        sizePolicy1.setHeightForWidth(use_record->sizePolicy().hasHeightForWidth());
        use_record->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(15);
        use_record->setFont(font2);

        horizontalLayout->addWidget(use_record);

        med_plan = new QPushButton(widget);
        med_plan->setObjectName(QString::fromUtf8("med_plan"));
        sizePolicy1.setHeightForWidth(med_plan->sizePolicy().hasHeightForWidth());
        med_plan->setSizePolicy(sizePolicy1);
        med_plan->setFont(font2);

        horizontalLayout->addWidget(med_plan);

        settings = new QPushButton(widget);
        settings->setObjectName(QString::fromUtf8("settings"));
        sizePolicy1.setHeightForWidth(settings->sizePolicy().hasHeightForWidth());
        settings->setSizePolicy(sizePolicy1);
        settings->setFont(font2);

        horizontalLayout->addWidget(settings);

        special_med = new QPushButton(widget);
        special_med->setObjectName(QString::fromUtf8("special_med"));
        sizePolicy1.setHeightForWidth(special_med->sizePolicy().hasHeightForWidth());
        special_med->setSizePolicy(sizePolicy1);
        special_med->setFont(font2);

        horizontalLayout->addWidget(special_med);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 1);
        horizontalLayout->setStretch(6, 1);

        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(main_page);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(159, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 148, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        main_store = new QPushButton(widget_3);
        main_store->setObjectName(QString::fromUtf8("main_store"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(main_store->sizePolicy().hasHeightForWidth());
        main_store->setSizePolicy(sizePolicy2);
        main_store->setAutoFillBackground(false);
        main_store->setStyleSheet(QString::fromUtf8("QPushButton#main_store\n"
"{\n"
"    border-radius: 50%; \n"
"	\n"
"	border-image: url(:/images/main_store.png);\n"
"}\n"
""));
        main_store->setIconSize(QSize(222, 222));
        main_store->setAutoRepeat(false);

        verticalLayout_2->addWidget(main_store);

        verticalSpacer_2 = new QSpacerItem(20, 148, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 3);
        verticalLayout_2->setStretch(2, 2);

        horizontalLayout_2->addWidget(widget_3);

        horizontalSpacer_2 = new QSpacerItem(159, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 148, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        main_fetch = new QPushButton(widget_4);
        main_fetch->setObjectName(QString::fromUtf8("main_fetch"));
        sizePolicy2.setHeightForWidth(main_fetch->sizePolicy().hasHeightForWidth());
        main_fetch->setSizePolicy(sizePolicy2);
        main_fetch->setStyleSheet(QString::fromUtf8("#main_fetch\n"
"{\n"
"    border-radius: 50%;  \n"
"	\n"
"	border-image: url(:/images/main_fetch.png);\n"
"}\n"
""));
        main_fetch->setIconSize(QSize(222, 222));

        verticalLayout_3->addWidget(main_fetch);

        verticalSpacer_4 = new QSpacerItem(20, 148, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        verticalLayout_3->setStretch(0, 2);
        verticalLayout_3->setStretch(1, 3);
        verticalLayout_3->setStretch(2, 2);

        horizontalLayout_2->addWidget(widget_4);

        horizontalSpacer_3 = new QSpacerItem(159, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 3);
        horizontalLayout_2->setStretch(2, 2);
        horizontalLayout_2->setStretch(3, 3);
        horizontalLayout_2->setStretch(4, 2);

        verticalLayout->addWidget(widget_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 9);

        retranslateUi(main_page);

        QMetaObject::connectSlotsByName(main_page);
    } // setupUi

    void retranslateUi(QWidget *main_page)
    {
        main_page->setWindowTitle(QCoreApplication::translate("main_page", "Form", nullptr));
        main_time->setText(QCoreApplication::translate("main_page", "2026-06-30 \346\230\237\346\234\237\344\270\200 09:30", nullptr));
        med_list->setText(QCoreApplication::translate("main_page", "\350\215\257\347\233\222\345\210\227\350\241\250", nullptr));
        use_record->setText(QCoreApplication::translate("main_page", "\344\275\277\347\224\250\350\256\260\345\275\225", nullptr));
        med_plan->setText(QCoreApplication::translate("main_page", "\347\224\250\350\215\257\350\256\241\345\210\222", nullptr));
        settings->setText(QCoreApplication::translate("main_page", "\350\256\276\347\275\256", nullptr));
        special_med->setText(QCoreApplication::translate("main_page", "\347\211\271\346\256\212\350\215\257\345\223\201\346\217\220\351\206\222", nullptr));
        main_store->setText(QString());
        main_fetch->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class main_page: public Ui_main_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_PAGE_H
