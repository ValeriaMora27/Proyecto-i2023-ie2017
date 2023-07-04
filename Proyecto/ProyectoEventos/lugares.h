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
    QString nombre; /**< El nombre del lugar. */
    int capacidad; /**< La capacidad del lugar. */
    QString disponibilidad;  /**< La disponibilidad del lugar. */
    double precio; /**< El precio del lugar. */
    QString localizacion; /**< La localización del lugar. */
    bool bajoTecho; /**< Si el lugar es o no bajo techo. */

public:
    Lugar();

    void setNombre(QString& newNombre);
    void setCapacidad(int newCapacidad);
    void setDisponibilidad(QString& newDisponibilidad);
    void setPrecio(double newPrecio);
    void setLocalizacion(QString& newLocalizacion);
    void setBajoTecho(bool newBajoTecho);

    QString getNombre() const;
    int getCapacidad() const;
    QString getDisponibilidad() const;
    double getPrecio() const;
    QString getLocalizacion() const;
    bool getBajoTecho() const;
};


#endif // LUGARES_H


