#include "medcine_information.h"
#include "ui_medcine_information.h"
#include "data_structs.h"

medcine_information::medcine_information(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::medcine_information)
{
    ui->setupUi(this);
    QImage image(":/images/med_pic.png");
    ui->label_pic->setPixmap(QPixmap::fromImage(image));
}

medcine_information::~medcine_information()
{
    delete ui;
}

void medcine_information::on_pushButton_clicked()
{
    emit signal_route::instance()->switchToPage("med_list");
}

void medcine_information::setMedicationInfoFromDataManager()
{
    auto* dm = data_manager::instance();

    // 从全局数据中心获取数据
    QString name = dm->getData("med_info_name").toString();
    QString info = dm->getData("med_info_info").toString();
    int quantity = dm->getData("med_info_number").toInt();
    QString patient = dm->getData("med_info_patient").toString();
    int frequency = dm->getData("med_info_eatfreq").toInt();
    QDateTime startTime = dm->getData("med_info_starttime").toDateTime();

    // 设置数据到界面
    setMedicationInfo(name, info, quantity, patient, frequency, startTime);

    qDebug() << "从全局数据中心加载药品信息:" << name;
}

void medcine_information::setMedicationInfo(const QString& name, const QString& info,
                                            int quantity, const QString& patient,
                                            int frequency, const QDateTime& startTime)
{
    // 设置药品基本信息
    ui->m_name->setText(QString("## %1").arg(name));
    ui->info->setText(info);
    ui->num->setText(QString::number(quantity) + "粒");
    ui->p_name->setText(patient);

    // 设置服药详情
    QString frequencyText = " 每"+ QString::number(frequency) + "天";
    QString startDate = startTime.toString("yyyy-MM-dd");

    ui->eatfreq->setText(frequencyText);
    ui->starttime->setText(startDate);

    // 生成具体的服药时间安排
    QString concreteSchedule = generateScheduleText();

    ui->concrete->setText(concreteSchedule);
}

QString medcine_information::generateScheduleText()
{
    // 这里可以根据实际数据生成具体的服药安排
    // 例如从全局数据获取具体的服药时间
    auto* dm = data_manager::instance();
    QString eatTimes = dm->getData("med_info_eattimes").toString();
    QString eatCounts = dm->getData("med_info_eatcounts").toString();

    if (!eatTimes.isEmpty() && !eatCounts.isEmpty())
    {
        QStringList times = eatTimes.split(',');
        QStringList counts = eatCounts.split(',');

        QString schedule;
        for (int i = 0; i < times.size() && i < counts.size(); ++i)
        {
            schedule += QString("%1时%2粒")
                            .arg(times[i])
                            .arg(counts[i]);
            if (!schedule.isEmpty())
                schedule += "；";
        }
        return schedule;
    }

    // 默认文本
    return "请设置具体的服药时间安排";
}
