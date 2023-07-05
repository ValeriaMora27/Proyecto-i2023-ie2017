/**
 * @file evento.cpp
 * @brief Implementación de la calse Evento
 */
#include <QFile>
#include "evento.h"
#include "enums.h"

// Constructor por defecto

/*
Evento::Evento(const QString& nombre,
               const QString& cliente,
               const QDateTime& fecha,
               const QDateTime& horaInicio,
               const QDateTime& horaFin,
               const QString& tipoEvento,
               const QString& dj,
               const QString& catering,
               const QString& comparsa,
               const float& costo)
    : nombre(nombre),
    cliente(cliente),
    fecha(fecha),
    horaInicio(horaInicio),
    horaFin(horaFin),
    tipoEvento(tipoEvento),
    dj(dj),
    catering(catering),
    comparsa(comparsa),
    costo(costo){}
*/
Evento::Evento() {}

// Setters

/**
 * @brief setNombre establece el nombre del evento.
 * @param newNombre El nombre del evento.
 */
void Evento::setNombre(QString &newNombre)
{
    nombre = newNombre;
}

/**
 * @brief setCliente establece el cliente asociado con el evento.
 * @param newCliente El cliente asociado con el evento.
 */
void Evento::setCliente(QString &newCliente)
{
    cliente = newCliente;
}

/**
 * @brief setContacto establece el contacto del cliente asociado con el evento.
 * @param newContacto El cliente asociado con el evento.
 */
void Evento::setContacto(QString &newContacto)
{
    contacto = newContacto;
}

/**
 * @brief setLugar establece el lugar asociado con el evento.
 * @param newLugar El lugar asociado con el evento.
 */
void Evento::setLugar(QString &newLugar)
{
    lugar = newLugar;
}

/**
 * @brief setFecha establece la fecha del evento.
 * @param newFecha La fecha del evento.
 */
void Evento::setFecha(QDateTime &newFecha)
{
    fecha = newFecha;
}

/**
 * @brief setHoraInicio establece la hora de inicio del evento.
 * @param newHoraInicio La hora de inicio del evento.
 */
void Evento::setHoraInicio(QDateTime &newHoraInicio)
{
    horaInicio = newHoraInicio;
}

/**
 * @brief setHoraFin establece la hora de finalización del evento.
 * @param newHoraFin La hora de finalización del evento.
 */
void Evento::setHoraFin(QDateTime &newHoraFin)
{
    horaFin = newHoraFin;
}

/**
 * @brief setTipoEvento establece el tipo de evento.
 * @param newTipoEvento El tipo de evento.
 */
void Evento::setTipoEvento(QString &newTipoEvento)
{
    tipoEvento = newTipoEvento;
}

/**
 * @brief setDj establece el dj del evento.
 * @param newDj El Dj del evento.
 */
void Evento::setDj(QString &newDj)
{
    dj = newDj;
}

/**
 * @brief setCatering establece el catering del evento.
 * @param newCatering El catering del evento.
 */
void Evento::setCatering(QString &newCatering)
{
    catering = newCatering;
}

/**
 * @brief setComparsa establece la comparsa del evento.
 * @param newComparsa La comparsa del evento.
 */
void Evento::setComparsa(QString &newComparsa)
{
    comparsa = newComparsa;
}

/**
 * @brief setPresupuesto establece el presupuesto del evento.
 * @param newPresupuesto El presupuesto del evento.
 */
void Evento::setPresupuesto(float newPresupuesto)
{
    presupuesto = newPresupuesto;
}

// Getters

/**
 * @brief getNombre devuelve el nombre del evento.
 * @return El nombre del evento.
 */
QString Evento::getNombre() const
{
    return nombre;
}

/**
 * @brief getCliente devuelve el cliente asociado con el evento.
 * @return El cliente asociado con el evento.
 */
QString Evento::getCliente() const
{
    return cliente;
}

/**
 * @brief getContacto devuelve el telefono asociado con el cliente.
 * @return El contacto asociado con el evento.
 */
QString Evento::getContacto() const
{
    return contacto;
}

/**
 * @brief getLugar devuelve el lugar asociado con el evento.
 * @return El lugar asociado con el evento.
 */
QString Evento::getLugar() const
{
    return lugar;
}

/**
 * @brief getFecha devuelve la fecha del evento.
 * @return La fecha del evento.
 */
QDateTime Evento::getFecha() const
{
    return fecha;
}

/**
 * @brief getHoraInicio devuelve la hora de inicio del evento.
 * @return La hora de inicio del evento.
 */
QDateTime Evento::getHoraInicio() const
{
    return horaInicio;
}

/**
 * @brief getHoraFin devuelve la hora de finalización del evento.
 * @return La hora de finalización del evento.
 */
QDateTime Evento::getHoraFin() const
{
    return horaFin;
}

/**
 * @brief getTipoEvento devuelve el tipo de evento.
 * @return El tipo de evento.
 */
QString Evento::getTipoEvento() const
{
    return tipoEvento;
}

/**
 * @brief getDj devuelve el dj del evento.
 * @return El dj del evento.
 */
QString Evento::getDj() const
{
    return dj;
}

/**
 * @brief getCatering devuelve el catering del evento.
 * @return El catering del evento.
 */
QString Evento::getCatering() const
{
    return catering;
}

/**
 * @brief getComparsa devuelve la comparsa del evento.
 * @return La comparsa del evento.
 */
QString Evento::getComparsa() const
{
    return comparsa;
}

/**
 * @brief getCosto devuelve el costo del evento.
 * @return El costo del evento.
 */
float Evento::getPresupuesto() const
{
    return presupuesto;
}

// Métodos
