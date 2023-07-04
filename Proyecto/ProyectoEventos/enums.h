#ifndef ENUMS_H
#define ENUMS_H

enum Pantallas
{
    inicio = 0, 
    login,
    registro,
    principal,
    eventos,
    crear_evento,
    lugares,
    proveedores,
    estadisticas,
    solicitudes,
    contacto,
    agregar_lugares,
    agregar_proveedores
};

enum ComponentesEvento
{
    numNombre = 0,
    numCliente,
    numFecha,
    numHoraInicio,
    numHoraFin,
    numTipoEvento,
    numDj,
    numCatering,
    numComparsa,
    numCosto
};

#endif // ENUMS_H
