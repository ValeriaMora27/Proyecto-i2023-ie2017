/**
 * @file evento.cpp
 * @brief Implementación de la calse Evento
 */
#include "evento.h"


// Constructor
/**
 * @brief Constructor de la clase Evento.
 *
 * @param nombre El nombre del usuario.
 * @param cliente El cliente asociado al evento
 * @param fecha La fecha en la que se realizará el evento
 * @param horaInicio La hora de inicio del evento
 * @param horaFin La hora a la que termina el evento
 * @param tipoEvento El tipo de evento (fiesta, baile, graduación)
 * @param serviciosExtra Servicios adicionales al evento
 * @param costo El precio a pagar por el evento
 */
Evento::Evento(const QString& nombre,
               const QString& cliente,
               const QDateTime& fecha,
               const QDateTime& horaInicio,
               const QDateTime& horaFin,
               const QString& tipoEvento,
               const QString& serviciosExtra,
               const float& costo)
    : nombre(nombre), 
    cliente(cliente),
    fecha(fecha),
    horaInicio(horaInicio),
    horaFin(horaFin),
    tipoEvento(tipoEvento),
    serviciosExtra(serviciosExtra),
    costo(costo){}

// Setters

/**
 * @brief setNombre establece el nombre del evento.
 * @param newNombre El nombre del evento.
 */
void Evento::setNombre(QString& newNombre) {
    nombre = newNombre;
}

/**
 * @brief setCliente establece el cliente asociado con el evento.
 * @param newCliente El cliente asociado con el evento.
 */
void Evento::setCliente(QString& newCliente) {
    cliente = newCliente;
}

/**
 * @brief setFecha establece la fecha del evento.
 * @param newFecha La fecha del evento.
 */
void Evento::setFecha(QDateTime& newFecha) {
    fecha = newFecha;
}

/**
 * @brief setHoraInicio establece la hora de inicio del evento.
 * @param newHoraInicio La hora de inicio del evento.
 */
void Evento::setHoraInicio(QDateTime& newHoraInicio) {
    horaInicio = newHoraInicio;
}

/**
 * @brief setHoraFin establece la hora de finalización del evento.
 * @param newHoraFin La hora de finalización del evento.
 */
void Evento::setHoraFin(QDateTime& newHoraFin) {
    horaFin = newHoraFin;
}

/**
 * @brief setTipoEvento establece el tipo de evento.
 * @param newTipoEvento El tipo de evento.
 */
void Evento::setTipoEvento(QString& newTipoEvento) {
    tipoEvento = newTipoEvento;
}

/**
 * @brief setServiciosExtra establece los servicios adicionales del evento.
 * @param newServiciosExtra Los servicios adicionales del evento.
 */
void Evento::setServiciosExtra(QString& newServiciosExtra) {
    serviciosExtra = newServiciosExtra;
}

/**
 * @brief setCosto establece el costo del evento.
 * @param newCosto El costo del evento.
 */
void Evento::setCosto(float newCosto) {
    costo = newCosto;
}

// Getters

/**
 * @brief getNombre devuelve el nombre del evento.
 * @return El nombre del evento.
 */
QString Evento::getNombre() const {
    return nombre;
}

/**
 * @brief getCliente devuelve el cliente asociado con el evento.
 * @return El cliente asociado con el evento.
 */
QString Evento::getCliente() const {
    return cliente;
}

/**
 * @brief getFecha devuelve la fecha del evento.
 * @return La fecha del evento.
 */
QDateTime Evento::getFecha() const {
    return fecha;
}

/**
 * @brief getHoraInicio devuelve la hora de inicio del evento.
 * @return La hora de inicio del evento.
 */
QDateTime Evento::getHoraInicio() const {
    return horaInicio;
}

/**
 * @brief getHoraFin devuelve la hora de finalización del evento.
 * @return La hora de finalización del evento.
 */
QDateTime Evento::getHoraFin() const {
    return horaFin;
}

/**
 * @brief getTipoEvento devuelve el tipo de evento.
 * @return El tipo de evento.
 */
QString Evento::getTipoEvento() const {
    return tipoEvento;
}

/**
 * @brief getServiciosExtra devuelve los servicios adicionales del evento.
 * @return Los servicios adicionales del evento.
 */
QString Evento::getServiciosExtra() const {
    return serviciosExtra;
}

/**
 * @brief getCosto devuelve el costo del evento.
 * @return El costo del evento.
 */
float Evento::getCosto() const {
    return costo;
}
