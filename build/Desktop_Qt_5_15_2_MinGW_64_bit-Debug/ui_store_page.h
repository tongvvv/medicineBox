/********************************************************************************
** Form generated from reading UI file 'store_page.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORE_PAGE_H
#define UI_STORE_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_store_page
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *back_main_page;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *num1;
    QLabel *label_2;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_9;
    QSpacerItem *verticalSpacer;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *num2;
    QLabel *label_3;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *num3;
    QLabel *label_6;
    QWidget *widget_13;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_11;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *num4;
    QLabel *label_8;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *store_page)
    {
        if (store_page->objectName().isEmpty())
            store_page->setObjectName(QString::fromUtf8("store_page"));
        store_page->resize(1000, 625);
        verticalLayout = new QVBoxLayout(store_page);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(store_page);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(901, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        back_main_page = new QPushButton(widget);
        back_main_page->setObjectName(QString::fromUtf8("back_main_page"));
        QFont font;
        font.setPointSize(15);
        back_main_page->setFont(font);
        back_main_page->setStyleSheet(QString::fromUtf8("padding: 6px 12px;"));

        horizontalLayout->addWidget(back_main_page);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(store_page);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, 0, 30, 0);
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_3 = new QHBoxLayout(widget_7);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        num1 = new QLabel(widget_7);
        num1->setObjectName(QString::fromUtf8("num1"));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(false);
        num1->setFont(font1);
        num1->setLayoutDirection(Qt::RightToLeft);
        num1->setStyleSheet(QString::fromUtf8("min-width:     70px;     \n"
"min-height:    70px;     \n"
"max-width:     70px;    \n"
"max-height:    70px;    \n"
"border-radius: 35px;      \n"
"border:1px solid black;  \n"
"background: rgb(23, 201, 255);\n"
"color: white"));
        num1->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(num1);


        verticalLayout_2->addWidget(widget_7);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_2->addWidget(label_2);


        horizontalLayout_2->addWidget(widget_3);

        widget_11 = new QWidget(widget_2);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setMaximumSize(QSize(100, 16777215));
        verticalLayout_6 = new QVBoxLayout(widget_11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_9 = new QLabel(widget_11);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(false);
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(5, 92, 255);"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_9);

        verticalSpacer = new QSpacerItem(20, 54, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        verticalLayout_6->setStretch(0, 5);
        verticalLayout_6->setStretch(1, 4);

        horizontalLayout_2->addWidget(widget_11);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_8 = new QWidget(widget_4);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_4 = new QHBoxLayout(widget_8);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        num2 = new QLabel(widget_8);
        num2->setObjectName(QString::fromUtf8("num2"));
        num2->setFont(font);
        num2->setStyleSheet(QString::fromUtf8("min-width:     70px;     \n"
"min-height:    70px;     \n"
"max-width:     70px;    \n"
"max-height:    70px;    \n"
"border-radius: 35px;    \n"
"border:1px solid black;  \n"
"background: white;\n"
"color: black"));
        num2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(num2);


        verticalLayout_3->addWidget(widget_8);

        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_3->addWidget(label_3);


        horizontalLayout_2->addWidget(widget_4);

        widget_12 = new QWidget(widget_2);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setMaximumSize(QSize(100, 16777215));
        verticalLayout_7 = new QVBoxLayout(widget_12);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_10 = new QLabel(widget_12);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font3;
        font3.setPointSize(25);
        font3.setBold(true);
        label_10->setFont(font3);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(5, 92, 255);"));
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_10);

        verticalSpacer_2 = new QSpacerItem(20, 54, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        verticalLayout_7->setStretch(0, 5);
        verticalLayout_7->setStretch(1, 4);

        horizontalLayout_2->addWidget(widget_12);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        verticalLayout_4 = new QVBoxLayout(widget_5);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_9 = new QWidget(widget_5);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        QFont font4;
        font4.setPointSize(13);
        widget_9->setFont(font4);
        horizontalLayout_5 = new QHBoxLayout(widget_9);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        num3 = new QLabel(widget_9);
        num3->setObjectName(QString::fromUtf8("num3"));
        num3->setFont(font);
        num3->setStyleSheet(QString::fromUtf8("min-width:     70px;     \n"
"min-height:    70px;     \n"
"max-width:     70px;    \n"
"max-height:    70px;    \n"
"border-radius: 35px;    \n"
"border:1px solid black;  \n"
"background: white;\n"
"color: black"));
        num3->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(num3);


        verticalLayout_4->addWidget(widget_9);

        label_6 = new QLabel(widget_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_4->addWidget(label_6);


        horizontalLayout_2->addWidget(widget_5);

        widget_13 = new QWidget(widget_2);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        widget_13->setMaximumSize(QSize(100, 16777215));
        verticalLayout_8 = new QVBoxLayout(widget_13);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_11 = new QLabel(widget_13);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(5, 92, 255);"));
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_11);

        verticalSpacer_3 = new QSpacerItem(20, 54, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_3);

        verticalLayout_8->setStretch(0, 5);
        verticalLayout_8->setStretch(1, 4);

        horizontalLayout_2->addWidget(widget_13);

        widget_6 = new QWidget(widget_2);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        verticalLayout_5 = new QVBoxLayout(widget_6);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_10 = new QWidget(widget_6);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        horizontalLayout_6 = new QHBoxLayout(widget_10);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        num4 = new QLabel(widget_10);
        num4->setObjectName(QString::fromUtf8("num4"));
        num4->setFont(font);
        num4->setStyleSheet(QString::fromUtf8("min-width:     70px;     \n"
"min-height:    70px;     \n"
"max-width:     70px;    \n"
"max-height:    70px;    \n"
"border-radius: 35px;     \n"
"border:1px solid black;  \n"
"background: white;\n"
"color: black"));
        num4->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(num4);


        verticalLayout_5->addWidget(widget_10);

        label_8 = new QLabel(widget_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_5->addWidget(label_8);


        horizontalLayout_2->addWidget(widget_6);


        verticalLayout->addWidget(widget_2);

        stackedWidget = new QStackedWidget(store_page);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        verticalLayout->addWidget(stackedWidget);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 6);
        verticalLayout->setStretch(2, 18);

        retranslateUi(store_page);

        QMetaObject::connectSlotsByName(store_page);
    } // setupUi

    void retranslateUi(QWidget *store_page)
    {
        store_page->setWindowTitle(QCoreApplication::translate("store_page", "Form", nullptr));
        back_main_page->setText(QCoreApplication::translate("store_page", "\350\277\224\345\233\236\351\246\226\351\241\265", nullptr));
        num1->setText(QCoreApplication::translate("store_page", "1", nullptr));
        label_2->setText(QCoreApplication::translate("store_page", "\346\211\253\346\217\217\346\235\241\345\275\242\347\240\201", nullptr));
        label_9->setText(QCoreApplication::translate("store_page", "\342\236\234", nullptr));
        num2->setText(QCoreApplication::translate("store_page", "2", nullptr));
        label_3->setText(QCoreApplication::translate("store_page", "\346\224\276\345\205\245\350\215\257\345\223\201", nullptr));
        label_10->setText(QCoreApplication::translate("store_page", "\342\236\234", nullptr));
        num3->setText(QCoreApplication::translate("store_page", "3", nullptr));
        label_6->setText(QCoreApplication::translate("store_page", "\350\256\276\347\275\256\346\234\215\350\215\257\350\256\241\345\210\222", nullptr));
        label_11->setText(QCoreApplication::translate("store_page", "\342\236\234", nullptr));
        num4->setText(QCoreApplication::translate("store_page", "4", nullptr));
        label_8->setText(QCoreApplication::translate("store_page", "\345\233\236\346\224\266\350\215\257\347\233\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class store_page: public Ui_store_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORE_PAGE_H
