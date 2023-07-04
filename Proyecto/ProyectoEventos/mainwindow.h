/**
 * @file mainwindow.h
 * @brief Definición de la clase MainWindow.
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QStackedWidget>
#include "usuario.h"
#include "basedatos.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

/**
 * @class MainWindow
 * @brief Clase que representa la ventana principal de la aplicación.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Se utiliza en la interfaz para invocar los métodos de la db
     */
    BaseDatos dbEvento;

    /**
     * @brief Constructor de la clase MainWindow.
     *
     * @param parent El widget padre.
     */
    MainWindow(QWidget *parent = nullptr);

    /**
     * @brief Destructor de la clase MainWindow.
     */
    ~MainWindow();

private slots:
    /*Pantalla Inicio*/
    void on_pushButton_Iniciar_clicked();
    void on_pushButton_Registrarse_clicked();

    /*Pantalla Registro*/
    void on_pushButton_Cancelar_clicked();
    void on_pushButton_Registrar_clicked();

    /*Pantalla Principal*/
    void onEventosClicked();
    void onContactenosClicked();
    void onEventoNuevoClicked();
    void onLugaresClicked();
    void onProveedoresClicked();
    void onEstadisticasClicked();
    void onSolicitudesClicked();
    void onAdminContactenosClicked();
    void onCerrarSesionClicked();
    void onStackedWidgetCurrentChanged(int index);

    /*Pantalla Login*/
    void on_pushButton_Cancelar_2_clicked();
    void on_pushButton_Iniciar_2_clicked();

    /*Pantalla Principal*/
    void on_pushButton_bailes_clicked();
    void on_pushButton_conferencias_clicked();
    void on_pushButton_graduaciones_clicked();
    void on_pushButton_conciertos_clicked();
    void on_pushButton_bodas_clicked();

    /*Pantalla de Eventos Existentes*/
    void on_pushButton_Cancelar_Eventos_clicked();

    /* Pantalla de Lugares */
    void on_pushButton_Agregar_Lugares_clicked();
    void on_pushButton_Eliminar_Lugares_clicked();
    void on_pushButton_Cancelar_Lugares_clicked();

    /* Pantalla Añadir Lugares */
    void on_pushButton_Regresar_Anadir_Lugares_clicked();


    /* Pantalla de proveedores */
    void on_pushButton_Cancelar_Proveedores_clicked();

    /* Pantalla de Estadisticas */
    void on_pushButton_Cancelar_Estadisticas_clicked();

    /* Pantalla de Solicitud */
    void on_pushButton_Cancelar_Solicitud_clicked();

    /*Pantalla Crear Evento*/
    void on_pushButton_Cancelar_3_clicked();
    void on_pushButton_Crear_clicked();

    /*Pantalla Contáctenos*/
    void on_pushButton_Regresar_clicked();
    void on_pushButton_Enviar_clicked();


    void on_pushButton_Eventos_clicked();

private:
    Ui::MainWindow *ui; /**< Interfaz de usuario de la ventana principal. */
    QString rolUsuarioActual;

    /**
     * @brief Configura el menú de la ventana principal.
     */
    void setupMenu();

    /**
     * @brief Verifica si el usuario actual es un administrador.
     *
     * @return true si el usuario es un administrador, false en caso contrario.
     */
    bool esAdministrador();
};

#endif // MAINWINDOW_H
