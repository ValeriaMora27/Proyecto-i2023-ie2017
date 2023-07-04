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
    QString servicio; /**< El tipo de servicio. */
    QString empresa; /**< El nombre de la empresa. */
    int eventos; /**< La cantidad de eventos realizados. */
    QString valoracion;  /**< La valoracion del proveedor. */
    double precio; /**< El precio del proveedor. */

public:
    Proveedor();

    void setServicio(QString& newServicio);
    void setEmpresa(QString& newEmpresa);
    void setEventos(int newEventos);
    void setValoracion(QString& newValoracion);
    void setPrecio(double newPrecio);

    QString getServicio() const;
    QString getEmpresa() const;
    int getEventos() const;
    QString getValoracion() const;
    double getPrecio() const;
};

#endif // PROVEEDOR_H
