#ifndef SIGNAL_ROUTE_H
#define SIGNAL_ROUTE_H

#include <QObject>

/*
    中央信号路由器，采用中介者模式实现单例。
    主界面在创建子界面时通过全局实例访问，子界面通过中介对象发送信号给主界面，实现各模块低耦合。
*/

class signal_route : public QObject
{
    Q_OBJECT
private:
    explicit signal_route(QObject *parent = nullptr);
    signal_route(const signal_route&) = delete;
    signal_route& operator=(const signal_route&) = delete;

public:
    // 获取全局唯一实例（线程安全）
    static signal_route* instance();

signals:
    // 切换页面信号
    void switchToPage(const QString &pageName);

    // 可添加其他业务需求信号
};

#endif // SIGNAL_ROUTE_H
