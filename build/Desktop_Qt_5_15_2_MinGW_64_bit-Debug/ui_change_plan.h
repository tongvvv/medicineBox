/********************************************************************************
** Form generated from reading UI file 'change_plan.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_PLAN_H
#define UI_CHANGE_PLAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "store_page3.h"

QT_BEGIN_NAMESPACE

class Ui_change_plan
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    store_page3 *content;

    void setupUi(QWidget *change_plan)
    {
        if (change_plan->objectName().isEmpty())
            change_plan->setObjectName(QString::fromUtf8("change_plan"));
        change_plan->resize(795, 514);
        verticalLayout = new QVBoxLayout(change_plan);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(change_plan);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(45, -1, -1, -1);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(669, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        content = new store_page3(change_plan);
        content->setObjectName(QString::fromUtf8("content"));

        verticalLayout->addWidget(content);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 8);

        retranslateUi(change_plan);

        QMetaObject::connectSlotsByName(change_plan);
    } // setupUi

    void retranslateUi(QWidget *change_plan)
    {
        change_plan->setWindowTitle(QCoreApplication::translate("change_plan", "Form", nullptr));
        label->setText(QCoreApplication::translate("change_plan", "\344\277\256\346\224\271\350\256\241\345\210\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_plan: public Ui_change_plan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_PLAN_H
