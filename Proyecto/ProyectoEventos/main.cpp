/**
 * @file main.cpp
 * @brief Punto de entrada de la aplicación.
 */

#include "mainwindow.h"
#include <QApplication>

/**
 * @brief Función principal de la aplicación.
 *
 * @param argc Cantidad de argumentos de línea de comandos.
 * @param argv Argumentos de línea de comandos.
 * @return Código de salida de la aplicación.
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
