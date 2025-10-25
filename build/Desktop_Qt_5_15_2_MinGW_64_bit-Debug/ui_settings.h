/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *back;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_3;
    QPushButton *wifi;
    QPushButton *basic;
    QPushButton *inform;
    QPushButton *emergency;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName(QString::fromUtf8("settings"));
        settings->resize(795, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(settings->sizePolicy().hasHeightForWidth());
        settings->setSizePolicy(sizePolicy);
        settings->setMinimumSize(QSize(0, 600));
        settings->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(settings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(settings);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(631, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        back = new QPushButton(widget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setFont(font);
        back->setStyleSheet(QString::fromUtf8("padding: 6px 12px;"));

        horizontalLayout->addWidget(back);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(settings);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(20, -1, 40, 10);
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, -1, 0);
        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setStyleSheet(QString::fromUtf8("#widget_5{\n"
"border: 	1px solid  rgb(86, 86, 86);\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(widget_5);
        verticalLayout_3->setSpacing(1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(1, 1, 1, 1);
        wifi = new QPushButton(widget_5);
        buttonGroup = new QButtonGroup(settings);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(wifi);
        wifi->setObjectName(QString::fromUtf8("wifi"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(16);
        font1.setBold(false);
        wifi->setFont(font1);
        wifi->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"padding: 14px 12px;\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"}\n"
"QPushButton:checked\n"
"{\n"
"	color: white;\n"
"	background-color: blue;\n"
"}\n"
""));
        wifi->setCheckable(true);
        wifi->setChecked(false);

        verticalLayout_3->addWidget(wifi);

        basic = new QPushButton(widget_5);
        buttonGroup->addButton(basic);
        basic->setObjectName(QString::fromUtf8("basic"));
        basic->setFont(font1);
        basic->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"padding: 14px 12px;\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"}\n"
"QPushButton:checked\n"
"{\n"
"	color: white;\n"
"	background-color: blue;\n"
"}\n"
""));
        basic->setCheckable(true);

        verticalLayout_3->addWidget(basic);

        inform = new QPushButton(widget_5);
        buttonGroup->addButton(inform);
        inform->setObjectName(QString::fromUtf8("inform"));
        inform->setFont(font1);
        inform->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"padding: 14px 12px;\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"}\n"
"QPushButton:checked\n"
"{\n"
"	color: white;\n"
"	background-color: blue;\n"
"}\n"
""));
        inform->setCheckable(true);

        verticalLayout_3->addWidget(inform);

        emergency = new QPushButton(widget_5);
        buttonGroup->addButton(emergency);
        emergency->setObjectName(QString::fromUtf8("emergency"));
        emergency->setFont(font1);
        emergency->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"padding: 14px 12px;\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 0px;\n"
"}\n"
"QPushButton:checked\n"
"{\n"
"	color: white;\n"
"	background-color: blue;\n"
"}\n"
""));
        emergency->setCheckable(true);

        verticalLayout_3->addWidget(emergency);


        verticalLayout_2->addWidget(widget_5);

        verticalSpacer = new QSpacerItem(20, 295, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addWidget(widget_3);

        stackedWidget = new QStackedWidget(widget_2);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("QStackedWidget#stackedWidget{\n"
"background-color: white;\n"
"border: 	1px solid  rgb(86, 86, 86);\n"
"}"));

        horizontalLayout_2->addWidget(stackedWidget);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 8);

        verticalLayout->addWidget(widget_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 10);

        retranslateUi(settings);

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QWidget *settings)
    {
        settings->setWindowTitle(QCoreApplication::translate("settings", "Form", nullptr));
        label->setText(QCoreApplication::translate("settings", "09\357\274\23230", nullptr));
        back->setText(QCoreApplication::translate("settings", "\350\277\224\345\233\236\351\246\226\351\241\265", nullptr));
        wifi->setText(QCoreApplication::translate("settings", "WIFI\350\256\276\347\275\256", nullptr));
        basic->setText(QCoreApplication::translate("settings", "\345\237\272\347\241\200\350\256\276\347\275\256", nullptr));
        inform->setText(QCoreApplication::translate("settings", "\346\217\220\351\206\222\350\256\276\347\275\256", nullptr));
        emergency->setText(QCoreApplication::translate("settings", "\347\264\247\346\200\245\350\201\224\347\263\273\344\272\272\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
