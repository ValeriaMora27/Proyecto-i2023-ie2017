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
