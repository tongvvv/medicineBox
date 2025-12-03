#include "utils.h"

QString getFormattedDateTime() {
    // 获取当前日期时间
    QDateTime currentDateTime = QDateTime::currentDateTime();

    // 格式化日期部分 (年-月-日)
    QString datePart = currentDateTime.toString("yyyy-MM-dd");

    // 获取星期几（中文）
    QLocale chineseLocale(QLocale::Chinese);
    QString dayOfWeek = chineseLocale.dayName(currentDateTime.date().dayOfWeek(), QLocale::LongFormat);

    // 格式化时间部分 (小时：分钟)
    QString timePart = currentDateTime.toString("hh：mm"); // 注意：使用全角冒号

    // 组合所有部分
    return datePart + " " + dayOfWeek + " " + timePart;
}

//ocr结果和药名匹配
//暂时还没有完善，只是留个接口
QString ocr_name_match(QString str)
{
    return str;
}
