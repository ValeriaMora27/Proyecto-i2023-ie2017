#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <string>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* Se configura el menú en el widget del índice 3 del stackedWidget */
    setupMenu();

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


/* Pantalla Iniciar Sesión */

void MainWindow::on_pushButton_Cancelar_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_Iniciar_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


/* Pantalla de Registro */
void MainWindow::on_pushButton_Cancelar_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_Registrar_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}



/* Pantalla Principal */

bool MainWindow::esAdministrador()
{
    /* Modificar esto según datos al registrarse*/
    string usuario = "Administrador";
    bool esAdministrador;
    if (usuario == "Administrador"){
        esAdministrador = true;
    }else{
        esAdministrador = false;
    }

    return esAdministrador;
}

void MainWindow::setupMenu()
{
    /* Se crea una barra de menú y se establece como la barra de menú de la ventana principal */
    QMenuBar *menuBar = new QMenuBar(this);
    setMenuBar(menuBar);

    /* Se crea un menú principal llamado "Menu" */
    QMenu *menu = new QMenu("Menu", this);
    menuBar->addMenu(menu);

    /* Acción "Eventos" */
    QAction *eventosAction = new QAction("Eventos", this);
    connect(eventosAction, &QAction::triggered, this, &MainWindow::onEventosClicked);
    menu->addAction(eventosAction);

    if (!esAdministrador()) {
        /* Acción "Contáctenos" */
        QAction *contactenosAction = new QAction("Contáctenos", this);
        connect(contactenosAction, &QAction::triggered, this, &MainWindow::onContactenosClicked);
        menu->addAction(contactenosAction);
    }

    /* Se verifica si el usuario es un administrador y se
       establecen acciones únicamente para administradores*/
    if (esAdministrador()) {
        /* Acción "Evento Nuevo" */
        QAction *eventoNuevoAction = new QAction("Evento Nuevo", this);
        connect(eventoNuevoAction, &QAction::triggered, this, &MainWindow::onEventoNuevoClicked);
        menu->addAction(eventoNuevoAction);

        /* Acción "Lugares" */
        QAction *lugaresAction = new QAction("Lugares", this);
        connect(lugaresAction, &QAction::triggered, this, &MainWindow::onLugaresClicked);
        menu->addAction(lugaresAction);

        /* Acción "Proveedores" */
        QAction *proveedoresAction = new QAction("Proveedores", this);
        connect(proveedoresAction, &QAction::triggered, this, &MainWindow::onProveedoresClicked);
        menu->addAction(proveedoresAction);

        /* Acción "Estadísticas" */
        QAction *estadisticasAction = new QAction("Estadísticas", this);
        connect(estadisticasAction, &QAction::triggered, this, &MainWindow::onEstadisticasClicked);
        menu->addAction(estadisticasAction);

        /* Acción "Solicitudes de Eventos" */
        QAction *solicitudesAction = new QAction("Solicitudes de Eventos", this);
        connect(solicitudesAction, &QAction::triggered, this, &MainWindow::onSolicitudesClicked);
        menu->addAction(solicitudesAction);

        /* Acción "Contáctenos" */
        QAction *adminContactenosAction = new QAction("Contáctenos", this);
        connect(adminContactenosAction, &QAction::triggered, this, &MainWindow::onAdminContactenosClicked);
        menu->addAction(adminContactenosAction);
    }
    connect(ui->stackedWidget, &QStackedWidget::currentChanged, this, &MainWindow::onStackedWidgetCurrentChanged);
}

void MainWindow::onStackedWidgetCurrentChanged(int index)
{
    /* Se verifica si el índice actual del QStackedWidget coincide con el índice de la página del menú */
    if (index == 3) {
        /* Se muestra el menú */
        menuBar()->show();
    } else {
        /* Se oculta el menú */
        menuBar()->hide();
    }
}

/* Se definen los indices de las pantallas a las que se lleva al dar click en algún evento*/
void MainWindow::onEventosClicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::onContactenosClicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

void MainWindow::onEventoNuevoClicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::onLugaresClicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::onProveedoresClicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::onEstadisticasClicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

void MainWindow::onSolicitudesClicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void MainWindow::onAdminContactenosClicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}


/* Botones de las actividades */

void MainWindow::on_pushButton_bailes_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_conciertos_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_graduaciones_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_bodas_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_conferencias_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}
