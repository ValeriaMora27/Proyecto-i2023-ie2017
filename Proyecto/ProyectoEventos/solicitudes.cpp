/**
 * @file solicitudes.cpp
 * @brief Implementación de la clase Solicitud.
 */

#include "solicitudes.h"

Solicitud::Solicitud()
{

}

/* Establecer datos */
void Solicitud::setCorreo(QString& newCorreo) {
    correo = newCorreo;
}

void Solicitud::setNombre(QString& newNombre) {
    nombre = newNombre;
}


void Solicitud::setTelefono(QString& newTelefono) {
    telefono = newTelefono;
}

void Solicitud::setTipoEvento(QString& newTipoEvento) {
    tipoEvento = newTipoEvento;
}

void Solicitud::setPresupuesto(double newPresupuesto) {
    presupuesto = newPresupuesto;
}

void Solicitud::setDetalles(QString& newDetalles) {
    detalles = newDetalles;
}


/* Obtener datos */
QString Solicitud::getCorreo() const {
    return correo;
}

QString Solicitud::getNombre() const {
    return nombre;
}


QString Solicitud::getTelefono() const {
    return telefono;
}

QString Solicitud::getTipoEvento() const {
    return tipoEvento;
}

double Solicitud::getPresupuesto() const {
    return presupuesto;
}

QString Solicitud::getDetalles() const {
    return detalles;
}
