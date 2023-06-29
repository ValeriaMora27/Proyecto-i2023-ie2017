/**
 * @file basedatos.cpp
 * @brief Implemetación de la clase BaseDatos.
 */
#include "basedatos.h"

// Constructor por defecto

BaseDatos::BaseDatos(){}

// Setters

/**
 * @brief setNombreDb establece el nombre de la base de datos.
 * @param newNombreDb El nombre de la base de datos.
 */
void BaseDatos::setNombreDb(QString& newNombreDb){
    nombreDb = newNombreDb;
}

// Getters 

/**
 * @brief getNombreDb devuelve el nombre de la base de datos.
 * @return El nombre de la base de datos.
 */
QString BaseDatos::getNombreDb(){
    return nombreDb;
}

// Métodos

/**
 * @brief crearBase crea y abre la base de datos utilizando el nombre especificado.
 * @return true si la base de datos se crea y abre correctamente, false en caso contrario.
 */
bool BaseDatos::crearBase(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(getNombreDb());

    return db.open();
}

/**
 * @brief cerrarBase cierra la conexión con la base de datos.
 */
void BaseDatos::cerrarBase(){
    db.close();
}

/**
 * @brief crearTabla
 * 
 * @param q Permite crear los campos de la tabla
 */
// void BaseDatos::crearTabla(QString q){
//     QSqlQuery query(q);
//     if (!query.isActive()){
//         qDebug("Error de conexión");
//     }
// }

bool BaseDatos::crearTabla(const QString& sqlStatement) {
    QSqlQuery query(db);
    if (query.exec(sqlStatement)) {
        // Table creation successful
        return true;
    } else {
        // Table creation failed
        qDebug() << "Error creating table:" << query.lastError().text();
        return false;
    }
}



