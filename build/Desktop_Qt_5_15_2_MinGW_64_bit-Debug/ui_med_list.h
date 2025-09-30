/********************************************************************************
** Form generated from reading UI file 'med_list.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MED_LIST_H
#define UI_MED_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_med_list
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *back_mainpage;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *patient_list;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *medcine_name;
    QSpacerItem *horizontalSpacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *med_card_gridLayout;

    void setupUi(QWidget *med_list)
    {
        if (med_list->objectName().isEmpty())
            med_list->setObjectName(QString::fromUtf8("med_list"));
        med_list->resize(1000, 625);
        verticalLayout = new QVBoxLayout(med_list);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(17, 17, 17, 17);
        widget = new QWidget(med_list);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        back_mainpage = new QPushButton(widget);
        back_mainpage->setObjectName(QString::fromUtf8("back_mainpage"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(back_mainpage->sizePolicy().hasHeightForWidth());
        back_mainpage->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(15);
        back_mainpage->setFont(font1);
        back_mainpage->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(back_mainpage);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(med_list);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        patient_list = new QComboBox(widget_2);
        patient_list->addItem(QString());
        patient_list->addItem(QString());
        patient_list->setObjectName(QString::fromUtf8("patient_list"));
        QSizePolicy sizePolicy4(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(patient_list->sizePolicy().hasHeightForWidth());
        patient_list->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(patient_list);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 18);

        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(med_list);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy2.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy2);
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        medcine_name = new QComboBox(widget_3);
        medcine_name->addItem(QString());
        medcine_name->addItem(QString());
        medcine_name->addItem(QString());
        medcine_name->setObjectName(QString::fromUtf8("medcine_name"));
        sizePolicy4.setHeightForWidth(medcine_name->sizePolicy().hasHeightForWidth());
        medcine_name->setSizePolicy(sizePolicy4);

        horizontalLayout_3->addWidget(medcine_name);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 18);

        verticalLayout->addWidget(widget_3);

        scrollArea = new QScrollArea(med_list);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setAutoFillBackground(true);
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea#scrollArea{\n"
"	background: transparent;\n"
"	border: none;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 966, 430));
        scrollAreaWidgetContents->setAutoFillBackground(false);
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("QWidget#scrollAreaWidgetContents\n"
"{\n"
"	background: transparent;\n"
"}"));
        med_card_gridLayout = new QGridLayout(scrollAreaWidgetContents);
        med_card_gridLayout->setSpacing(15);
        med_card_gridLayout->setObjectName(QString::fromUtf8("med_card_gridLayout"));
        med_card_gridLayout->setContentsMargins(20, 20, 20, 20);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 8);

        retranslateUi(med_list);

        QMetaObject::connectSlotsByName(med_list);
    } // setupUi

    void retranslateUi(QWidget *med_list)
    {
        med_list->setWindowTitle(QCoreApplication::translate("med_list", "Form", nullptr));
        label->setText(QCoreApplication::translate("med_list", "\350\215\257\347\233\222\345\210\227\350\241\250", nullptr));
        back_mainpage->setText(QCoreApplication::translate("med_list", "\350\277\224\345\233\236\351\246\226\351\241\265", nullptr));
        label_2->setText(QCoreApplication::translate("med_list", "\347\224\250\350\215\257\344\272\272", nullptr));
        patient_list->setItemText(0, QCoreApplication::translate("med_list", "\347\210\270\347\210\270", nullptr));
        patient_list->setItemText(1, QCoreApplication::translate("med_list", "\345\256\235\345\256\235", nullptr));

        label_3->setText(QCoreApplication::translate("med_list", "\350\215\257\345\223\201\345\220\215", nullptr));
        medcine_name->setItemText(0, QCoreApplication::translate("med_list", "\350\216\262\350\212\261\346\270\205\347\230\237", nullptr));
        medcine_name->setItemText(1, QCoreApplication::translate("med_list", "\345\256\232\345\226\230\346\255\242\345\222\263\344\270\270", nullptr));
        medcine_name->setItemText(2, QCoreApplication::translate("med_list", "\345\260\217\345\204\277\346\255\242\345\222\263\347\263\226\346\265\206", nullptr));

    } // retranslateUi

};

namespace Ui {
    class med_list: public Ui_med_list {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MED_LIST_H
