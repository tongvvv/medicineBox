#include "med_detailed_info.h"

med_detailed_info::med_detailed_info() {}

// 从数据库字符串解析服药时间和数量
void med_detailed_info::parseEatInfo(const QString& timeStr, const QString& countStr)
{
    eattimes.clear();
    eatcounts.clear();

    // 解析服药时间 "08:00,12:00,20:00" -> QTime列表
    QStringList timeList = timeStr.split(',');
    for (const QString& time : timeList) {
        eattimes.append(QTime::fromString(time.trimmed(), "h:m"));
    }

    // 解析服药数量 "1,2,1" -> unsigned short列表
    QStringList countList = countStr.split(',');
    for (const QString& count : countList) {
        eatcounts.append(count.trimmed().toUShort());
    }

    // 确保两个列表长度一致
    if (eattimes.size() != eatcounts.size()) {
        qWarning() << "服药时间和数量不匹配";
    }
}

// 将服药时间和数量转换为数据库字符串格式
QString med_detailed_info::eattimesToDbString() const
{
    QStringList timeStrs;
    for (const QTime& time : eattimes) {
        timeStrs.append(time.toString("h:m"));
    }
    return timeStrs.join(",");
}

QString med_detailed_info::eatcountsToDbString() const
{
    QStringList countStrs;
    for (unsigned short count : eatcounts) {
        countStrs.append(QString::number(count));
    }
    return countStrs.join(",");
}
