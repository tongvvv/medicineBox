#ifndef DATA_STRUCTS_H
#define DATA_STRUCTS_H
#include <QObject>

//关于业务的数据结构, 暂时待定, 等我搭完界面再说吧
//这个全局实例作为应用数据的管理中心，应该和下位机交互，和网络交互，和界面交互。
class data_manager : public QObject
{
    //Q_OBJECT
private:
    explicit data_manager(QObject *parent = nullptr);
    data_manager(const data_manager&) = delete;
    data_manager& operator=(const data_manager&) = delete;

public:
    // 获取全局唯一实例（线程安全）
    static data_manager* instance();

signals:

};


#endif // DATA_STRUCTS_H
