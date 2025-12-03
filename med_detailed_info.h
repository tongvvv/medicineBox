#ifndef MED_DETAILED_INFO_H
#define MED_DETAILED_INFO_H
#include "qdebug.h"
#include <QString>
#include <QDateTime>
#include "utils.h"

class med_detailed_info
{
public:
    med_detailed_info();

    void parseEatInfo(const QString &timeStr, const QString &countStr);  //从格式化的数据转化成QVector的元素
    QString eattimesToDbString() const;   //把QVector里的元素转化成格式化数据
    QString eatcountsToDbString() const;  //把QVector里的元素转化成格式化数据

public:
    unsigned short no; // 药盒编号 (对应数据库的tinyint)
    QString m_name;    // 药品名称
    QString m_info;    // 药品信息
    unsigned short number; // 药品数量
    QString m_picpath; // 药品图片路径
    QString p_name;    // 患者名称
    unsigned short eatfreq; // 服药频率（间隔天数）
    QDateTime starttime; // 开始时间
    // 使用合适的容器存放服药时间和数量
    QVector<QTime> eattimes;    // 服药时间列表
    QVector<unsigned short> eatcounts; // 每次服药数量列表
    QDateTime lasteat;  //上次吃的时间
};

#endif // MED_DETAILED_INFO_H
