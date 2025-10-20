/********************************************************************************
** Form generated from reading UI file 'store_page1.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORE_PAGE1_H
#define UI_STORE_PAGE1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_store_page1
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *next;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *skip;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *store_page1)
    {
        if (store_page1->objectName().isEmpty())
            store_page1->setObjectName(QString::fromUtf8("store_page1"));
        store_page1->resize(871, 433);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        font.setBold(false);
        store_page1->setFont(font);
        verticalLayout = new QVBoxLayout(store_page1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(90, 0, 90, 25);
        label = new QLabel(store_page1);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(13);
        font1.setBold(true);
        label->setFont(font1);
        label->setTextFormat(Qt::RichText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        widget_2 = new QWidget(store_page1);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(1);
        font2.setBold(false);
        widget_2->setFont(font2);
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 20);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/store_page1.png")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 4);
        horizontalLayout->setStretch(2, 2);

        verticalLayout->addWidget(widget_2);

        widget = new QWidget(store_page1);
        widget->setObjectName(QString::fromUtf8("widget"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(9);
        font3.setBold(false);
        widget->setFont(font3);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 6, -1, 20);
        horizontalSpacer_3 = new QSpacerItem(194, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        next = new QPushButton(widget);
        next->setObjectName(QString::fromUtf8("next"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(next->sizePolicy().hasHeightForWidth());
        next->setSizePolicy(sizePolicy2);
        next->setMaximumSize(QSize(16777215, 16777215));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(16);
        font4.setBold(false);
        next->setFont(font4);
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

        horizontalLayout_2->addWidget(next);

        horizontalSpacer_4 = new QSpacerItem(195, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        skip = new QPushButton(widget);
        skip->setObjectName(QString::fromUtf8("skip"));
        sizePolicy2.setHeightForWidth(skip->sizePolicy().hasHeightForWidth());
        skip->setSizePolicy(sizePolicy2);
        skip->setFont(font4);
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

        horizontalLayout_2->addWidget(skip);

        horizontalSpacer_5 = new QSpacerItem(194, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 2);
        horizontalLayout_2->setStretch(3, 2);
        horizontalLayout_2->setStretch(4, 3);

        verticalLayout->addWidget(widget);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 4);
        verticalLayout->setStretch(2, 1);

        retranslateUi(store_page1);

        QMetaObject::connectSlotsByName(store_page1);
    } // setupUi

    void retranslateUi(QWidget *store_page1)
    {
        store_page1->setWindowTitle(QCoreApplication::translate("store_page1", "Form", nullptr));
        label->setText(QCoreApplication::translate("store_page1", "\350\257\267\346\214\211\347\205\247\345\233\276\347\244\272\357\274\214\345\260\206\350\215\257\345\223\201\345\244\226\345\214\205\350\243\205\346\224\276\345\234\250\346\214\207\345\256\232\344\275\215\347\275\256\357\274\214\346\211\253\346\217\217\346\235\241\345\275\242\347\240\201\357\274\214\346\211\253\347\240\201\345\220\216\345\217\257\344\273\245\350\207\252\345\212\250\350\257\206\345\210\253\350\215\257\345\223\201\344\277\241\346\201\257\344\276\277\344\272\216\346\202\250\350\277\233\350\241\214\350\215\257\347\211\251\347\256\241\347\220\206", nullptr));
        label_2->setText(QString());
        next->setText(QCoreApplication::translate("store_page1", "\345\256\214\346\210\220\357\274\214\344\270\213\344\270\200\346\255\245", nullptr));
        skip->setText(QCoreApplication::translate("store_page1", "\350\267\263\350\277\207\357\274\214\346\232\202\344\270\215\346\211\253\346\217\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class store_page1: public Ui_store_page1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORE_PAGE1_H
