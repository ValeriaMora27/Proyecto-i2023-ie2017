/**
 * @file enums.h
 * @brief Contiene las enumeraciones utilizadas en la aplicación.
 */

#ifndef ENUMS_H
#define ENUMS_H

/**
 * @brief Enumeración para las diferentes pantallas de la aplicación.
 */
enum Pantallas
{
    inicio = 0, /**< Pantalla de inicio */
    login, /**< Pantalla de inicio de sesión */
    registro, /**< Pantalla de registro */
    principal, /**< Pantalla principal */
    pantalla_eventos, /**< Pantalla de eventos */
    crear_evento, /**< Pantalla de creación de evento */
    lugares, /**< Pantalla de lugares */
    proveedores, /**< Pantalla de proveedores */
    estadisticas, /**< Pantalla de estadísticas */
    solicitudes, /**< Pantalla de solicitudes */
    contacto, /**< Pantalla de contacto */
    agregar_lugares, /**< Pantalla de agregar lugares */
    agregar_proveedores, /**< Pantalla de agregar proveedores */
    pantallas_count /**< Número de pantallas */
};

/**
 * @brief Enumeración para los componentes de un evento.
 */
enum ComponentesEvento
    {
     numNombre = 0, /**< Nombre */
     numCliente, /**< Cliente */
     numContacto, /**< Contacto */
     numLugar, /**< Lugar */
     numFecha, /**< Fecha */
     numHoraInicio, /**< Hora de inicio */
     numHoraFin, /**< Hora de fin */
     numTipoEvento, /**< Tipo de evento */
     numDj, /**< DJ */
     numCatering, /**< Catering */
     numComparsa, /**< Comparsa */
     numCosto, /**< Costo */
     componenentesEventoCount /**< Número de componentes del evento */
};

#endif // ENUMS_H

