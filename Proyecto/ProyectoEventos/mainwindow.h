#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QStackedWidget>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
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

    /*Pantalla Crear Evento*/
    void on_pushButton_Cancelar_3_clicked();
    void on_pushButton_Crear_clicked();

    /*Pantalla Contáctenos*/
    void on_pushButton_Regresar_clicked();
    void on_pushButton_Enviar_clicked();


private:
    Ui::MainWindow *ui;

    void setupMenu();
    bool esAdministrador();
};

#endif // MAINWINDOW_H
