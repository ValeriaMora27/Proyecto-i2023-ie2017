#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/* Pantalla de Inicio */
void MainWindow::on_BotonIniciarSesion_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_BotonRegistrarse_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
