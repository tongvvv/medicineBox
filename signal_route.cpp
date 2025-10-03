#include "signal_route.h"

signal_route::signal_route(QObject *parent)
    : QObject(parent)
{
}

signal_route* signal_route::instance()
{
    static signal_route instance;
    return &instance;
}
