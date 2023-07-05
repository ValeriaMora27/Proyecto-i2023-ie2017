/**
 * @file lugares.cpp
 * @brief Implementación de la clase Lugar.
 */

#include "lugares.h"

/**
 * @brief Constructor por defecto de la clase Lugar.
 */
Lugar::Lugar(){}

/**
 * @brief Establece el nombre del lugar.
 * @param newNombre El nuevo nombre del lugar.
 */
void Lugar::setNombre(QString& newNombre) {
    nombre = newNombre;
}

/**
 * @brief Establece la capacidad del lugar.
 * @param newCapacidad La nueva capacidad del lugar.
 */
void Lugar::setCapacidad(int newCapacidad) {
    capacidad = newCapacidad;
}

/**
 * @brief Establece la disponibilidad del lugar.
 * @param newDisponibilidad La nueva disponibilidad del lugar.
 */
void Lugar::setDisponibilidad(QString& newDisponibilidad) {
    disponibilidad = newDisponibilidad;
}

/**
 * @brief Establece el precio del lugar.
 * @param newPrecio El nuevo precio del lugar.
 */
void Lugar::setPrecio(double newPrecio) {
    precio = newPrecio;
}

/**
 * @brief Establece la localización del lugar.
 * @param newLocalizacion La nueva localización del lugar.
 */
void Lugar::setLocalizacion(QString& newLocalizacion) {
    localizacion = newLocalizacion;
}

/**
 * @brief Establece si el lugar está bajo techo o no.
 * @param newBajoTecho Valor booleano que indica si el lugar está bajo techo.
 */
void Lugar::setBajoTecho(bool newBajoTecho) {
    bajoTecho = newBajoTecho;
}

/**
 * @brief Obtiene el nombre del lugar.
 * @return El nombre del lugar.
 */
QString Lugar::getNombre() const {
    return nombre;
}

/**
 * @brief Obtiene la capacidad del lugar.
 * @return La capacidad del lugar.
 */
int Lugar::getCapacidad() const {
    return capacidad;
}

/**
 * @brief Obtiene la disponibilidad del lugar.
 * @return La disponibilidad del lugar.
 */
QString Lugar::getDisponibilidad() const {
    return disponibilidad;
}

/**
 * @brief Obtiene el precio del lugar.
 * @return El precio del lugar.
 */
double Lugar::getPrecio() const {
    return precio;
}

/**
 * @brief Obtiene la localización del lugar.
 * @return La localización del lugar.
 */
QString Lugar::getLocalizacion() const {
    return localizacion;
}

/**
 * @brief Verifica si el lugar está bajo techo o no.
 * @return Valor booleano que indica si el lugar está bajo techo.
 */
bool Lugar::getBajoTecho() const {
    return bajoTecho;
}

