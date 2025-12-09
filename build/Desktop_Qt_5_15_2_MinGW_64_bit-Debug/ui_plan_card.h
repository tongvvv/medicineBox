/********************************************************************************
** Form generated from reading UI file 'plan_card.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAN_CARD_H
#define UI_PLAN_CARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_plan_card
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *no;
    QLabel *time;
    QLabel *person_name;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *medicine;

    void setupUi(QWidget *plan_card)
    {
        if (plan_card->objectName().isEmpty())
            plan_card->setObjectName(QString::fromUtf8("plan_card"));
        plan_card->resize(350, 270);
        plan_card->setMinimumSize(QSize(350, 270));
        plan_card->setMaximumSize(QSize(380, 300));
        plan_card->setStyleSheet(QString::fromUtf8("#plan_card{\n"
"	border-radius: 8px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout = new QVBoxLayout(plan_card);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(plan_card);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(30, 15, 40, 15);
        no = new QLabel(widget);
        no->setObjectName(QString::fromUtf8("no"));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        no->setFont(font);
        no->setAutoFillBackground(false);
        no->setStyleSheet(QString::fromUtf8("min-width:     40px;     \n"
"min-height:    40px;     \n"
"max-width:     40px;    \n"
"max-height:    40px;    \n"
"border-radius: 20px;      \n"
"border:1px solid black;  \n"
"background: blue;\n"
"color: white"));
        no->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(no);

        time = new QLabel(widget);
        time->setObjectName(QString::fromUtf8("time"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        time->setFont(font1);
        time->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\345\255\227\357\274\214\347\241\256\344\277\235\345\217\257\350\257\273\346\200\247 */\n"
"    background: transparent; /* \351\200\217\346\230\216\350\203\214\346\231\257\357\274\214\344\270\215\347\273\247\346\211\277\347\210\266\346\216\247\344\273\266\350\203\214\346\231\257\350\211\262 */\n"
"}"));
        time->setMidLineWidth(0);
        time->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(time);

        person_name = new QLabel(widget);
        person_name->setObjectName(QString::fromUtf8("person_name"));
        person_name->setFont(font1);
        person_name->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(person_name);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 6);

        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(plan_card);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 0, 0, 0);
        medicine = new QLabel(widget_2);
        medicine->setObjectName(QString::fromUtf8("medicine"));
        medicine->setFont(font1);
        medicine->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\346\226\207\345\255\227\357\274\214\347\241\256\344\277\235\345\217\257\350\257\273\346\200\247 */\n"
"    background: transparent; /* \351\200\217\346\230\216\350\203\214\346\231\257\357\274\214\344\270\215\347\273\247\346\211\277\347\210\266\346\216\247\344\273\266\350\203\214\346\231\257\350\211\262 */\n"
"}"));
        medicine->setAlignment(Qt::AlignCenter);
        medicine->setIndent(20);

        horizontalLayout_2->addWidget(medicine);

        horizontalLayout_2->setStretch(0, 4);

        verticalLayout->addWidget(widget_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 2);

        retranslateUi(plan_card);

        QMetaObject::connectSlotsByName(plan_card);
    } // setupUi

    void retranslateUi(QWidget *plan_card)
    {
        plan_card->setWindowTitle(QCoreApplication::translate("plan_card", "Form", nullptr));
        no->setText(QCoreApplication::translate("plan_card", "1", nullptr));
        time->setText(QCoreApplication::translate("plan_card", "8\357\274\23230", nullptr));
        person_name->setText(QCoreApplication::translate("plan_card", "\347\210\270\347\210\270", nullptr));
        medicine->setText(QCoreApplication::translate("plan_card", "\346\212\227\347\227\205\346\257\222\346\204\237\345\206\222\350\203\266\345\233\212     1\347\262\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class plan_card: public Ui_plan_card {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAN_CARD_H
