/********************************************************************************
** Form generated from reading UI file 'fetch_card.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FETCH_CARD_H
#define UI_FETCH_CARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "switchcontrol.h"

QT_BEGIN_NAMESPACE

class Ui_fetch_card
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *number;
    QLabel *label_2;
    SwitchButton *med_switch;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_3;
    QToolButton *med_info;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *card_get_med;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *card_plan;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *fetch_card)
    {
        if (fetch_card->objectName().isEmpty())
            fetch_card->setObjectName(QString::fromUtf8("fetch_card"));
        fetch_card->resize(442, 320);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fetch_card->sizePolicy().hasHeightForWidth());
        fetch_card->setSizePolicy(sizePolicy);
        fetch_card->setMinimumSize(QSize(340, 300));
        fetch_card->setAutoFillBackground(false);
        fetch_card->setStyleSheet(QString::fromUtf8("#fetch_card{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout = new QVBoxLayout(fetch_card);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        widget = new QWidget(fetch_card);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 15, 0, 15);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        number = new QLabel(widget);
        number->setObjectName(QString::fromUtf8("number"));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        number->setFont(font);
        number->setAutoFillBackground(false);
        number->setStyleSheet(QString::fromUtf8("min-width:     40px;     \n"
"min-height:    40px;     \n"
"max-width:     40px;    \n"
"max-height:    40px;    \n"
"border-radius: 20px;      \n"
"border:1px solid black;  \n"
"background: blue;\n"
"color: white"));
        number->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(number);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\345\255\227\357\274\214\347\241\256\344\277\235\345\217\257\350\257\273\346\200\247 */\n"
"    background: transparent; /* \351\200\217\346\230\216\350\203\214\346\231\257\357\274\214\344\270\215\347\273\247\346\211\277\347\210\266\346\216\247\344\273\266\350\203\214\346\231\257\350\211\262 */\n"
"}"));
        label_2->setMidLineWidth(0);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        med_switch = new SwitchButton(widget);
        med_switch->setObjectName(QString::fromUtf8("med_switch"));

        horizontalLayout->addWidget(med_switch);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 3);
        horizontalLayout->setStretch(2, 6);
        horizontalLayout->setStretch(3, 2);

        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(fetch_card);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 0, 0, 0);
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        font2.setBold(false);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\345\255\227\357\274\214\347\241\256\344\277\235\345\217\257\350\257\273\346\200\247 */\n"
"    background: transparent; /* \351\200\217\346\230\216\350\203\214\346\231\257\357\274\214\344\270\215\347\273\247\346\211\277\347\210\266\346\216\247\344\273\266\350\203\214\346\231\257\350\211\262 */\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(12);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\345\255\227\357\274\214\347\241\256\344\277\235\345\217\257\350\257\273\346\200\247 */\n"
"    background: transparent; /* \351\200\217\346\230\216\350\203\214\346\231\257\357\274\214\344\270\215\347\273\247\346\211\277\347\210\266\346\216\247\344\273\266\350\203\214\346\231\257\350\211\262 */\n"
"}"));
        label_3->setIndent(20);

        horizontalLayout_2->addWidget(label_3);

        med_info = new QToolButton(widget_2);
        med_info->setObjectName(QString::fromUtf8("med_info"));
        sizePolicy.setHeightForWidth(med_info->sizePolicy().hasHeightForWidth());
        med_info->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setBold(false);
        med_info->setFont(font4);
        med_info->setStyleSheet(QString::fromUtf8("#med_info\n"
"{\n"
"	background-color: transparent;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/eye.png"), QSize(), QIcon::Normal, QIcon::Off);
        med_info->setIcon(icon);
        med_info->setIconSize(QSize(50, 50));

        horizontalLayout_2->addWidget(med_info);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 4);

        verticalLayout->addWidget(widget_2);

        widget_4 = new QWidget(fetch_card);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, 0, 0, 0);
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\345\255\227\357\274\214\347\241\256\344\277\235\345\217\257\350\257\273\346\200\247 */\n"
"    background: transparent; /* \351\200\217\346\230\216\350\203\214\346\231\257\357\274\214\344\270\215\347\273\247\346\211\277\347\210\266\346\216\247\344\273\266\350\203\214\346\231\257\350\211\262 */\n"
"}"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);

        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\345\255\227\357\274\214\347\241\256\344\277\235\345\217\257\350\257\273\346\200\247 */\n"
"    background: transparent; /* \351\200\217\346\230\216\350\203\214\346\231\257\357\274\214\344\270\215\347\273\247\346\211\277\347\210\266\346\216\247\344\273\266\350\203\214\346\231\257\350\211\262 */\n"
"}"));
        label_5->setMargin(0);
        label_5->setIndent(20);

        horizontalLayout_3->addWidget(label_5);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 5);

        verticalLayout->addWidget(widget_4);

        widget_3 = new QWidget(fetch_card);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        widget_3->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 20);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        card_get_med = new QPushButton(widget_3);
        card_get_med->setObjectName(QString::fromUtf8("card_get_med"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(card_get_med->sizePolicy().hasHeightForWidth());
        card_get_med->setSizePolicy(sizePolicy2);
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font5.setPointSize(16);
        font5.setBold(false);
        card_get_med->setFont(font5);
        card_get_med->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0078d7;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    border: none;\n"
"    padding: 4px 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #106ebe;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #005a9e;\n"
"}"));

        horizontalLayout_4->addWidget(card_get_med);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        card_plan = new QPushButton(widget_3);
        card_plan->setObjectName(QString::fromUtf8("card_plan"));
        sizePolicy1.setHeightForWidth(card_plan->sizePolicy().hasHeightForWidth());
        card_plan->setSizePolicy(sizePolicy1);
        card_plan->setFont(font5);
        card_plan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #0078d7;\n"
"    border: 1px solid #0078d7;\n"
"    border-radius: 8px;\n"
"    padding: 4px 8px;\n"
"    background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #f0f8ff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #e1f0ff;\n"
"}"));

        horizontalLayout_4->addWidget(card_plan);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 3);
        horizontalLayout_4->setStretch(2, 1);
        horizontalLayout_4->setStretch(3, 3);
        horizontalLayout_4->setStretch(4, 1);

        verticalLayout->addWidget(widget_3);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);

        retranslateUi(fetch_card);

        QMetaObject::connectSlotsByName(fetch_card);
    } // setupUi

    void retranslateUi(QWidget *fetch_card)
    {
        fetch_card->setWindowTitle(QCoreApplication::translate("fetch_card", "Form", nullptr));
        number->setText(QCoreApplication::translate("fetch_card", "1", nullptr));
        label_2->setText(QCoreApplication::translate("fetch_card", "\346\230\257\345\220\246\346\217\220\351\206\222    ", nullptr));
        label->setText(QCoreApplication::translate("fetch_card", "\350\215\257\345\220\215 ", nullptr));
        label_3->setText(QCoreApplication::translate("fetch_card", "\346\212\227\347\227\205\346\257\222\346\204\237\345\206\222\351\242\227\347\262\222", nullptr));
        med_info->setText(QString());
        label_4->setText(QCoreApplication::translate("fetch_card", "\346\225\260\351\207\217 ", nullptr));
        label_5->setText(QCoreApplication::translate("fetch_card", "20", nullptr));
        card_get_med->setText(QCoreApplication::translate("fetch_card", "\345\217\226\350\215\257", nullptr));
        card_plan->setText(QCoreApplication::translate("fetch_card", "\346\234\215\350\215\257\350\256\241\345\210\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fetch_card: public Ui_fetch_card {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FETCH_CARD_H
