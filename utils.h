#ifndef UTILS_H
#define UTILS_H

#include "qlocale.h"
#include <QString>
#include <QDateTime>

#define  NormalReturn     1  //正常放入药物
#define  NoReturn         2  //没有放入药物
#define  WrongReturn      3  //放错药物
#define  RecognitionError 4  //识别错误和无法识别

enum class Action{STORE=1, FETCH=2};

#define ACTION_TO_STRING(action) \
    [](Action a) -> QString  \
    { \
        switch(a) \
        { \
            case Action::STORE: return "存药"; \
            case Action::FETCH: return "取药"; \
            default: return "未知动作"; \
        } \
    }(action)


struct table_content
{
    QDateTime  datetime;
    QString    person_name;
    Action     action;
    QString    med_name;
    int        num;  //取走的药品数量
    int        box; //药盒编号
};

enum class GlobalFontSize {SMALL, MEDIUM, BIG};

QString getFormattedDateTime(); //为了得到主界面的格式化后的时间

enum class info_state {SAME, NEW, MOD}; //数据一致，新的数据，数据不一致

QString ocr_name_match(QString str); //ocr结果和药名匹配

#endif // UTILS_H
