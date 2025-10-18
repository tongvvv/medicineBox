/********************************************************************************
** Form generated from reading UI file 'dialog_fetch_nomed.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_FETCH_NOMED_H
#define UI_DIALOG_FETCH_NOMED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialog_fetch_nomed
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *title;
    QToolButton *close;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *content;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *again;
    QPushButton *confirm;

    void setupUi(QDialog *dialog_fetch_nomed)
    {
        if (dialog_fetch_nomed->objectName().isEmpty())
            dialog_fetch_nomed->setObjectName(QString::fromUtf8("dialog_fetch_nomed"));
        dialog_fetch_nomed->resize(400, 300);
        verticalLayout = new QVBoxLayout(dialog_fetch_nomed);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 10, 10);
        widget = new QWidget(dialog_fetch_nomed);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("#widget{\n"
"background-color: rgb(243, 243, 243);\n"
"border-radius: 8px;\n"
"border: 1px solid\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("#widget_2\n"
"{\n"
"	border-bottom: 2px solid rgb(200, 200, 200);\n"
"}"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 20, 25);
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("min-width:     70px;     \n"
"min-height:    70px;     \n"
"max-width:     70px;    \n"
"max-height:    70px;   "));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/clock.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        title = new QLabel(widget_2);
        title->setObjectName(QString::fromUtf8("title"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(15);
        font.setBold(true);
        title->setFont(font);
        title->setIndent(10);

        horizontalLayout->addWidget(title);

        close = new QToolButton(widget_2);
        close->setObjectName(QString::fromUtf8("close"));
        close->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    background-color: white;\n"
"    color: #0078d7;\n"
"    border: none;\n"
"    border-radius: 15px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    min-width: 30px;\n"
"    min-height: 30px;\n"
"    max-width: 30px;\n"
"    max-height: 30px;\n"
"}\n"
"QToolButton:hover {\n"
"    background-color: #f0f8ff;\n"
"}\n"
"QToolButton:pressed {\n"
"    background-color: #e0f0ff;\n"
"}"));

        horizontalLayout->addWidget(close);


        verticalLayout_2->addWidget(widget_2);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        content = new QLabel(widget_4);
        content->setObjectName(QString::fromUtf8("content"));
        QFont font1;
        font1.setPointSize(14);
        content->setFont(font1);
        content->setAlignment(Qt::AlignCenter);
        content->setWordWrap(true);

        horizontalLayout_2->addWidget(content);


        verticalLayout_2->addWidget(widget_4);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setFont(font1);
        widget_3->setStyleSheet(QString::fromUtf8("#widget_3\n"
"{\n"
"	border-top: 2px solid rgb(200, 200, 200);\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, 25, 35);
        horizontalSpacer = new QSpacerItem(427, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        again = new QPushButton(widget_3);
        again->setObjectName(QString::fromUtf8("again"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(again->sizePolicy().hasHeightForWidth());
        again->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(14);
        again->setFont(font2);
        again->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0078d7;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    border: none;\n"
"    padding: 8px 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #106ebe;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #005a9e;\n"
"}"));

        horizontalLayout_3->addWidget(again);

        confirm = new QPushButton(widget_3);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        sizePolicy1.setHeightForWidth(confirm->sizePolicy().hasHeightForWidth());
        confirm->setSizePolicy(sizePolicy1);
        confirm->setFont(font2);
        confirm->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0078d7;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    border: none;\n"
"    padding: 8px 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #106ebe;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #005a9e;\n"
"}"));

        horizontalLayout_3->addWidget(confirm);

        horizontalLayout_3->setStretch(0, 3);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_2->addWidget(widget_3);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 2);
        verticalLayout_2->setStretch(2, 1);

        verticalLayout->addWidget(widget);


        retranslateUi(dialog_fetch_nomed);

        QMetaObject::connectSlotsByName(dialog_fetch_nomed);
    } // setupUi

    void retranslateUi(QDialog *dialog_fetch_nomed)
    {
        dialog_fetch_nomed->setWindowTitle(QCoreApplication::translate("dialog_fetch_nomed", "Dialog", nullptr));
        label->setText(QString());
        title->setText(QCoreApplication::translate("dialog_fetch_nomed", "\350\215\257\347\211\251\345\233\236\346\224\266", nullptr));
        close->setText(QCoreApplication::translate("dialog_fetch_nomed", "\303\227", nullptr));
        content->setText(QCoreApplication::translate("dialog_fetch_nomed", "\346\202\250\346\234\254\346\254\241\345\217\226\345\207\272\350\215\257\345\223\201\345\220\216\357\274\214\346\262\241\346\234\211\346\224\276\345\233\236\357\274\201", nullptr));
        again->setText(QCoreApplication::translate("dialog_fetch_nomed", "\351\207\215\346\226\260\346\224\276\345\205\245", nullptr));
        confirm->setText(QCoreApplication::translate("dialog_fetch_nomed", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialog_fetch_nomed: public Ui_dialog_fetch_nomed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_FETCH_NOMED_H
