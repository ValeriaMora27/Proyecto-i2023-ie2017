/**
 * @file proveedor.cpp
 * @brief Implementación de la clase Proveedor.
 */

#include "proveedor.h"

Proveedor::Proveedor()
{

}

/**
 * @brief Establece el tipo de servicio del proveedor.
 * @param newServicio El nuevo tipo de servicio del proveedor.
 */
void Proveedor::setServicio(QString& newServicio) {
    servicio = newServicio;
}

/**
 * @brief Establece el nombre de la empresa proveedora.
 * @param newEmpresa El nuevo nombre de la empresa proveedora.
 */
void Proveedor::setEmpresa(QString&newEmpresa) {
    empresa = newEmpresa;
}

/**
 * @brief Establece la cantidad de eventos realizados por el proveedor.
 * @param newEventos La nueva cantidad de eventos realizados.
 */
void Proveedor::setEventos(int newEventos) {
    eventos = newEventos;
}

/**
 * @brief Establece la valoración del proveedor.
 * @param newValoracion La nueva valoración del proveedor.
 */
void Proveedor::setValoracion(QString& newValoracion) {
    valoracion = newValoracion;
}

/**
 * @brief Establece el precio del proveedor.
 * @param newPrecio El nuevo precio del proveedor.
 */
void Proveedor::setPrecio(double newPrecio) {
    precio = newPrecio;
}

/**
 * @brief Obtiene el tipo de servicio del proveedor.
 * @return El tipo de servicio del proveedor.
 */
QString Proveedor::getServicio() const {
    return servicio;
}

/**
 * @brief Obtiene el nombre de la empresa proveedora.
 * @return El nombre de la empresa proveedora.
 */
QString Proveedor::getEmpresa() const {
    return empresa;
}

/**
 * @brief Obtiene la cantidad de eventos realizados por el proveedor.
 * @return La cantidad de eventos realizados por el proveedor.
 */
int Proveedor::getEventos() const {
    return eventos;
}

/**
 * @brief Obtiene la valoración del proveedor.
 * @return La valoración del proveedor.
 */
QString Proveedor::getValoracion() const {
    return valoracion;
}

/**
 * @brief Obtiene el precio del proveedor.
 * @return El precio del proveedor.
 */
double Proveedor::getPrecio() const {
    return precio;
}
