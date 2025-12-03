#include "med_list.h"
#include "ui_med_list.h"
#include <QGraphicsDropShadowEffect>
#include "data_structs.h"

med_list::med_list(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::med_list)
    , m_state(true)
{
    ui->setupUi(this);

    // 连接信号槽
    connect(ui->patient_list, QOverload<int>::of(&QComboBox::currentIndexChanged),
            this, &med_list::onPatientSelected);
    connect(ui->medcine_list, QOverload<int>::of(&QComboBox::currentIndexChanged),
            this, &med_list::onMedicineSelected);
}

//用来控制卡片下面两个按钮是否显示的
void med_list::card_is_fetch(bool state)
{
    if(m_state == state)
    {
        return;
    }
    m_state = state;

    for(auto& it : cards)
    {
        it->card_is_fetch(state);
    }
}

med_list::~med_list()
{
    delete ui;
}

void med_list::getAllinfo()
{
    // 清空现有数据
    detailedInfoList.clear();

    for (fetch_card* card : cards)
    {
        if (card->parent() == ui->scrollAreaWidgetContents)
        {
            ui->med_card_gridLayout->removeWidget(card);
            card->deleteLater();
        }
    }
    cards.clear();

    // 设置网格布局属性 - 靠左对齐且不拉伸
    ui->med_card_gridLayout->setAlignment(Qt::AlignLeft | Qt::AlignTop); // 左上对齐

    detailedInfoList = data_manager::instance()->getAllMed();

    for (auto& medInfo : detailedInfoList) {
        // 创建卡片，传入药盒编号
        fetch_card* card = new fetch_card(ui->scrollAreaWidgetContents, medInfo->no);

        // 设置详细信息到卡片
        card->set_detailedinfo(medInfo);

        // 设置卡片按钮显示状态
        card->card_is_fetch(m_state);

        cards.append(card);
    }

    qDebug() << "成功创建" << cards.size() << "个药品卡片" ;

    // 清空下拉框
    ui->patient_list->clear();
    ui->medcine_list->clear();

    // 添加所有独特的用药人
    addUniquePatients();

    // 默认选择第一个用药人
    if (ui->patient_list->count() > 0) {
        ui->patient_list->setCurrentIndex(0);
    }
}

void med_list::addUniquePatients()
{
    QSet<QString> uniquePatients;

    // 从药品信息中提取独特的用药人
    for (auto& medInfo : detailedInfoList)
    {
        uniquePatients.insert(medInfo->p_name);
    }

    for (const QString& patient : uniquePatients) {
        ui->patient_list->addItem(patient);
    }

    qDebug() << "添加了" << uniquePatients.size() << "个独特的用药人";
}

void med_list::onPatientSelected(int index)
{
    if (index < 0) return;

    // 阻塞信号，避免递归调用
    ui->medcine_list->blockSignals(true);

    QString selectedPatient = ui->patient_list->currentText();

    // 清空药品列表
    ui->medcine_list->clear();

    // 显示该用药人的所有药品
    addPatientMedicines(selectedPatient);

    // 解除信号阻塞
    ui->medcine_list->blockSignals(false);

    // 根据选择筛选卡片
    filterCards();
}

void med_list::addPatientMedicines(const QString& patientName)
{
    QSet<QString> patientMedicines;

    // 查找该用药人的所有药品
    for (auto& medInfo : detailedInfoList)
    {
        if (medInfo->p_name == patientName)
        {
            patientMedicines.insert(medInfo->m_name);
        }
    }

    for (const QString& medicine : patientMedicines) {
        ui->medcine_list->addItem(medicine);
    }

    // 默认选择第一个药品
    if (ui->medcine_list->count() > 0) {
        ui->medcine_list->setCurrentIndex(0);
    }

    qDebug() << "患者" << patientName << "有" << patientMedicines.size() << "种药品";
}

void med_list::onMedicineSelected(int index)
{
    if (index < 0) return;

    // 根据选择筛选卡片
    filterCards();
}

void med_list::filterCards()
{
    QString selectedPatient = ui->patient_list->currentText();
    QString selectedMedicine = ui->medcine_list->currentText();

    int visibleCount = 0;

    for (fetch_card* card : cards)
    {
        bool patientMatch = (card->m_detailedinfo.p_name == selectedPatient);
        bool medicineMatch = (card->m_detailedinfo.m_name == selectedMedicine);
        bool shouldShow = patientMatch && medicineMatch;
        card->setVisible(shouldShow);

        if (shouldShow)
        {
            visibleCount++;
        }
    }

    // 重新排列可见的卡片
    rearrangeVisibleCards();

    qDebug() << "筛选结果：患者=" << selectedPatient << "药品=" << selectedMedicine
             << "显示" << visibleCount << "个卡片";
}

void med_list::rearrangeVisibleCards()
{
    // 从布局中移除所有卡片
    QLayoutItem* item;
    while ((item = ui->med_card_gridLayout->takeAt(0)) != nullptr) {
        // 只处理卡片widget
        if (item->widget() && item->widget()->inherits("fetch_card")) {
            // 只是从布局移除，不删除widget
            ui->med_card_gridLayout->removeItem(item);
        }
        delete item; // 删除布局项
    }

    // 重新添加可见的卡片
    int row = 0;
    int col = 0;
    const int COLUMN_COUNT = 3;

    for (fetch_card* card : cards)
    {
        if (card->isVisible())
        {
            ui->med_card_gridLayout->addWidget(card, row, col);

            col++;
            if (col >= COLUMN_COUNT) {
                col = 0;
                row++;
            }
        }
    }

    // 添加填充项使布局正确
    if (col > 0) {
        for (int i = col; i < COLUMN_COUNT; i++) {
            QWidget* spacer = new QWidget(ui->scrollAreaWidgetContents);
            spacer->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
            ui->med_card_gridLayout->addWidget(spacer, row, i);
        }
    }
}

void med_list::on_back_mainpage_clicked()
{
    emit signal_route::instance()->switchToPage("main_page");
}



