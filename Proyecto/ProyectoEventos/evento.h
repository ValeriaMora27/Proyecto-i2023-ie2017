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
    QString nombre; /**< El nombre del evento. */
    QString cliente; /**< El cliente asociado con el evento. */
    QDateTime fecha; /**< La fecha del evento. */
    QDateTime horaInicio; /**< La hora de inicio del evento. */
    QDateTime horaFin; /**< La hora de finalización del evento. */
    QString tipoEvento; /**< El tipo de evento. */
    QString dj; /**< Dj del evento. */
    QString catering; /**< Catering del evento. */
    QString comparsa; /**< Comparsa del evento. */
    float costo; /**< El costo del evento. */

public:
    // Constructor

    /**
     * @brief Constructor de la clase Evento.
     *
     * @param nombre El nombre del usuario.
     * @param cliente El cliente asociado al evento
     * @param fecha La fecha en la que se realizará el evento
     * @param horaInicio La hora de inicio del evento
     * @param horaFin La hora a la que termina el evento
     * @param dj Dj del evento
     * @param catering Catering del evento
     * @param comparsa Comparsa del evento.
     * @param tipoEvento El tipo de evento (fiesta, baile, graduación)
     * @param costo El precio a pagar por el evento
     */
    /*
    Evento(const QString& nombre,
           const QString& cliente,
           const QDateTime& fecha,
           const QDateTime& horaInicio,
           const QDateTime& horaFin,
           const QString& tipoEvento,
           const QString& dj,
           const QString& catering,
           const QString& comparsa,
           const float& costo);
    */

    // Constructor por defecto

    Evento();

    // Setters

    /**
     * @brief setNombre establece el nombre del evento.
     * @param newNombre El nombre del evento.
     */
    void setNombre(QString& newNombre);

    /**
     * @brief setCliente establece el cliente asociado con el evento.
     * @param newCliente El cliente asociado con el evento.
     */
    void setCliente(QString& newCliente);

    /**
     * @brief setFecha establece la fecha del evento.
     * @param newFecha La fecha del evento.
     */
    void setFecha(QDateTime& newFecha);

    /**
     * @brief setHoraInicio establece la hora de inicio del evento.
     * @param newHoraInicio La hora de inicio del evento.
     */
    void setHoraInicio(QDateTime& newHoraInicio);

    /**
     * @brief setHoraFin establece la hora de finalización del evento.
     * @param newHoraFin La hora de finalización del evento.
     */
    void setHoraFin(QDateTime& newHoraFin);

    /**
     * @brief setTipoEvento establece el tipo de evento.
     * @param newTipoEvento El tipo de evento.
     */
    void setTipoEvento(QString& newTipoEvento);

    /**
     * @brief setDj establece el dj del evento.
     * @param newDj El Dj del evento.
     */
    void setDj(QString& newDj);

    /**
     * @brief setCatering establece el catering del evento.
     * @param newCatering El catering del evento.
     */
    void setCatering(QString& newCatering);

    /**
     * @brief setComparsa establece la comparsa del evento.
     * @param newComparsa La comparsa del evento.
     */
    void setComparsa(QString& newComparsa);

    /**
     * @brief setCosto establece el costo del evento.
     * @param newCosto El costo del evento.
     */
    void setCosto(float newCosto);


    // Getters

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
     * @brief getCosto devuelve el costo del evento.
     * @return El costo del evento.
     */
    float getCosto() const;
};

#endif // EVENTO_H


