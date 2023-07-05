/**
 * @file solicitudes.h
 * @brief Definición de la clase Solicitud.
 */

#ifndef SOLICITUDES_H
#define SOLICITUDES_H

#include <QString>

/**
 * @brief La clase Solicitud representa una solicitud de un evento.
 */
class Solicitud
{
private:
    QString correo;     /**< El correo del solicitante. */
    QString nombre;     /**< El nombre del que hace la solicitud. */
    QString telefono;   /**< El teléfono de contacto. */
    QString tipoEvento; /**< El tipo de evento. */
    double presupuesto; /**< El presupuesto para realizar el evento. */
    QString detalles;   /**< Detalles del evento a realizar. */

public:
    /**
     * @brief Constructor por defecto de la clase Solicitud.
     */
    Solicitud();

    /**
     * @brief Establece el correo del solicitante.
     * @param newCorreo El nuevo correo del solicitante.
     */
    void setCorreo(QString &newCorreo);

    /**
     * @brief Establece el nombre del que hace la solicitud.
     * @param newNombre El nuevo nombre del que hace la solicitud.
     */
    void setNombre(QString &newNombre);

    /**
     * @brief Establece el teléfono de contacto.
     * @param newTelefono El nuevo teléfono de contacto.
     */
    void setTelefono(QString &newTelefono);

    /**
     * @brief Establece el tipo de evento.
     * @param newTipoEvento El nuevo tipo de evento.
     */
    void setTipoEvento(QString &newTipoEvento);

    /**
     * @brief Establece el presupuesto para realizar el evento.
     * @param newPresupuesto El nuevo presupuesto para realizar el evento.
     */
    void setPresupuesto(double newPresupuesto);

    /**
     * @brief Establece los detalles del evento a realizar.
     * @param newDetalles Los nuevos detalles del evento a realizar.
     */
    void setDetalles(QString &newDetalles);

    /**
     * @brief Obtiene el correo del solicitante.
     * @return El correo del solicitante.
     */
    QString getCorreo() const;

    /**
     * @brief Obtiene el nombre del que hace la solicitud.
     * @return El nombre del que hace la solicitud.
     */
    QString getNombre() const;

    /**
     * @brief Obtiene el teléfono de contacto.
     * @return El teléfono de contacto.
     */
    QString getTelefono() const;

    /**
     * @brief Obtiene el tipo de evento.
     * @return El tipo de evento.
     */
    QString getTipoEvento() const;

    /**
     * @brief Obtiene el presupuesto para realizar el evento.
     * @return El presupuesto para realizar el evento.
     */
    double getPresupuesto() const;

    /**
     * @brief Obtiene los detalles del evento a realizar.
     * @return Los detalles del evento a realizar.
     */
    QString getDetalles() const;
};

#endif // SOLICITUDES_H
