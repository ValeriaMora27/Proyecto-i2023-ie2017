/**
 * @file evento.h
 * @brief Definición de la clase Evento.
 */

#ifndef EVENTO_H
#define EVENTO_H

#include <QString>
#include <QDateTime>

/**
 * @brief La clase Evento representa un evento.
 */
class Evento
{
private:
    QString nombre;       /**< El nombre del evento. */
    QString cliente;      /**< El cliente asociado con el evento. */
    QString contacto;     /**< Teléfono del cliente asociado con el evento. */
    QString lugar;        /**< El lugar donde se realiza el evento. */
    QDateTime fecha;      /**< La fecha del evento. */
    QDateTime horaInicio; /**< La hora de inicio del evento. */
    QDateTime horaFin;    /**< La hora de finalización del evento. */
    QString tipoEvento;   /**< El tipo de evento. */
    QString dj;           /**< Dj del evento. */
    QString catering;     /**< Catering del evento. */
    QString comparsa;     /**< Comparsa del evento. */
    float presupuesto;    /**< El presupuesto del evento. */

public:
    /**
     * @brief Constructor de la clase Evento.
     *
     */
    Evento();

    /**
     * @brief setNombre establece el nombre del evento.
     * @param newNombre El nombre del evento.
     */
    void setNombre(QString &newNombre);

    /**
     * @brief setCliente establece el cliente asociado con el evento.
     * @param newCliente El cliente asociado con el evento.
     */
    void setCliente(QString &newCliente);

    /**
     * @brief setContacto establece el contacto del cliente asociado con el evento.
     * @param newContacto El cliente asociado con el evento.
     */
    void setContacto(QString &newContacto);

    /**
     * @brief setLugar establece el lugar asociado con el evento.
     * @param newLugar El lugar asociado con el evento.
     */
    void setLugar(QString &newLugar);

    /**
     * @brief setFecha establece la fecha del evento.
     * @param newFecha La fecha del evento.
     */
    void setFecha(QDateTime &newFecha);

    /**
     * @brief setHoraInicio establece la hora de inicio del evento.
     * @param newHoraInicio La hora de inicio del evento.
     */
    void setHoraInicio(QDateTime &newHoraInicio);

    /**
     * @brief setHoraFin establece la hora de finalización del evento.
     * @param newHoraFin La hora de finalización del evento.
     */
    void setHoraFin(QDateTime &newHoraFin);

    /**
     * @brief setTipoEvento establece el tipo de evento.
     * @param newTipoEvento El tipo de evento.
     */
    void setTipoEvento(QString &newTipoEvento);

    /**
     * @brief setDj establece el dj del evento.
     * @param newDj El Dj del evento.
     */
    void setDj(QString &newDj);

    /**
     * @brief setCatering establece el catering del evento.
     * @param newCatering El catering del evento.
     */
    void setCatering(QString &newCatering);

    /**
     * @brief setComparsa establece la comparsa del evento.
     * @param newComparsa La comparsa del evento.
     */
    void setComparsa(QString &newComparsa);

    /**
     * @brief setPresupuesto establece el presupuesto para el evento.
     * @param newPresupuesto El presupuesto del evento.
     */
    void setPresupuesto(float newPresupuesto);

    /**
     * @brief getNombre devuelve el nombre del evento.
     * @return El nombre del evento.
     */
    QString getNombre() const;

    /**
     * @brief getCliente devuelve el cliente asociado con el evento.
     * @return El cliente asociado con el evento.
     */
    QString getCliente() const;

    /**
     * @brief getContacto devuelve el telefono asociado con el cliente.
     * @return El contacto asociado con el evento.
     */
    QString getContacto() const;

    /**
     * @brief getLugar devuelve el lugar asociado con el evento.
     * @return El lugar asociado con el evento.
     */
    QString getLugar() const;

    /**
     * @brief getFecha devuelve la fecha del evento.
     * @return La fecha del evento.
     */
    QDateTime getFecha() const;

    /**
     * @brief getHoraInicio devuelve la hora de inicio del evento.
     * @return La hora de inicio del evento.
     */
    QDateTime getHoraInicio() const;

    /**
     * @brief getHoraFin devuelve la hora de finalización del evento.
     * @return La hora de finalización del evento.
     */
    QDateTime getHoraFin() const;

    /**
     * @brief getTipoEvento devuelve el tipo de evento.
     * @return El tipo de evento.
     */
    QString getTipoEvento() const;

    /**
     * @brief getDj devuelve el dj del evento.
     * @return El dj del evento.
     */
    QString getDj() const;

    /**
     * @brief getCatering devuelve el catering del evento.
     * @return El catering del evento.
     */
    QString getCatering() const;

    /**
     * @brief getComparsa devuelve la comparsa del evento.
     * @return La comparsa del evento.
     */
    QString getComparsa() const;

    /**
     * @brief getPresupuesto devuelve el presupuesto del evento.
     * @return El presupuesto del evento.
     */
    float getPresupuesto() const;

    // Métodos
};

#endif // EVENTO_H
