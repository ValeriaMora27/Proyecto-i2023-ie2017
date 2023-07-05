#ifndef VERIFICACION_H
#define VERIFICACION_H

#include <QString>
#include <QTime>
#include <QMessageBox>

bool verificarPresupuesto(const QString& presupuestoStr, float& presupuesto);

bool verificarHoras(QTime horaInicio, QTime horaFin);

#endif // VERIFICACION_H
