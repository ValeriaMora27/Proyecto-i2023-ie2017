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
void MainWindow::on_pushButton_Iniciar_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_Registrarse_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

/* Pantalla de Registro */
void MainWindow::on_pushButton_Cancelar_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

/* Pantalla de Registro */
void MainWindow::on_pushButton_Registrar_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

