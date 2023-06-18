#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_pushButton_Iniciar_clicked();
    void on_pushButton_Registrarse_clicked();
    void on_pushButton_Cancelar_clicked();
    void on_pushButton_Registrar_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
