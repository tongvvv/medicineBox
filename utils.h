#ifndef UTILS_H
#define UTILS_H

#include <QString>
#include <QDateTime>

#define  NormalReturn     1  //正常放入药物
#define  NoReturn         2  //没有放入药物
#define  WrongReturn      3  //放错药物
#define  RecognitionError 4  //识别错误和无法识别

enum class Action{STORE, FETCH};

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
    int        med_number; //药品唯一编号
    QString    med_name;
    int        num;  //取走的药品数量
    QString    unit; //这个是数量的单位
    int        box;
};

enum class GlobalFontSize {SMALL, MEDIUM, BIG};

#endif // UTILS_H
