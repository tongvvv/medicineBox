/********************************************************************************
** Form generated from reading UI file 'dialog_fetch_med.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_FETCH_MED_H
#define UI_DIALOG_FETCH_MED_H

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

class Ui_dialog_fetch_med
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *title;
    QToolButton *toolButton_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *content;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *recover_box;

    void setupUi(QDialog *dialog_fetch_med)
    {
        if (dialog_fetch_med->objectName().isEmpty())
            dialog_fetch_med->setObjectName(QString::fromUtf8("dialog_fetch_med"));
        dialog_fetch_med->resize(657, 450);
        dialog_fetch_med->setMaximumSize(QSize(16777215, 16777215));
        dialog_fetch_med->setSizeGripEnabled(false);
        verticalLayout = new QVBoxLayout(dialog_fetch_med);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(dialog_fetch_med);
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

        toolButton_2 = new QToolButton(widget_2);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setStyleSheet(QString::fromUtf8("QToolButton {\n"
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

        horizontalLayout->addWidget(toolButton_2);


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
        horizontalLayout_3->setContentsMargins(-1, -1, 30, 45);
        horizontalSpacer = new QSpacerItem(427, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        recover_box = new QPushButton(widget_3);
        recover_box->setObjectName(QString::fromUtf8("recover_box"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(recover_box->sizePolicy().hasHeightForWidth());
        recover_box->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(14);
        recover_box->setFont(font2);
        recover_box->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_3->addWidget(recover_box);

        horizontalLayout_3->setStretch(0, 4);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_2->addWidget(widget_3);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 2);
        verticalLayout_2->setStretch(2, 1);

        verticalLayout->addWidget(widget);


        retranslateUi(dialog_fetch_med);

        QMetaObject::connectSlotsByName(dialog_fetch_med);
    } // setupUi

    void retranslateUi(QDialog *dialog_fetch_med)
    {
        dialog_fetch_med->setWindowTitle(QCoreApplication::translate("dialog_fetch_med", "Dialog", nullptr));
        label->setText(QString());
        title->setText(QCoreApplication::translate("dialog_fetch_med", "\345\217\226\350\215\257\346\217\220\351\206\222", nullptr));
        toolButton_2->setText(QCoreApplication::translate("dialog_fetch_med", "\303\227", nullptr));
        content->setText(QCoreApplication::translate("dialog_fetch_med", "\346\202\250\345\217\226\345\207\272\347\232\204\346\230\257\343\200\22005\343\200\221\345\217\267\350\215\257\347\233\222\343\200\220\346\212\227\347\227\205\346\257\222\345\217\243\346\234\215\346\266\262\343\200\221\357\274\214\346\234\254\346\254\241\351\234\200\350\246\201\346\234\215\347\224\250\343\200\2201\347\223\266\343\200\221\343\200\202\n"
"\346\234\215\347\224\250\345\256\214\346\257\225\345\220\216\357\274\214\350\257\267\345\260\206\345\211\251\344\275\231\350\215\257\347\211\251\346\224\276\345\233\236", nullptr));
        recover_box->setText(QCoreApplication::translate("dialog_fetch_med", "\345\233\236\346\224\266\350\215\257\347\233\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialog_fetch_med: public Ui_dialog_fetch_med {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_FETCH_MED_H
