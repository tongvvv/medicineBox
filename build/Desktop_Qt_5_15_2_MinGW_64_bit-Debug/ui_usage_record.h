/********************************************************************************
** Form generated from reading UI file 'usage_record.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USAGE_RECORD_H
#define UI_USAGE_RECORD_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_usage_record
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
    QLabel *label_2;
    QComboBox *name;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *medicine;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QTableWidget *tableWidget;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *Last;
    QPushButton *next;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *usage_record)
    {
        if (usage_record->objectName().isEmpty())
            usage_record->setObjectName(QString::fromUtf8("usage_record"));
        usage_record->resize(883, 623);
        verticalLayout = new QVBoxLayout(usage_record);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(45, -1, 45, 30);
        widget = new QWidget(usage_record);
        widget->setObjectName(QString::fromUtf8("widget"));
        QFont font;
        font.setBold(false);
        widget->setFont(font);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(606, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        back = new QPushButton(widget);
        back->setObjectName(QString::fromUtf8("back"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(14);
        font2.setBold(false);
        back->setFont(font2);
        back->setStyleSheet(QString::fromUtf8("padding: 6px 12px;"));

        horizontalLayout->addWidget(back);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(usage_record);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        name = new QComboBox(widget_2);
        name->addItem(QString());
        name->addItem(QString());
        name->setObjectName(QString::fromUtf8("name"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(14);
        name->setFont(font3);

        horizontalLayout_2->addWidget(name);

        horizontalSpacer_2 = new QSpacerItem(559, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 8);

        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(usage_record);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        medicine = new QComboBox(widget_3);
        medicine->addItem(QString());
        medicine->addItem(QString());
        medicine->setObjectName(QString::fromUtf8("medicine"));
        medicine->setFont(font3);

        horizontalLayout_3->addWidget(medicine);

        horizontalSpacer_3 = new QSpacerItem(559, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 8);

        verticalLayout->addWidget(widget_3);

        widget_5 = new QWidget(usage_record);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_4);

        dateEdit = new QDateEdit(widget_5);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setFont(font3);
        dateEdit->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"border-radius: 4px;\n"
"padding: 4px,8px;\n"
"}\n"
"QCalendarWidget QToolButton {\n"
"    height: 30px;\n"
"    color: black; /* \346\234\210\344\273\275\345\271\264\344\273\275\351\273\221\350\211\262 */\n"
"    border-radius: 3px;\n"
"    margin: 2px;\n"
"}\n"
""));
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2025, 10, 22));

        horizontalLayout_4->addWidget(dateEdit);

        horizontalSpacer_4 = new QSpacerItem(559, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);
        horizontalLayout_4->setStretch(2, 8);

        verticalLayout->addWidget(widget_5);

        widget_6 = new QWidget(usage_record);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy2);
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(6, 6, 6, -1);
        tableWidget = new QTableWidget(widget_6);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(15);
        font4.setBold(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font4);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font4);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font4);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font4);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font4);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font4);
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QFont font5;
        font5.setPointSize(15);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem6->setFont(font5);
        tableWidget->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem7->setFont(font5);
        tableWidget->setItem(0, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem8->setFont(font5);
        tableWidget->setItem(0, 2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem9->setFont(font5);
        tableWidget->setItem(0, 3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem10->setFont(font5);
        tableWidget->setItem(0, 4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem11->setFont(font5);
        tableWidget->setItem(0, 5, __qtablewidgetitem11);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEnabled(true);
        sizePolicy2.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy2);
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font6.setPointSize(16);
        tableWidget->setFont(font6);
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"background-color: #f0f8ff;\n"
"border-radius: 8px;\n"
"}\n"
"QHeaderView::section {\n"
"    background-color: #fef3e2;  /* \346\270\251\346\232\226\347\232\204\347\261\263\350\211\262 */\n"
"    color: #8b5a2b;            /* \346\267\261\346\243\225\350\211\262\346\226\207\345\255\227 */\n"
"    border: 1px solid rgb(170, 251, 255) ;\n"
"}\n"
"QTableWidget::item{\n"
"	border: 1px solid rgb(170, 251, 255) ;\n"
"	background-color: #fefbf8;\n"
"}"));
        tableWidget->setAutoScroll(true);
        tableWidget->setAlternatingRowColors(false);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
        tableWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        tableWidget->setShowGrid(false);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setWordWrap(true);
        tableWidget->setCornerButtonEnabled(true);
        tableWidget->setRowCount(5);
        tableWidget->setColumnCount(6);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setMinimumSectionSize(22);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(false);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setMinimumSectionSize(22);
        tableWidget->verticalHeader()->setHighlightSections(true);
        tableWidget->verticalHeader()->setStretchLastSection(false);

        horizontalLayout_6->addWidget(tableWidget);


        verticalLayout->addWidget(widget_6);

        widget_4 = new QWidget(usage_record);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_5 = new QHBoxLayout(widget_4);
        horizontalLayout_5->setSpacing(15);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, -1, -1, -1);
        Last = new QPushButton(widget_4);
        Last->setObjectName(QString::fromUtf8("Last"));
        Last->setFont(font3);
        Last->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #0078d7;\n"
"    border: 1px solid #0078d7;\n"
"    border-radius: 2px;\n"
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

        horizontalLayout_5->addWidget(Last);

        next = new QPushButton(widget_4);
        next->setObjectName(QString::fromUtf8("next"));
        next->setFont(font3);
        next->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #0078d7;\n"
"    border: 1px solid #0078d7;\n"
"    border-radius: 2px;\n"
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

        horizontalLayout_5->addWidget(next);

        horizontalSpacer_5 = new QSpacerItem(634, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(widget_4);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 6);
        verticalLayout->setStretch(5, 1);

        retranslateUi(usage_record);

        QMetaObject::connectSlotsByName(usage_record);
    } // setupUi

    void retranslateUi(QWidget *usage_record)
    {
        usage_record->setWindowTitle(QCoreApplication::translate("usage_record", "Form", nullptr));
        label->setText(QCoreApplication::translate("usage_record", "\350\215\257\347\233\222\344\275\277\347\224\250\350\256\260\345\275\225", nullptr));
        back->setText(QCoreApplication::translate("usage_record", "\350\277\224\345\233\236\351\246\226\351\241\265", nullptr));
        label_2->setText(QCoreApplication::translate("usage_record", "\347\224\250\350\215\257\344\272\272", nullptr));
        name->setItemText(0, QCoreApplication::translate("usage_record", "\347\210\270\347\210\270", nullptr));
        name->setItemText(1, QCoreApplication::translate("usage_record", "\345\246\210\345\246\210", nullptr));

        label_3->setText(QCoreApplication::translate("usage_record", "\350\215\257\345\223\201", nullptr));
        medicine->setItemText(0, QCoreApplication::translate("usage_record", "\345\256\232\345\226\230\346\255\242\345\222\263\344\270\270", nullptr));
        medicine->setItemText(1, QCoreApplication::translate("usage_record", "\346\212\227\347\227\205\346\257\222\351\242\227\347\262\222", nullptr));

        label_4->setText(QCoreApplication::translate("usage_record", "\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("usage_record", "\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("usage_record", "\346\234\215\350\215\257\344\272\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("usage_record", "\345\212\250\344\275\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("usage_record", "\350\215\257\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("usage_record", "\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("usage_record", "\350\215\257\347\233\222\347\274\226\345\217\267", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(0, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("usage_record", "2026-06-30 8\357\274\23230", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("usage_record", "\347\210\270\347\210\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("usage_record", "\345\217\226\350\215\257", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("usage_record", "\346\212\227\347\227\205\346\257\222\351\242\227\347\262\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(0, 4);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("usage_record", "2\347\262\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(0, 5);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("usage_record", "05\345\217\267\347\233\222", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        Last->setText(QCoreApplication::translate("usage_record", "\344\270\212\344\270\200\351\241\265", nullptr));
        next->setText(QCoreApplication::translate("usage_record", "\344\270\213\344\270\200\351\241\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class usage_record: public Ui_usage_record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USAGE_RECORD_H
