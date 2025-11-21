/********************************************************************************
** Form generated from reading UI file 'emergency_page.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMERGENCY_PAGE_H
#define UI_EMERGENCY_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <switchcontrol.h>

QT_BEGIN_NAMESPACE

class Ui_emergency_page
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    SwitchButton *widget_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *phone_num;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *emergency_page)
    {
        if (emergency_page->objectName().isEmpty())
            emergency_page->setObjectName(QString::fromUtf8("emergency_page"));
        emergency_page->resize(752, 609);
        emergency_page->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(emergency_page);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(30, 50, 70, -1);
        widget = new QWidget(emergency_page);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	background-color: rgb(235, 235, 235);\n"
"}\n"
""));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget_3 = new SwitchButton(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMaximumSize(QSize(100, 45));

        horizontalLayout->addWidget(widget_3);

        horizontalSpacer = new QSpacerItem(542, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 6);

        verticalLayout->addWidget(widget);

        label = new QLabel(emergency_page);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("\n"
"	background-color: rgb(235, 235, 235);\n"
""));
        label->setIndent(10);

        verticalLayout->addWidget(label);

        widget_2 = new QWidget(emergency_page);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget#widget_2\n"
"{\n"
"	background-color: rgb(235, 235, 235);\n"
"}\n"
""));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        font1.setBold(true);
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        phone_num = new QLineEdit(widget_2);
        phone_num->setObjectName(QString::fromUtf8("phone_num"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(phone_num->sizePolicy().hasHeightForWidth());
        phone_num->setSizePolicy(sizePolicy);
        phone_num->setFont(font);
        phone_num->setCursor(QCursor(Qt::IBeamCursor));
        phone_num->setMouseTracking(true);
        phone_num->setStyleSheet(QString::fromUtf8("border-radius: 4px;\n"
"padding: 3px"));

        horizontalLayout_2->addWidget(phone_num);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 4);
        horizontalLayout_2->setStretch(2, 5);

        verticalLayout->addWidget(widget_2);

        verticalSpacer = new QSpacerItem(20, 268, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 3);

        retranslateUi(emergency_page);

        QMetaObject::connectSlotsByName(emergency_page);
    } // setupUi

    void retranslateUi(QWidget *emergency_page)
    {
        emergency_page->setWindowTitle(QCoreApplication::translate("emergency_page", "Form", nullptr));
        label->setText(QCoreApplication::translate("emergency_page", "\346\267\273\345\212\240\347\264\247\346\200\245\350\201\224\347\263\273\344\272\272\345\220\216\357\274\214\350\213\245\344\270\211\346\254\241\346\234\252\346\234\215\350\215\257\357\274\214\345\260\206\344\273\245\345\217\221\351\200\201\347\237\255\344\277\241\347\232\204\346\226\271\345\274\217\351\200\232\347\237\245", nullptr));
        label_2->setText(QCoreApplication::translate("emergency_page", "\347\264\247\346\200\245\350\201\224\347\263\273\344\272\272\347\224\265\350\257\235", nullptr));
        phone_num->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class emergency_page: public Ui_emergency_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMERGENCY_PAGE_H
