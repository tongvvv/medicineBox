fndef REMINDERTHREAD_H
#define REMINDERTHREAD_H

#include <QThread>
#include <QScopedPointer>
#include "medreminder.h"
#include "data_structs.h".h"

// 服药提醒子线程：封装MedReminder，避免阻塞UI
class ReminderThread : public QThread
{
    Q_OBJECT
public:
    explicit ReminderThread(data_manager *dataMgr, QObject *parent = nullptr);
    ~ReminderThread() override;

    // 获取提醒器实例（用于连接信号）
    MedReminder* reminder() const { return m_reminder.data(); }

protected:
    void run() override;

private:
    QScopedPointer<MedReminder> m_reminder; // 智能指针管理，自动析构
    data_manager *m_dataMgr;                // 数据管理器（外部传入，线程内复用）
};

#endif // REMINDERTHREAD_H
