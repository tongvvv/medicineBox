#ifndef DATA_STRUCTS_H
#define DATA_STRUCTS_H
#include <QObject>
#include "utils.h"
#include <QVariant>
#include "med_detailed_info.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QReadWriteLock>

//这个全局实例作为应用数据的管理中心，应该和下位机交互，和网络交互，和界面交互。
//里面会封装大部分数据库增删改查的接口，操作本地小数据库速度很快，所以暂时先不放在子线程里。
class data_manager : public QObject
{
    Q_OBJECT
private:
    explicit data_manager(QObject *parent = nullptr);
    data_manager(const data_manager&) = delete;
    data_manager& operator=(const data_manager&) = delete;

public:
    // 获取全局唯一实例（线程安全）
    static data_manager* instance();

    void setFontSize(GlobalFontSize size);

    bool init(void); //初始化数据库

    int get_empty_box();

    //设置数据
    void setData(const QString& key, const QVariant& value);

    // 获取数据，如果没找到，返回defaultValue
    QVariant getData(const QString& key, const QVariant& defaultValue = QVariant()) const;

    // 删除数据
    void removeData(const QString& key);

    void store_medcine(); //存药步骤里面最后会调用这个

    void setplan();   //用于卡片的修改用药计划按钮

    QVector<med_detailed_info*> getAllMed(); //得到所有的已存入的药品

    med_detailed_info* getOneMed(int no); //得到一个已存入的药品信息，no 代表药盒编号

    void update_medicine(const med_detailed_info& info); //取药的时候更新药品信息用这个

    void delete_medicine(const med_detailed_info& info);
    bool addrecord(const QVariantMap &recordData);

    QVector<med_detailed_info*> getInformedMed();
    med_detailed_info* getOneInformedMed(int no);

    QVector<med_detailed_info *> getplannedMed();
signals:
    void fontSize_changed(GlobalFontSize size);

private:
    GlobalFontSize fontSize;
    mutable QReadWriteLock m_dataLock;  // 数据读写锁
    QMap<QString, QVariant> m_dataMap;  // 内存数据存储

    bool isFirstRun();
    bool createTables();
};


#endif // DATA_STRUCTS_H
