/**
 * @file proveedor.cpp
 * @brief Implementación de la clase Proveedor.
 */

#include "proveedor.h"

Proveedor::Proveedor()
{

}

/* Establecer datos */
void Proveedor::setServicio(QString& newServicio) {
    servicio = newServicio;
}

void Proveedor::setEmpresa(QString& newEmpresa) {
    empresa = newEmpresa;
}

void Proveedor::setEventos(int newEventos) {
    eventos = newEventos;
}

void Proveedor::setValoracion(QString& newValoracion) {
    valoracion = newValoracion;
}

void Proveedor::setPrecio(double newPrecio) {
    precio = newPrecio;
}

/* Obtener datos */
QString Proveedor::getServicio() const {
    return servicio;
}

QString Proveedor::getEmpresa() const {
    return empresa;
}

int Proveedor::getEventos() const {
    return eventos;
}

QString Proveedor::getValoracion() const {
    return valoracion;
}

double Proveedor::getPrecio() const {
    return precio;
}
