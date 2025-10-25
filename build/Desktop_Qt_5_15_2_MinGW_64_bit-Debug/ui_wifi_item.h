/********************************************************************************
** Form generated from reading UI file 'wifi_item.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIFI_ITEM_H
#define UI_WIFI_ITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wifi_item
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *name;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *wifi_item)
    {
        if (wifi_item->objectName().isEmpty())
            wifi_item->setObjectName(QString::fromUtf8("wifi_item"));
        wifi_item->resize(541, 81);
        wifi_item->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(235, 235, 235);\n"
""));
        horizontalLayout = new QHBoxLayout(wifi_item);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(12, -1, 28, -1);
        name = new QLabel(wifi_item);
        name->setObjectName(QString::fromUtf8("name"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        name->setFont(font);

        horizontalLayout->addWidget(name);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(wifi_item);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: none;\n"
"color: rgb(6, 168, 255)"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(wifi_item);

        QMetaObject::connectSlotsByName(wifi_item);
    } // setupUi

    void retranslateUi(QWidget *wifi_item)
    {
        wifi_item->setWindowTitle(QCoreApplication::translate("wifi_item", "Form", nullptr));
        name->setText(QCoreApplication::translate("wifi_item", "WIFI\357\274\220\357\274\220\357\274\221", nullptr));
        pushButton->setText(QCoreApplication::translate("wifi_item", "\350\277\236\346\216\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wifi_item: public Ui_wifi_item {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIFI_ITEM_H
