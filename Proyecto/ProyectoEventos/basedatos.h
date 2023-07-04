/**
 * @file basedatos.h
 * @brief Definición de la clase BaseDatos.
 */
#ifndef BASEDATOS_H
#define BASEDATOS_H

#include <QString>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDateTime>
#include <QDebug>
#include "evento.h"
/**
 * @brief La clase BaseDatos proporciona funcionalidad para crear y administrar una base de datos.
 */
class BaseDatos
{
private:
    QString nombreDb; /**< El nombre del archivo de la base de datos. */
    QSqlDatabase db; /**< La base de datos. */

public:
    // Constructor por defecto

    BaseDatos();

    // Setters

    /**
     * @brief setNombreDb establece el nombre de la base de datos.
     * @param newNombreDb El nombre de la base de datos.
     */
    void setNombreDb(QString& newNombreDb);

    // Getters

    /**
     * @brief getNombreDb devuelve el nombre de la base de datos.
     * @return El nombre de la base de datos.
     */
    QString getNombreDb();

    // Métodos

    /**
     * @brief crearBase crea y abre la base de datos utilizando el nombre especificado.
     * @return true si la base de datos se crea y abre correctamente, false en caso contrario.
     */
    bool crearBase();

    /**
     * @brief cerrarBase cierra la conexión con la base de datos.
     */
    void cerrarBase();

    /**
     * @brief crearTabla
     * 
     * @param sqlStatement Permite crear los campos de la tabla
     */
    bool crearTabla(const QString& sqlStatement);

    /**
     * @brief agregarEvento añade un nuevo evento a la base de datos.
     * @param nombreEvento El nombre del evento.
     * @param fechaEvento La fecha del evento.
     * @param horaInicio La hora de inicio del evento.
     * @return true si se agregó correctamente, false en caso contrario.
     */
    bool agregarEvento(const QString& nombreEvento,
                       const QString& cliente,
                       const QDate& fechaEvento, 
                       const QTime& horaInicio,
                       const QTime& horaFinal,
                       const QString& tipoEvento,
                       const QString& dj,
                       const QString& catering,
                       const QString& comparsa,
                       const QString& presupuesto);

    /**
     * @brief obtenerEvento permite obtener todos los datos de la base de datos
     * @return La lista de eventos
     */
    QList<Evento> obtenerEventos() const;

};

#endif // BASEDATOS_H

