/********************************************************************************
** Form generated from reading UI file 'store_page2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORE_PAGE2_H
#define UI_STORE_PAGE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_store_page2
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *next;

    void setupUi(QWidget *store_page2)
    {
        if (store_page2->objectName().isEmpty())
            store_page2->setObjectName(QString::fromUtf8("store_page2"));
        store_page2->resize(1229, 537);
        verticalLayout = new QVBoxLayout(store_page2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(350, 0, 350, 26);
        widget = new QWidget(store_page2);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(13);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label->setWordWrap(true);

        horizontalLayout->addWidget(label);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(store_page2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(50, 10, 50, 40);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/store_page2.png")));
        label_2->setScaledContents(true);

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(store_page2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(50, 0, 50, 30);
        next = new QPushButton(widget_3);
        next->setObjectName(QString::fromUtf8("next"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(next->sizePolicy().hasHeightForWidth());
        next->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(16);
        next->setFont(font1);
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

        horizontalLayout_3->addWidget(next);


        verticalLayout->addWidget(widget_3);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 6);
        verticalLayout->setStretch(2, 1);

        retranslateUi(store_page2);

        QMetaObject::connectSlotsByName(store_page2);
    } // setupUi

    void retranslateUi(QWidget *store_page2)
    {
        store_page2->setWindowTitle(QCoreApplication::translate("store_page2", "Form", nullptr));
        label->setText(QCoreApplication::translate("store_page2", "\350\257\267\346\214\211\347\205\247\345\233\276\347\244\272\357\274\214\345\260\206\350\215\257\345\223\201\345\244\226\345\214\205\350\243\205\345\216\273\351\231\244\345\220\216\357\274\214\345\260\206\350\215\257\345\223\201\346\224\276\345\205\245\350\215\257\347\233\222", nullptr));
        label_2->setText(QString());
        next->setText(QCoreApplication::translate("store_page2", "\345\256\214\346\210\220\357\274\214\344\270\213\344\270\200\346\255\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class store_page2: public Ui_store_page2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORE_PAGE2_H
