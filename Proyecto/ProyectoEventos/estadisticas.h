#ifndef ESTADISTICAS_H
#define ESTADISTICAS_H

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QDate>
#include "enums.h"

QString estadisticaCantidadEventos();
QString estIngresosPrevistos();
QString estadisticaSolicitudesPendientes();
QStringList obtenerEventosProximos();
QStringList obtenerEventoMayorRecaudacion();


#endif // ESTADISTICAS_H
