/**
 * @file proveedor.h
 * @brief Definición de la clase Proveedor.
 */

#ifndef PROVEEDOR_H
#define PROVEEDOR_H

#include <QString>

/**
 * @brief La clase Proveedor representa un proveedor.
 */
class Proveedor
{
private:
    QString servicio;   /**< El tipo de servicio. */
    QString empresa;    /**< El nombre de la empresa. */
    int eventos;        /**< La cantidad de eventos realizados. */
    QString valoracion; /**< La valoracion del proveedor. */
    double precio;      /**< El precio del proveedor. */

public:
    /**
     * @brief Constructor por defecto de la clase Proveedor.
     */
    Proveedor();

    /**
     * @brief Establece el tipo de servicio del proveedor.
     * @param newServicio El nuevo tipo de servicio del proveedor.
     */
    void setServicio(QString &newServicio);

    /**
     * @brief Establece el nombre de la empresa proveedora.
     * @param newEmpresa El nuevo nombre de la empresa proveedora.
     */
    void setEmpresa(QString &newEmpresa);

    /**
     * @brief Establece la cantidad de eventos realizados por el proveedor.
     * @param newEventos La nueva cantidad de eventos realizados.
     */
    void setEventos(int newEventos);

    /**
     * @brief Establece la valoración del proveedor.
     * @param newValoracion La nueva valoración del proveedor.
     */
    void setValoracion(QString &newValoracion);

    /**
     * @brief Establece el precio del proveedor.
     * @param newPrecio El nuevo precio del proveedor.
     */
    void setPrecio(double newPrecio);

    /**
     * @brief Obtiene el tipo de servicio del proveedor.
     * @return El tipo de servicio del proveedor.
     */
    QString getServicio() const;

    /**
     * @brief Obtiene el nombre de la empresa proveedora.
     * @return El nombre de la empresa proveedora.
     */
    QString getEmpresa() const;

    /**
     * @brief Obtiene la cantidad de eventos realizados por el proveedor.
     * @return La cantidad de eventos realizados por el proveedor.
     */
    int getEventos() const;

    /**
     * @brief Obtiene la valoración del proveedor.
     * @return La valoración del proveedor.
     */
    QString getValoracion() const;

    /**
     * @brief Obtiene el precio del proveedor.
     * @return El precio del proveedor.
     */
    double getPrecio() const;
};

#endif // PROVEEDOR_H
