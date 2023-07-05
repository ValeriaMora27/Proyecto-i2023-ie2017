#ifndef ESTADISTICAS_H
#define ESTADISTICAS_H

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QDate>
#include "enums.h"

/**
 * @brief Obtiene el número de eventos en el archivo de eventos.
 * @return El número de eventos como una cadena de texto.
 */
QString estadisticaCantidadEventos();

/**
 * @brief Calcula los ingresos previstos de todos los eventos.
 * @return Los ingresos previstos como una cadena de texto.
 */
QString estIngresosPrevistos();

/**
 * @brief Obtiene el número de solicitudes pendientes en el archivo de solicitudes.
 * @return El número de solicitudes pendientes como una cadena de texto.
 */
QString estadisticaSolicitudesPendientes();

/**
 * @brief Obtiene los tres eventos próximos.
 * @return Una lista de cadenas de texto que contiene los nombres y fechas de los eventos próximos.
 */
QStringList obtenerEventosProximos();

/**
 * @brief Obtiene el evento con la mayor recaudación que tenga una fecha anterior a la fecha actual.
 * @return Una lista de cadenas de texto que contiene el nombre del evento, nombre del cliente, fecha y monto de recaudación.
 */
QStringList obtenerEventoMayorRecaudacion();


#endif // ESTADISTICAS_H
