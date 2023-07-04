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
    QString correo; /**< El correo del solicitante. */
    QString nombre; /**< El nombre del que hace la solicitud. */
    QString telefono; /**< El teléfono de contacto. */
    QString tipoEvento; /**< El tipo de evento. */
    double presupuesto; /**< El presupuesto para realizar el evento. */
    QString detalles;  /**< Detalles del evento a realizar. */

public:
    Solicitud();

    void setCorreo(QString& newCorreo);
    void setNombre(QString& newNombre);
    void setTelefono(QString& newTelefono);
    void setTipoEvento(QString& newTipoEvento);
    void setPresupuesto(double newPresupuesto);
    void setDetalles(QString& newDetalles);

    QString getCorreo() const;
    QString getNombre() const;
    QString getTelefono() const;
    QString getTipoEvento() const;
    double getPresupuesto() const;
    QString getDetalles() const;
};

#endif // SOLICITUDES_H
