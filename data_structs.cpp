#include "data_structs.h"

data_manager::data_manager(QObject *parent)
    : QObject(parent)
{}

data_manager* data_manager::instance()
{
    static data_manager data;

    return &data;
}
