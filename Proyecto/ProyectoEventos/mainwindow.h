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

    void on_pushButton_Cancelar_2_clicked();

    void on_pushButton_Iniciar_2_clicked();

private:
    Ui::MainWindow *ui;

    void setupMenu();
    bool esAdministrador();
};

#endif // MAINWINDOW_H
