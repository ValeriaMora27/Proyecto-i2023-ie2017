/**
 * @file lugares.cpp
 * @brief Implementación de la clase Lugar.
 */

#include "lugares.h"

/* Constructor por defecto */
Lugar::Lugar(){}

/* Establecer datos */
void Lugar::setNombre(QString& newNombre) {
    nombre = newNombre;
}

void Lugar::setCapacidad(int newCapacidad) {
    capacidad = newCapacidad;
}

void Lugar::setDisponibilidad(QString& newDisponibilidad) {
    disponibilidad = newDisponibilidad;
}

void Lugar::setPrecio(double newPrecio) {
    precio = newPrecio;
}

void Lugar::setLocalizacion(QString& newLocalizacion) {
    localizacion = newLocalizacion;
}

void Lugar::setBajoTecho(bool newBajoTecho) {
    bajoTecho = newBajoTecho;
}

/* Obtener datos */
QString Lugar::getNombre() const {
    return nombre;
}

int Lugar::getCapacidad() const {
    return capacidad;
}

QString Lugar::getDisponibilidad() const {
    return disponibilidad;
}

double Lugar::getPrecio() const {
    return precio;
}

QString Lugar::getLocalizacion() const {
    return localizacion;
}

bool Lugar::getBajoTecho() const {
    return bajoTecho;
}
