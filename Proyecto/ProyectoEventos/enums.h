#ifndef ENUMS_H
#define ENUMS_H

enum Pantallas
{
    inicio = 0, 
    login,
    registro,
    principal,
    pantalla_eventos,
    crear_evento,
    lugares,
    proveedores,
    estadisticas,
    solicitudes,
    contacto,
    agregar_lugares,
    agregar_proveedores,
    pantallas_count
};

enum ComponentesEvento
{
    numNombre = 0,
    numCliente,
    numContacto,
    numLugar,
    numFecha,
    numHoraInicio,
    numHoraFin,
    numTipoEvento,
    numDj,
    numCatering,
    numComparsa,
    numCosto,
    componenentesEventoCount
};

#endif // ENUMS_H
