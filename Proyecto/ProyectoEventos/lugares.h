/**
 * @file lugares.h
 * @brief Definición de la clase Lugar.
 */

#ifndef LUGARES_H
#define LUGARES_H

#include <QString>
/**
 * @brief La clase Lugar representa un lugar.
 */
class Lugar
{
private:
    QString nombre;         /**< El nombre del lugar. */
    int capacidad;          /**< La capacidad del lugar. */
    QString disponibilidad; /**< La disponibilidad del lugar. */
    double precio;          /**< El precio del lugar. */
    QString localizacion;   /**< La localización del lugar. */
    bool bajoTecho;         /**< Si el lugar es o no bajo techo. */

public:
    /**
     * @brief Constructor por defecto de la clase Lugar.
     */
    Lugar();

    /**
     * @brief Establece el nombre del lugar.
     * @param newNombre El nuevo nombre del lugar.
     */
    void setNombre(QString &newNombre);

    /**
     * @brief Establece la capacidad del lugar.
     * @param newCapacidad La nueva capacidad del lugar.
     */
    void setCapacidad(int newCapacidad);

    /**
     * @brief Establece la disponibilidad del lugar.
     * @param newDisponibilidad La nueva disponibilidad del lugar.
     */
    void setDisponibilidad(QString &newDisponibilidad);

    /**
     * @brief Establece el precio del lugar.
     * @param newPrecio El nuevo precio del lugar.
     */
    void setPrecio(double newPrecio);

    /**
     * @brief Establece la localización del lugar.
     * @param newLocalizacion La nueva localización del lugar.
     */
    void setLocalizacion(QString &newLocalizacion);

    /**
     * @brief Establece si el lugar es bajo techo o no.
     * @param newBajoTecho Valor booleano que indica si el lugar es bajo techo.
     */
    void setBajoTecho(bool newBajoTecho);

    /**
     * @brief Obtiene el nombre del lugar.
     * @return El nombre del lugar.
     */
    QString getNombre() const;

    /**
     * @brief Obtiene la capacidad del lugar.
     * @return La capacidad del lugar.
     */
    int getCapacidad() const;

    /**
     * @brief Obtiene la disponibilidad del lugar.
     * @return La disponibilidad del lugar.
     */
    QString getDisponibilidad() const;

    /**
     * @brief Obtiene el precio del lugar.
     * @return El precio del lugar.
     */
    double getPrecio() const;

    /**
     * @brief Obtiene la localización del lugar.
     * @return La localización del lugar.
     */
    QString getLocalizacion() const;

    /**
     * @brief Verifica si el lugar es bajo techo.
     * @return `true` si el lugar es bajo techo, `false` en caso contrario.
     */
    bool getBajoTecho() const;
};

#endif // LUGARES_H
