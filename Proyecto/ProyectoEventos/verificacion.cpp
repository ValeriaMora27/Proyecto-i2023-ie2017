#include "verificacion.h"

bool verificarPresupuesto(const QString& presupuestoStr, float& presupuesto) {
    bool presupuestoValido;
    presupuesto = presupuestoStr.toFloat(&presupuestoValido);
    if (!presupuestoValido || presupuesto < 0.0) {
        QMessageBox::warning(nullptr, "Error", "Presupuesto no válido");
            return false;
    }
    return true;
}

bool verificarHoras(QTime horaInicio, QTime horaFin) {
    if (horaFin < horaInicio) {
        QMessageBox::warning(nullptr, "Error", "La hora de fin debe ser posterior a la hora de inicio");
            return false;
    }
    return true;
}
