/********************************************************************************
** Form generated from reading UI file 'wifi_page.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIFI_PAGE_H
#define UI_WIFI_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <switchcontrol.h>
#include "wifi_item.h"

QT_BEGIN_NAMESPACE

class Ui_wifi_page
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    SwitchButton *is_open;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    wifi_item *wifi_now;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QListWidget *listWidget;

    void setupUi(QWidget *wifi_page)
    {
        if (wifi_page->objectName().isEmpty())
            wifi_page->setObjectName(QString::fromUtf8("wifi_page"));
        wifi_page->resize(604, 515);
        verticalLayout = new QVBoxLayout(wifi_page);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 10, 70, 10);
        widget = new QWidget(wifi_page);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 6, -1, 6);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(403, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        is_open = new SwitchButton(widget);
        is_open->setObjectName(QString::fromUtf8("is_open"));
        is_open->setMaximumSize(QSize(16777215, 45));

        horizontalLayout->addWidget(is_open);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 8);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(wifi_page);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        wifi_now = new wifi_item(widget_2);
        wifi_now->setObjectName(QString::fromUtf8("wifi_now"));

        verticalLayout_3->addWidget(wifi_now);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(wifi_page);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        listWidget = new QListWidget(widget_3);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"border: none;\n"
"}"));

        verticalLayout_2->addWidget(listWidget);


        verticalLayout->addWidget(widget_3);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 7);

        retranslateUi(wifi_page);

        QMetaObject::connectSlotsByName(wifi_page);
    } // setupUi

    void retranslateUi(QWidget *wifi_page)
    {
        wifi_page->setWindowTitle(QCoreApplication::translate("wifi_page", "Form", nullptr));
        label->setText(QCoreApplication::translate("wifi_page", "WIFI", nullptr));
        label_2->setText(QCoreApplication::translate("wifi_page", "\345\217\257\347\224\250\347\275\221\347\273\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wifi_page: public Ui_wifi_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIFI_PAGE_H
