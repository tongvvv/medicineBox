#include "store_page3.h"
#include "ui_store_page3.h"

store_page3::store_page3(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::store_page3)
{
    ui->setupUi(this);

    eat_fre.append(ui->everyday);
    eat_fre.append(ui->two_day);
    eat_fre.append(ui->three_day);
    eat_fre.append(ui->everyweek);

    eat_count.append(ui->once_a_day);
    eat_count.append(ui->twice_a_day);
    eat_count.append(ui->three_times);

    connect(ui->once_a_day, &QPushButton::toggled, this, &store_page3::onTimeCountClicked);
    connect(ui->twice_a_day, &QPushButton::toggled, this, &store_page3::onTimeCountClicked);
    connect(ui->three_times, &QPushButton::toggled, this, &store_page3::onTimeCountClicked);

    ui->once_a_day->setProperty("count",1);
    ui->twice_a_day->setProperty("count",2);
    ui->three_times->setProperty("count",3);

    QTimer::singleShot(50,this,[this](){emit this->ui->once_a_day->toggled(true);});

    ui->dateEdit->setCalendarPopup(true); //设置日历弹出


}

store_page3::~store_page3()
{
    delete ui;
}

void store_page3::on_more_freopt_clicked()
{
    if (ui->more_freopt->text() == "+")
    {
        // 添加两个新按钮
        QPushButton *half_month = addFrequencyButton("半月一次");
        eat_fre.append(half_month);
        ui->hlayout_fre->insertWidget(ui->hlayout_fre->count()-2, half_month);
        ui->hlayout_fre->setStretch(ui->hlayout_fre->count()-2, 1);
        ui->button_fre->addButton(half_month);

        QPushButton *full_month = addFrequencyButton("每月一次");
        eat_fre.append(full_month);
        ui->hlayout_fre->insertWidget(ui->hlayout_fre->count()-2, full_month);
        ui->hlayout_fre->setStretch(ui->hlayout_fre->count()-2, 1);
        ui->button_fre->addButton(full_month);

        ui->more_freopt->setText("-");
    }
    else
    {
        // 移除之前添加的两个按钮
        for (int i = 0; i < 2; i++)
        {
            if (!eat_fre.isEmpty())
            {
                QPushButton *button = eat_fre.takeLast(); // 从列表取出最后一个按钮

                // 从布局中移除
                ui->hlayout_fre->removeWidget(button);

                // 从按钮组中移除
                ui->button_fre->removeButton(button);

                // 删除按钮对象
                delete button;
            }
        }
        ui->more_freopt->setText("+");
    }
}

void store_page3::on_more_timeopt_clicked()
{
    //增加按钮
    QString str = QString::asprintf("1天%d次", eat_count.count()+1);
    QPushButton *button = addFrequencyButton(str);
    button->setProperty("count", eat_count.count()+1);
    eat_count.append(button);
    ui->layout_eat_count->insertWidget(ui->layout_eat_count->count()-2, button);
    ui->button->addButton(button);

    connect(button, &QPushButton::toggled, this, &store_page3::onTimeCountClicked);

    QTimer::singleShot(50, this, [this]() {
        // 确保所有对象有效
        if (!ui || !ui->scrollArea_2) return;

        QScrollBar *scrollBar = ui->scrollArea_2->horizontalScrollBar();
        if (!scrollBar) return;

        // 直接设置滚动位置（无动画）
        scrollBar->setValue(scrollBar->maximum());
    });
}

QPushButton* store_page3::addFrequencyButton(const QString &text)
{
    QFont font3;
    font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
    font3.setPointSize(14);

    QPushButton *button = new QPushButton(this);

    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    sizePolicy.setHeightForWidth(button->sizePolicy().hasHeightForWidth());

    button->setSizePolicy(sizePolicy);
    button->setText(text);
    button->setFont(font3);
    button->setStyleSheet(QString::fromUtf8("QPushButton{    \n"
                                              "	background-color: rgb(255, 255, 255);\n"
                                              "	padding-top: 4px;\n"
                                              "    padding-right: 8px;\n"
                                              "    padding-bottom: 4px;\n"
                                              "    padding-left: 8px;\n"
                                              "border-radius: 8px;\n"
                                              "}\n"
                                              "\n"
                                              "QPushButton:checked{\n"
                                              "	background-color: #0078d7;\n"
                                              "    color: white;\n"
                                              "	padding-top: 4px;\n"
                                              "    padding-right: 8px;\n"
                                              "    padding-bottom: 4px;\n"
                                              "    padding-left: 8px;\n"
                                              "border-radius: 8px;\n"
                                              "}"));
    button->setCheckable(true);

    return button;
}

void store_page3::onTimeCountClicked(bool checked)
{
    /*多个checkable属性的按钮在同一按钮组里时， 点击新的button时，
    原button触发toggled false，新的button触发toggled true，这里只要处理true的这个信号*/
    if(checked == false)
        return;

    QPushButton *button = qobject_cast<QPushButton*>(sender());
    int count = button->property("count").toInt();

    if(count == eat_time.size())
        return;

    //如果选择的吃药次数比当前次数大
    if(count > eat_time.size())
    {
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(14);

        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHeightForWidth(button->sizePolicy().hasHeightForWidth());

        int tmp = count - eat_time.size();
        for(int ii=0; ii < tmp; ii++)
        {
            auto edit = new ComboLineEdit(this);
            ui->layout_eat_time->insertWidget(ui->layout_eat_time->count()-1, edit);
            eat_time.append(edit);
            sizePolicy.setHeightForWidth(edit->sizePolicy().hasHeightForWidth());
            edit->setSizePolicy(sizePolicy);
            edit->setMaximumSize(QSize(16777215, 16777215));
            edit->setFont(font3);
            edit->setStyleSheet(QString::fromUtf8("padding: 4px,8px;\n"
                                                       "border-radius: 6px;\n"
                                                       "\n"
                                                       ""));
            edit->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
            edit->setMinimumWidth(200);
        }
    }
    else
    {
        int tmp = eat_time.size() - count;
        for(int ii=0; ii < tmp; ii++)
        {
            if (!eat_time.isEmpty())
            {
                auto edit = eat_time.takeLast();
                ui->layout_eat_time->removeWidget(edit);
                edit->deleteLater();
            }
        }
    }

    ui->layout_eat_time->update();
}

bool store_page3::isset()
{
    if(ui->user->text().trimmed().isEmpty()) { return false;}
    for(auto& it : eat_time)
    {
        if(it->isset == false) {return false;}
    }
    return true;
}

