/********************************************************************************
** Form generated from reading UI file 'change_plan_confirm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_PLAN_CONFIRM_H
#define UI_CHANGE_PLAN_CONFIRM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "store_page4.h"

QT_BEGIN_NAMESPACE

class Ui_change_plan_confirm
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    store_page4 *store4;

    void setupUi(QWidget *change_plan_confirm)
    {
        if (change_plan_confirm->objectName().isEmpty())
            change_plan_confirm->setObjectName(QString::fromUtf8("change_plan_confirm"));
        change_plan_confirm->resize(673, 397);
        verticalLayout = new QVBoxLayout(change_plan_confirm);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(change_plan_confirm);
        widget->setObjectName(QString::fromUtf8("widget"));

        verticalLayout->addWidget(widget);

        store4 = new store_page4(change_plan_confirm);
        store4->setObjectName(QString::fromUtf8("store4"));

        verticalLayout->addWidget(store4);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 6);

        retranslateUi(change_plan_confirm);

        QMetaObject::connectSlotsByName(change_plan_confirm);
    } // setupUi

    void retranslateUi(QWidget *change_plan_confirm)
    {
        change_plan_confirm->setWindowTitle(QCoreApplication::translate("change_plan_confirm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_plan_confirm: public Ui_change_plan_confirm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_PLAN_CONFIRM_H
