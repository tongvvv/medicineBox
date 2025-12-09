// med_reminder.cpp
#include "medreminder.h"
#include <QDebug>
#include <QDate>

// 单例初始化
MedReminderManager* MedReminderManager::instance()
{
    static MedReminderManager s_instance;
    return &s_instance;
}

MedReminderManager::MedReminderManager(QObject *parent)
    : QObject(parent)
    , m_reminderTimer(new QTimer(this))
    , m_dailyCheckTimer(new QTimer(this))
{
    // 定时器配置：单次触发（每次只处理最近的提醒）
    m_reminderTimer->setSingleShot(true);
    connect(m_reminderTimer, &QTimer::timeout, this, &MedReminderManager::onTimerTimeout);

    // 每日检查定时器：每分钟检查一次是否跨天，跨天则重新加载任务
    m_dailyCheckTimer->setInterval(60 * 1000); // 1分钟检查一次
    connect(m_dailyCheckTimer, &QTimer::timeout, this, &MedReminderManager::checkDailyRefresh);
}

// 启动提醒服务
void MedReminderManager::startReminderService()
{
    // 首次加载当日任务
    loadDailyReminderTasks();
    // 启动每日检查定时器
    m_dailyCheckTimer->start();
}

// 停止提醒服务
void MedReminderManager::stopReminderService()
{
    m_reminderTimer->stop();
    m_dailyCheckTimer->stop();
    m_reminderMap.clear();
}

void MedReminderManager::reloadDailyReminderTasks()
{
    qDebug() << "[提醒管理器] 开始重新加载当日提醒任务（因新增药物触发）";

    // 复用现有加载逻辑，自动处理：清空旧任务、停止旧定时器、加载新任务
    loadDailyReminderTasks();

    qDebug() << "[提醒管理器] 当日提醒任务重载完成，当前任务数：" << m_reminderMap.size();
}

// 每日跨天检查：日期变化则重新加载任务
void MedReminderManager::checkDailyRefresh()
{
    QDate currentDate = QDate::currentDate();
    if (currentDate != m_lastLoadDate) {
        loadDailyReminderTasks(); // 跨天重新加载当日任务
    }
}

// 加载当日所有需要提醒的任务
void MedReminderManager::loadDailyReminderTasks()
{
    // 清空旧任务
    m_reminderMap.clear();
    m_reminderTimer->stop();
    m_lastLoadDate = QDate::currentDate();

    // 1. 获取所有需要提醒的药品（inform=1）
    QVector<med_detailed_info*> medList = data_manager::instance()->getInformedMed();
    QDateTime todayStart(m_lastLoadDate, QTime(0, 0, 0)); // 当日0点0分0秒
    QDateTime tomorrowStart = todayStart.addDays(1);               // 次日0点

    // 2. 遍历药品，计算当日提醒时间并加入Map
    for (med_detailed_info* medInfo : medList)
    {
        if (!medInfo) continue;

        // 过滤：开始时间未到 或 非当日服药日（根据eatfreq间隔天数）
        if (medInfo->starttime > todayStart) continue;
        qint64 daysFromStart = medInfo->starttime.daysTo(todayStart);
        if (daysFromStart % medInfo->eatfreq != 0) continue; // 不是服药日，跳过

        // 3. 计算该药品当日的所有提醒时间, 其实就是QTime转QDateTime
        QVector<QDateTime> remindTimes = calcMedReminderTimes(medInfo);

        // 前置检查：时间列表和数量列表长度必须一致，否则跳过该药品（避免越界）
        if (remindTimes.size() != medInfo->eatcounts.size())
        {
            qWarning() << "药品" << medInfo->m_name << "服药时间数量(" << remindTimes.size()
                << ")与服药数量数量(" << medInfo->eatcounts.size() << ")不匹配，跳过该药品";
            delete medInfo;
            continue;
        }

        for (int i = 0; i < remindTimes.size(); ++i)
        {
            const QDateTime& remindTime = remindTimes[i];
            // 过滤：已过期 或 超出当日的提醒时间
            if (remindTime < QDateTime::currentDateTime() || remindTime >= tomorrowStart)
            {
                continue;
            }

            // 构造提醒任务（当前索引i的时间 → 当前索引i的数量）
            MedReminderTask task;
            task.p_name = medInfo->p_name;
            task.m_name = medInfo->m_name;
            task.eatcount = medInfo->eatcounts[i]; // 精准匹配：第i个时间对应第i个数量
            task.no = medInfo->no;

            // 加入有序Map（QMultiMap自动按时间升序排列）
            m_reminderMap.insert(remindTime, task);

            qDebug() << "添加提醒任务：患者=" << task.p_name << "，药品=" << task.m_name
                     << "，时间=" << remindTime.toString("HH:mm") << "，数量=" << task.eatcount;
        }

        // 内存释放，etInformedMed返回的指针需手动释放
        delete medInfo;
    }

    // 5. 设置第一个提醒定时器（如果有任务）
    if (!m_reminderMap.isEmpty())
    {
        QDateTime nextRemindTime = m_reminderMap.begin().key(); // 最早的提醒时间
        qint64 msecsToNext = QDateTime::currentDateTime().msecsTo(nextRemindTime);
        if (msecsToNext > 0)
        {
            m_reminderTimer->start(msecsToNext);
            qDebug() << "下一次提醒时间：" << nextRemindTime.toString("yyyy-MM-dd HH:mm:ss");
        }
    }
    else
    {
        qDebug() << "当日无服药提醒任务";
    }
}

// 计算某药品当日的提醒时间列表（QTime转QDateTime）
QVector<QDateTime> MedReminderManager::calcMedReminderTimes(const med_detailed_info* medInfo)
{
    QVector<QDateTime> times;
    if (!medInfo) return times;

    QDate today = m_lastLoadDate;
    for (const QTime& eatTime : medInfo->eattimes) {
        times.append(QDateTime(today, eatTime)); // 当日的服药时间（转成绝对时间）
    }
    return times;
}

// 检查：半小时内是否服用过该药品（查询use_record表）
bool MedReminderManager::isTakenInHalfHour(const MedReminderTask& task)
{
    QSqlQuery query;
    QString sql = R"(
        SELECT COUNT(*)
        FROM use_record
        WHERE use_no = ?
        AND use_pname = ?
        AND use_mname = ?
        AND use_action = 2
        AND use_time >= ?
        AND use_time <= ?
    )";

    if (!query.prepare(sql))
    {
        qCritical() << "预处理SQL失败：" << query.lastError().text();
        return false;
    }

    QDateTime now = QDateTime::currentDateTime();
    QDateTime halfHourAgo = now.addSecs(-30 * 60); // 半小时前

    QString timeFormat = "yyyy-MM-dd HH:mm:ss";
    query.addBindValue(task.no);
    query.addBindValue(task.p_name);
    query.addBindValue(task.m_name);
    query.addBindValue(halfHourAgo.toString(timeFormat));
    query.addBindValue(now.toString(timeFormat));

    if (!query.exec()) {
        qCritical() << "查询服药记录失败：" << query.lastError().text();
        return false; //默认提醒
    }

    if (!query.next()) {
        qWarning() << "获取服药记录计数失败（无结果行）：" << query.lastError().text();
        return false; //默认提醒
    }

    const int recordCount = query.value(0).toInt();

    return recordCount > 0; // 有记录=半小时内吃过
}

// 定时器超时：处理到期的提醒任务
void MedReminderManager::onTimerTimeout()
{
    QDateTime now = QDateTime::currentDateTime();
    QList<QDateTime> processedTimes; // 记录已处理的时间键

    // 1. 遍历所有到期的提醒任务（时间<=当前时间）
    auto it = m_reminderMap.begin();
    while (it != m_reminderMap.end() && it.key() <= now)
    {
        MedReminderTask task = it.value();
        QDateTime remindTime = it.key();

        // 2. 检查：半小时内是否吃过，没吃过则触发提醒
        if (!isTakenInHalfHour(task))
        {
            qDebug() << "触发提醒：患者=" << task.p_name << "，药品=" << task.m_name
                     << "，数量=" << task.eatcount << "，药盒号=" << task.no;
            emit reminderTriggered(task); // 发送提醒信号
        }
        else
        {
            qDebug() << "跳过提醒：患者=" << task.p_name << "半小时内已服用" << task.m_name;
        }

        processedTimes.append(remindTime);
        ++it;
    }

    // 3. 移除已处理的任务（避免重复提醒）
    for (const QDateTime& time : processedTimes)
    {
        m_reminderMap.remove(time);
    }

    // 4. 设置下一个提醒定时器（如果还有任务）
    if (!m_reminderMap.isEmpty())
    {
        QDateTime nextRemindTime = m_reminderMap.begin().key();
        qint64 msecsToNext = now.msecsTo(nextRemindTime);
        if (msecsToNext > 0) {
            m_reminderTimer->start(msecsToNext);
            qDebug() << "下一次提醒时间：" << nextRemindTime.toString("yyyy-MM-dd HH:mm:ss");
        }
    }
    else
    {
        qDebug() << "暂无后续提醒任务";
    }
}
