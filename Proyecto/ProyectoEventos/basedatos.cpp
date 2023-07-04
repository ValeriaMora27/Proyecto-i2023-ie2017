/**
 * @file basedatos.cpp
 * @brief Implemetación de la clase BaseDatos.
 */
#include "basedatos.h"
#include "enums.h"

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
 * @param sqlStatement Permite crear los campos de la tabla
 */
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

/**
 * @brief agregarEvento añade un nuevo evento a la base de datos.
 * @param nombreEvento El nombre del evento.
 * @param fechaEvento La fecha del evento.
 * @param horaInicio La hora de inicio del evento.
 * @return true si se agregó correctamente, false en caso contrario.
 */
bool BaseDatos::agregarEvento(const QString& nombreEvento,
                              const QString& cliente,
                              const QDate& fechaEvento,
                              const QTime& horaInicio,
                              const QTime& horaFinal,
                              const QString& tipoEvento,
                              const QString& dj,
                              const QString& catering,
                              const QString& comparsa,
                              const QString& presupuesto) {
    if (!db.isOpen()) {
        qDebug() << "Error: La base de datos no está abierta.";
        return false;
    }

    QSqlQuery query(db);
    query.prepare("INSERT INTO eventos "
                  "(Nombre, Cliente, Fecha, HoraInicio, HoraFinal, TipoEvento, Dj, Catering, Comparsa, Presupuesto) "
                  "VALUES (:Nombre, :Cliente, :Fecha, :HoraInicio, :HoraFinal, :TipoEvento, :Dj, :Catering, :Comparsa, :Presupuesto);");
    query.bindValue(":Nombre", nombreEvento);
    query.bindValue(":Cliente", cliente);
    query.bindValue(":Fecha", fechaEvento);
    query.bindValue(":HoraInicio", horaInicio);
    query.bindValue(":HoraFinal", horaFinal);
    query.bindValue(":TipoEvento", tipoEvento);
    query.bindValue(":Dj", dj);
    query.bindValue(":Catering", catering);
    query.bindValue(":Comparsa", comparsa);
    query.bindValue(":Presupuesto", presupuesto);

    if (query.exec()) {
        // Registro agregado correctamente
        return true;
    } else {
        // Error al agregar el registro
        qDebug() << "Error al agregar el evento:" << query.lastError().text();
        return false;
    }
}


/**
* @brief obtenerEvento permite obtener todos los datos de la base de datos
* @return La lista de eventos
*/
QList<Evento> BaseDatos::obtenerEventos() const {
    QList<Evento> eventos;

    if (!db.isOpen()) {
        qDebug() << "Error: La base de datos no está abierta.";
            return eventos;
    }

    QSqlQuery query(db);
    query.prepare("SELECT * FROM eventos;");

    if (query.exec()) {
        while (query.next()) {
            QString nombre = query.value(numNombre).toString();
            QString cliente = query.value(numCliente).toString();
            QDateTime fecha = query.value(numFecha).toDateTime();
            QDateTime horaInicio = query.value(numHoraInicio).toDateTime();
            QDateTime horaFin = query.value(numHoraFin).toDateTime();
            QString tipoEvento = query.value(numTipoEvento).toString();
            QString dj = query.value(numDj).toString();
            QString catering = query.value(numCatering).toString();
            QString comparsa = query.value(numComparsa).toString();
            float costo = query.value(numCosto).toFloat();

            Evento evento; // Utilizar constructor por defecto

            evento.setNombre(nombre);
            evento.setCliente(cliente);
            evento.setFecha(fecha);
            evento.setHoraInicio(horaInicio);
            evento.setHoraFin(horaFin);
            evento.setTipoEvento(tipoEvento);
            evento.setDj(dj);
            evento.setCatering(catering);
            evento.setComparsa(comparsa);
            evento.setCosto(costo); // Utilizar método setter correspondiente

            eventos.append(evento);
        }
    } else {
        qDebug() << "Error al obtener eventos:" << query.lastError().text();
    }

    return eventos;
}








