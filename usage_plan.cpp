#include "usage_plan.h"
#include "ui_usage_plan.h"
#include "signal_route.h"
#include <QGraphicsDropShadowEffect>
#include <qDebug>
#include "data_structs.h"

usage_plan::usage_plan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::usage_plan)
{
    ui->setupUi(this);

    connect(ui->date0, &QPushButton::toggled, this, &usage_plan::date_selecter);
    connect(ui->date1, &QPushButton::toggled, this, &usage_plan::date_selecter);
    connect(ui->date2, &QPushButton::toggled, this, &usage_plan::date_selecter);
    connect(ui->date3, &QPushButton::toggled, this, &usage_plan::date_selecter);
    connect(ui->date4, &QPushButton::toggled, this, &usage_plan::date_selecter);
    connect(ui->date5, &QPushButton::toggled, this, &usage_plan::date_selecter);
    connect(ui->date6, &QPushButton::toggled, this, &usage_plan::date_selecter);
}

usage_plan::~usage_plan()
{
    delete ui;
}

void usage_plan::on_back_clicked()
{
    ui->date0->setChecked(true);
    emit signal_route::instance()->switchToPage("main_page");
}

void usage_plan::update_date()
{
    qDeleteAll(m_info);
    qDeleteAll(m_cards);
    m_info.clear();
    m_cards.clear();

    auto now = QDate::currentDate();

    ui->date0->setProperty("buttonDate", QVariant::fromValue(now.addDays(-3)));
    ui->date0->setText(now.addDays(-3).toString("MM月dd日"));
    ui->date1->setProperty("buttonDate", QVariant::fromValue(now.addDays(-2)));
    ui->date1->setText(now.addDays(-2).toString("MM月dd日"));
    ui->date2->setProperty("buttonDate", QVariant::fromValue(now.addDays(-1)));
    ui->date2->setText(now.addDays(-1).toString("MM月dd日"));
    ui->date3->setProperty("buttonDate", QVariant::fromValue(now));
    ui->date3->setText(now.toString("MM月dd日"));
    ui->date4->setProperty("buttonDate", QVariant::fromValue(now.addDays(1)));
    ui->date4->setText(now.addDays(1).toString("MM月dd日"));
    ui->date5->setProperty("buttonDate", QVariant::fromValue(now.addDays(2)));
    ui->date5->setText(now.addDays(2).toString("MM月dd日"));
    ui->date6->setProperty("buttonDate", QVariant::fromValue(now.addDays(3)));
    ui->date6->setText(now.addDays(3).toString("MM月dd日"));

    m_info = data_manager::instance()->getplannedMed();

    ui->time->setText(QTime::currentTime().toString("hh:mm"));

    ui->date3->setChecked(true);
}

void usage_plan::date_selecter(bool checked)
{
    if (!checked)
        return;

    // 1. 安全获取选中的日期
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (!button)
        return;
    QDate selectedDate = button->property("buttonDate").toDate();
    if (!selectedDate.isValid())
    { // 校验日期有效性
        qWarning() << "无效的选中日期";
        return;
    }
    qDebug() << "选中日期：" << selectedDate.toString("yyyy-MM-dd");

    // 2. 清空旧卡片（布局+容器，避免内存泄漏）
    // 2.1 清空网格布局所有项
    for (int i = ui->card_layout->count() - 1; i >= 0; --i)
    {
        QLayoutItem* item = ui->card_layout->itemAt(i);
        if (item && item->widget())
        {
                ui->card_layout->removeItem(item);
                item->widget()->deleteLater();
        }
        else if (item && !item->widget())
        {
            // 处理spacer item
            ui->card_layout->removeItem(item);
        }
        delete item;
    }
    // 2.2 清空卡片容器并释放内存
    m_cards.clear();

    // 3. 筛选选中日期需要服用的药品
    QVector<med_detailed_info*> filteredMeds;
    for (med_detailed_info *medInfo : m_info)
    {
        if (!medInfo) continue;

        // 3.1 基础校验：服药开始时间 <= 选中日期（未到开始时间的药品不显示）
        QDate startDate = medInfo->starttime.date();
        if (selectedDate < startDate)
        {
            continue;
        }

        // 3.2 核心逻辑：根据服药频率（eatfreq）判断是否需要在选中日期服药
        // eatfreq：间隔天数（如1=每天，2=隔天，3=每3天...）
        qint64 daysDiff = startDate.daysTo(selectedDate); // 开始日期到选中日期的天数差
        if (daysDiff % medInfo->eatfreq == 0)
        {
            // 间隔天数匹配（如间隔2天：0/2/4/6天均符合）
            filteredMeds.append(medInfo);
        }
    }

    // 4. 渲染卡片
    int row = 0;    // 布局行索引
    int col = 0;    // 布局列索引
    const int colCount = 2; // 每行显示2张卡片

    if (filteredMeds.isEmpty())
    {
        return;
    }

    // 遍历筛选后的药品，创建并添加卡片
    for (med_detailed_info *medInfo : filteredMeds)
    {
        if (!medInfo) continue;

        for(int ii=0; ii<medInfo->eatcounts.size(); ii++)
        {
            MedReminderTask tsk;
            tsk.eatcount=medInfo->eatcounts[ii];
            tsk.m_name = medInfo->m_name;
            tsk.p_name = medInfo->p_name;
            tsk.no = medInfo->no;
            tsk.time = medInfo->eattimes[ii];
            // 创建药品卡片
            plan_card *medCard = new plan_card(tsk);
            if (!medCard) continue;

            // 将卡片添加到网格布局
            ui->card_layout->addWidget(medCard, row, col);
            // 加入容器管理，方便后续释放
            m_cards.append(medCard);

            // 更新行列索引（满列换行）
            col++;
            if (col >= colCount)
            {
                col = 0;
                row++;
            }
        }
    }
    qDebug()<< "插入了"<<m_cards.size()<<"个卡片";
    // 添加填充项使布局正确
    if (col > 0)
    {
        for (int i = col; i < colCount; i++)
        {
            QWidget* spacer = new QWidget(ui->scrollAreaWidgetContents);
            spacer->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
            ui->card_layout->addWidget(spacer, row, i);
        }
    }
}
