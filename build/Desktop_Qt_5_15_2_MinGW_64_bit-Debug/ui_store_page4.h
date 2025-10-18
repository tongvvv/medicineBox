/********************************************************************************
** Form generated from reading UI file 'store_page4.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORE_PAGE4_H
#define UI_STORE_PAGE4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_store_page4
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *confirm_store;

    void setupUi(QWidget *store_page4)
    {
        if (store_page4->objectName().isEmpty())
            store_page4->setObjectName(QString::fromUtf8("store_page4"));
        store_page4->resize(1000, 433);
        verticalLayout = new QVBoxLayout(store_page4);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(200, -1, 200, -1);
        label = new QLabel(store_page4);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(13);
        font.setBold(true);
        label->setFont(font);
        label->setTextFormat(Qt::RichText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        widget = new QWidget(store_page4);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(14);
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("padding: 4px,8px;\n"
"border-radius: 8px;\n"
"\n"
""));

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(store_page4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font2);
        lineEdit_2->setStyleSheet(QString::fromUtf8("padding: 4px,8px;\n"
"border-radius: 8px;\n"
"\n"
""));

        horizontalLayout_2->addWidget(lineEdit_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(store_page4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 80, -1, -1);
        confirm_store = new QPushButton(widget_3);
        confirm_store->setObjectName(QString::fromUtf8("confirm_store"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(confirm_store->sizePolicy().hasHeightForWidth());
        confirm_store->setSizePolicy(sizePolicy1);
        confirm_store->setMaximumSize(QSize(300, 16777215));
        confirm_store->setFont(font2);
        confirm_store->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_3->addWidget(confirm_store);


        verticalLayout->addWidget(widget_3);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 2);
        verticalLayout->setStretch(3, 6);

        retranslateUi(store_page4);

        QMetaObject::connectSlotsByName(store_page4);
    } // setupUi

    void retranslateUi(QWidget *store_page4)
    {
        store_page4->setWindowTitle(QCoreApplication::translate("store_page4", "Form", nullptr));
        label->setText(QCoreApplication::translate("store_page4", "\346\202\250\345\267\262\345\234\250\343\200\22005\343\200\221\345\217\267\350\215\257\347\233\222\345\255\230\345\205\245\343\200\220\346\212\227\347\227\205\346\257\222\345\217\243\346\234\215\346\266\262\343\200\22130\347\223\266\357\274\214\346\204\237\350\260\242\346\202\250\344\275\277\347\224\250\346\231\272\350\203\275\350\215\257\347\233\222\347\263\273\347\273\237\357\274\214\350\256\260\345\276\227\346\214\211\346\227\266\345\220\203\350\215\257\345\223\246~", nullptr));
        label_2->setText(QCoreApplication::translate("store_page4", "\350\215\257\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        lineEdit->setText(QCoreApplication::translate("store_page4", "\346\212\227\346\204\237\345\206\222\347\227\205\346\257\222\345\217\243\346\234\215\346\266\262", nullptr));
        label_3->setText(QCoreApplication::translate("store_page4", "\350\215\257\345\223\201\346\225\260\351\207\217\357\274\232", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("store_page4", "30", nullptr));
        confirm_store->setText(QCoreApplication::translate("store_page4", "\344\277\241\346\201\257\346\227\240\350\257\257\357\274\214\345\233\236\346\224\266\350\215\257\347\233\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class store_page4: public Ui_store_page4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORE_PAGE4_H
