// med_reminder.h
#ifndef MED_REMINDER_H
#define MED_REMINDER_H

#include <QObject>
#include <QMultiMap>
#include <QTimer>
#include <QDateTime>
#include "med_detailed_info.h"
#include "data_structs.h"
#include "utils.h"

// 服药提醒管理器（单例模式，全局唯一）
class MedReminderManager : public QObject
{
    Q_OBJECT
public:
    // 单例获取接口
    static MedReminderManager* instance();

    // 启动提醒服务（程序启动时调用）
    void startReminderService();

    // 停止提醒服务
    void stopReminderService();

    //手动重新加载当日所有提醒任务（存入新药物后调用）
    void reloadDailyReminderTasks();

signals:
    // 触发提醒的信号（连接到UI层实现弹窗/声音提醒）
    void reminderTriggered(const MedReminderTask& task);

private slots:
    // 定时器超时处理（检查并触发提醒）
    void onTimerTimeout();

    // 每日凌晨刷新提醒任务（跨天重新加载）
    void checkDailyRefresh();

private:
    explicit MedReminderManager(QObject *parent = nullptr);
    MedReminderManager(const MedReminderManager&) = delete;
    MedReminderManager& operator=(const MedReminderManager&) = delete;

    // 加载当日所有需要提醒的任务到QMultiMap
    void loadDailyReminderTasks();

    // 计算某药品当日的提醒时间列表（结合服药频率、开始时间）
    QVector<QDateTime> calcMedReminderTimes(const med_detailed_info* medInfo);

    // 检查：半小时内是否服用过该药品（查use_record表）
    bool isTakenInHalfHour(const MedReminderTask& task);

private:
    QMultiMap<QDateTime, MedReminderTask> m_reminderMap; // 有序存储：键=提醒时间，值=提醒任务
    QTimer* m_reminderTimer;                             // 单次触发定时器（指向最近的提醒时间）
    QTimer* m_dailyCheckTimer;                           // 每日跨天检查定时器
    QDate m_lastLoadDate;                                // 最后加载任务的日期（防重复加载）
};

#endif // MED_REMINDER_H
