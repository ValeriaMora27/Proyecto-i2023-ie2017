#include "estadisticas.h"

QString estadisticaCantidadEventos()
{
    // Abre el archivo
    QFile file("../eventos.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        return 0;
    }
    // Cuenta las líneas del archivo
    int lineCount = 0;
    QTextStream in(&file);
    while (!in.atEnd()) {
        in.readLine();
        lineCount++;
    }

    // Cierra el archivo
    file.close();

    // Convierte la cantidad de líneas a texto
    QString lineCountText = QString::number(lineCount);

    return lineCountText;
}

QString estIngresosPrevistos()
{
    // Abre el archivo
    QFile file("../eventos.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        return 0;
    }
    // Inicializa el total de ingresos
    float totalIngresos = 0.0;

    // Lee el archivo y suma los ingresos
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList datos = line.split(",");
        if (!datos.isEmpty()) {
            QString ultimoElemento = datos.last();
            float ingreso = ultimoElemento.toFloat();
            totalIngresos += ingreso;
        }
    }

    // Cierra el archivo
    file.close();

    // Convierte el total de ingresos a texto
    QString totalIngresosText = QString::number(totalIngresos);

    return totalIngresosText;
}

QString estadisticaSolicitudesPendientes()
{
    // Abre el archivo
    QFile file("../solicitudes.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        return 0;
    }
    // Cuenta las líneas del archivo
    int lineCount = 0;
    QTextStream in(&file);
    while (!in.atEnd()) {
        in.readLine();
        lineCount++;
    }

    // Cierra el archivo
    file.close();

    // Convierte la cantidad de líneas a texto
    QString lineCountText = QString::number(lineCount);

    return lineCountText;
}


QStringList obtenerEventosProximos()
{
    // Obtener la fecha actual
    QDate fechaActual = QDate::currentDate();

    // Crear un QMap para almacenar los eventos con sus fechas
    QMap<QDate, QString> eventos;

    // Abrir el archivo y leer los eventos
    QFile file("../eventos.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return QStringList();

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList datos = line.split(",");
        if (datos.size() == componenentesEventoCount) {
            QString evento = datos[numNombre];
            QString fechaStr = datos[numFecha];
            QDate fecha = QDate::fromString(fechaStr, "ddd MMM dd yyyy");
            eventos.insert(fecha, evento);
        }
    }

    file.close();

    // Obtener los tres eventos más próximos
    int count = 0;
    QStringList eventosProximos;
    for (auto it = eventos.begin(); it != eventos.end() && count < 3; ++it) {
        if (it.key() >= fechaActual) {
            QString eventoProximo = it.value() + " - " + it.key().toString("ddd MMM dd yyyy");
            eventosProximos.append(eventoProximo);
            ++count;;
        }
    }

    return eventosProximos;
}


QStringList obtenerEventoMayorRecaudacion()
{
    // Obtener la fecha actual
    QDate fechaActual = QDate::currentDate();

    // Variables para almacenar la información del evento con mayor recaudación
    QString nombreEventoMayorRecaudacion;
    QString nombreClienteMayorRecaudacion;
    QDate fechaMayorRecaudacion;
    float montoMayorRecaudacion = 0.0;

    // Abrir el archivo y leer los eventos
    QFile file("../eventos.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return QStringList();

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList datos = line.split(",");
        if (datos.size() == componenentesEventoCount) {
            QString nombreEvento = datos[numNombre];
            QString nombreCliente = datos[numCliente];
            QString fechaStr = datos[numFecha];
            QDate fecha = QDate::fromString(fechaStr, "ddd MMM d yyyy");
            float montoRecaudado = datos[numCosto].toFloat();

            // Verificar si la fecha del evento es menor a la fecha actual
            if (fecha < fechaActual && montoRecaudado > montoMayorRecaudacion) {
                nombreEventoMayorRecaudacion = nombreEvento;
                nombreClienteMayorRecaudacion = nombreCliente;
                fechaMayorRecaudacion = fecha;
                montoMayorRecaudacion = montoRecaudado;
            }
        }
    }

    file.close();

    // Crear una lista con la información del evento con mayor recaudación
    QStringList eventoMayorRecaudacionInfo;
    eventoMayorRecaudacionInfo << "Nombre del evento: " << nombreEventoMayorRecaudacion;
    eventoMayorRecaudacionInfo << "Nombre del cliente: " << nombreClienteMayorRecaudacion;
    eventoMayorRecaudacionInfo << "Fecha: " << fechaMayorRecaudacion.toString("ddd MMM d yyyy");
    eventoMayorRecaudacionInfo << "Monto recaudado: " << QString::number(montoMayorRecaudacion);

    return eventoMayorRecaudacionInfo;
}

