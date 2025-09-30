#ifndef SIGNAL_ROUTE_H
#define SIGNAL_ROUTE_H

#include <QObject>

/*
    这是中央信号路由器 , 采用中介者模式, 主界面在创建子界面时把这个对象传递进去, 子界面通过中介对象发送信号给主界面, 以实现各模块的低耦合.
*/

class signal_route : public QObject
{
    Q_OBJECT
public:
    explicit signal_route(QObject *parent = nullptr);

signals:
    // 切换页面信号
    void switchToPage(const QString &pageName);

    //下面也可以添加各种其他信号, 总之看后续业务需求.
};

#endif // SIGNAL_ROUTE_H
