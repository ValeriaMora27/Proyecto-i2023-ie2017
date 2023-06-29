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

#include <QDebug>
/**
 * @brief La clase BaseDatos proporciona funcionalidad para crear y administrar una base de datos.
 */
class BaseDatos
{
private:
    QString nombreDb; /**< El nombre del archivo de la base de datos. */
    QSqlDatabase db; /**< La base de datos. */

public:
    // Constructor poe defecto

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
     * @param q Permite crear los campos de la tabla
     */
    bool crearTabla(const QString& sqlStatement);
};

#endif // BASEDATOS_H

