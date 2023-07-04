/**
 * @file mainwindow.cpp
 * @brief Implementación de la clase MainWindow.
 */

#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "usuario.h"
#include "enums.h"
#include "basedatos.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <string>
#include <QMessageBox>
#include <QString>
#include <regex>


using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    /**
     * @brief Para crear la base de datos
     */
    // nombre de la base
    QString nombreBaseEventos;
    nombreBaseEventos.append("basedatoseventos.sqlite");
    dbEvento.setNombreDb(nombreBaseEventos);


    // crear la base
    if (dbEvento.crearBase()){
        qDebug("Se creó la base de datos");
        QString sqlEvento = "CREATE TABLE eventos("
                            "Nombre TEXT PRIMARY KEY, "
                            "Cliente TEXT, "
                            "Fecha DATE, "
                            "HoraInicio DATETIME, "
                            "HoraFinal DATETIME, "
                            "TipoEvento TEXT, "
                            "Dj TEXT, "
                            "Catering TEXT, "
                            "Comparsa TEXT, "
                            "Presupuesto DECIMAL(10, 2)"
                            ")";
        dbEvento.crearTabla(sqlEvento);

    }
    else {
        qDebug("No se creó la base de datos");
    }

    // mensaje de creación
}

MainWindow::~MainWindow()
{
    dbEvento.cerrarBase();
    delete ui;
}

/* Pantalla de Inicio */
void MainWindow::on_pushButton_Iniciar_clicked()
{
    ui->stackedWidget->setCurrentIndex(login);
}

void MainWindow::on_pushButton_Registrarse_clicked()
{
    ui->stackedWidget->setCurrentIndex(registro);
}

/* Pantalla Iniciar Sesión */
void MainWindow::on_pushButton_Cancelar_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(inicio);
}


void MainWindow::on_pushButton_Iniciar_2_clicked()
{
    std::string correo = ui->InputNombre_2->text().toStdString();
    std::string contrasena = ui->InputContra_3->text().toStdString();

    bool loginExitoso = false; /* Inicia asumiendo que el login no será exitoso. */

    QFile file("../usuarios.txt");
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "No se pudo abrir el archivo para lectura";
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString linea = in.readLine();
        QStringList campos = linea.split(",");
        std::string correoArchivo = campos[1].toStdString();
        QString rolUsuario = campos[2];
        std::string contrasenaArchivo = campos[3].toStdString();

        if (correo == correoArchivo && contrasena == contrasenaArchivo) {
            qDebug() << "Inicio de sesión exitoso!";
            loginExitoso = true; /* Si las credenciales coinciden, entonces el login es exitoso. */
            rolUsuarioActual = rolUsuario; /* Almacenamos el rol del usuario que ha iniciado sesión. */
            break;
        }
    }

    file.close();

    if (!loginExitoso) {
        /* Muestra una ventana de mensaje indicando que el inicio de sesión no fue exitoso */
        QMessageBox::warning(this, tr("Iniciar sesión"), tr("Correo o contraseña incorrecta."));
    }
    else {
        /* Se configura el menú en el widget del índice 3 del stackedWidget */
        setupMenu();
        ui->stackedWidget->setCurrentIndex(principal);
    }
}

/* Pantalla de Registro */
void MainWindow::on_pushButton_Cancelar_clicked()
{
    ui->stackedWidget->setCurrentIndex(inicio);
}

void MainWindow::on_pushButton_Registrar_clicked()
{
    /* Definir el patrón para un correo electrónico válido */
    std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

    /* Verificar si alguna de las entradas está vacía */
    if (ui->InputNombre->text().isEmpty() ||
        ui->InputCorreo->text().isEmpty() ||
        ui->InputContra->text().isEmpty()) {
        // Muestra un mensaje de error si alguna entrada está vacía
        QMessageBox::warning(this, tr("Registro"), tr("Por favor, completa todos los campos."));
        return;
    }

    /* Verificar si el correo es válido */
    std::string correo = ui->InputCorreo->text().toStdString();
    if (!std::regex_match(correo, pattern)) {
        /* Muestra un mensaje de error si el correo no es válido */
        QMessageBox::warning(this, tr("Registro"), tr("Por favor, ingresa un correo válido."));
        return;
    }

    /* Verificar si las contraseñas coinciden */
    if (ui->InputContra->text() != ui->InputContra_2->text()) {
        /* Muestra un mensaje de error si las contraseñas no coinciden */
        QMessageBox::warning(this, tr("Registro"), tr("Las contraseñas no coinciden."));
            return;
    }

    /* Verificar si el correo ya existe en el archivo */
    std::string correoIngresado = ui->InputCorreo->text().toStdString();
    QFile file("../usuarios.txt");
    if (!file.open(QIODevice::ReadOnly)) {
            qDebug() << "No se pudo abrir el archivo para lectura";
            return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
            QString linea = in.readLine();
            QStringList campos = linea.split(",");
            std::string correoArchivo = campos[1].toStdString();

            if (correoIngresado == correoArchivo) {
            /* Muestra un mensaje de error si el correo ya existe */
            QMessageBox::warning(this, tr("Registro"), tr("Este correo ya está en uso."));
                return;
            }
    }
    file.close();

    /* Crear un nuevo usuario con los datos introducidos */
    Usuario usuario(ui->InputNombre->text().toStdString(),
                    ui->InputCorreo->text().toStdString(),
                    ui->InputRol->currentText().toStdString(),
                    ui->InputContra->text().toStdString());

    /* Abrir el archivo en modo de escritura */
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        qDebug() << "No se pudo abrir el archivo para escritura";
        return;
    }

    QTextStream out(&file);
    /* Escribir los datos del usuario en el archivo */
    out << QString::fromStdString(usuario.getNombre()) << ","
        << QString::fromStdString(usuario.getCorreo()) << ","
        << QString::fromStdString(usuario.getRol()) << ","
        << QString::fromStdString(usuario.getContrasena()) << "\n";
    file.close();

    /* Limpiar los campos de entrada */
    ui->InputNombre->clear();
    ui->InputCorreo->clear();
    ui->InputRol->setCurrentIndex(0);
    ui->InputContra->clear();
    ui->InputContra_2->clear();

    /* Muestra una ventana de mensaje indicando que el registro fue exitoso */
    QMessageBox::information(this, tr("Registro"), tr("El registro fue exitoso."));
    ui->stackedWidget->setCurrentIndex(inicio);
}


/* Pantalla Principal */
bool MainWindow::esAdministrador()
{
    /* Verificar el rol del usuario actual */
    bool esAdministrador;
    if (rolUsuarioActual == "Administrador"){
        esAdministrador = true;
    }else{
        esAdministrador = false;
    }

    return esAdministrador;
}

/* Menú superior izquierdo */
void MainWindow::setupMenu()
{
    /* Se crea una barra de menú y se establece como la barra de menú de la ventana principal */
    QMenuBar *menuBar = new QMenuBar(this);
    setMenuBar(menuBar);

    /* Se crea un menú principal llamado "Menu" */
    QMenu *menu = new QMenu("Menú", this);
    menuBar->addMenu(menu);

    /* Acción "Eventos" */
    QAction *eventosAction = new QAction("Próximos eventos", this);
    connect(eventosAction, &QAction::triggered, this, &MainWindow::onEventosClicked);
    menu->addAction(eventosAction);

    if (!esAdministrador()) {
        /* Acción "Contáctenos" */
        QAction *contactenosAction = new QAction("Contáctenos", this);
        connect(contactenosAction, &QAction::triggered, this, &MainWindow::onContactenosClicked);
        menu->addAction(contactenosAction);

        /* Acción para  cerrar sesión */
        QAction *cerrarSesionAction = new QAction("Cerrar sesión", this);
        connect(cerrarSesionAction, &QAction::triggered, this, &MainWindow::onCerrarSesionClicked);
        menu->addAction(cerrarSesionAction);
    }

    /* Se verifica si el usuario es un administrador y se
       establecen acciones únicamente para administradores*/
    if (esAdministrador()) {
        /* Acción "Evento Nuevo" */
        QAction *eventoNuevoAction = new QAction("Evento nuevo", this);
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

        /* Acción para  cerrar sesión */
        QAction *cerrarSesionAction = new QAction("Cerrar sesión", this);
        connect(cerrarSesionAction, &QAction::triggered, this, &MainWindow::onCerrarSesionClicked);
        menu->addAction(cerrarSesionAction);
    }
    connect(ui->stackedWidget, &QStackedWidget::currentChanged, this, &MainWindow::onStackedWidgetCurrentChanged);
}

/* Determinar donde se muestra el menú superior */
void MainWindow::onStackedWidgetCurrentChanged(int index)
{
    /* Se verifica si el índice actual del QStackedWidget coincide con el índice de la página del menú */
    if (index == principal) {
        /* Se muestra el menú */
        menuBar()->show();
    } else {
        /* Se oculta el menú */
        menuBar()->hide();
    }
}

/* Se definen los índices de las pantallas a las que se lleva al dar click en algún evento*/
void MainWindow::onEventosClicked()
{
    ui->stackedWidget->setCurrentIndex(eventos);
}

void MainWindow::onContactenosClicked()
{
    ui->stackedWidget->setCurrentIndex(contacto);
}

void MainWindow::onEventoNuevoClicked()
{
    ui->stackedWidget->setCurrentIndex(crear_evento);
}

void MainWindow::onLugaresClicked()
{
    ui->stackedWidget->setCurrentIndex(lugares);
}

void MainWindow::onProveedoresClicked()
{
    ui->stackedWidget->setCurrentIndex(proveedores);
}

void MainWindow::onEstadisticasClicked()
{
    ui->stackedWidget->setCurrentIndex(estadisticas);
}

void MainWindow::onSolicitudesClicked()
{
    ui->stackedWidget->setCurrentIndex(solicitudes);
}

void MainWindow::onAdminContactenosClicked()
{
    ui->stackedWidget->setCurrentIndex(contacto);
}

void MainWindow::onCerrarSesionClicked()
{
    ui->stackedWidget->setCurrentIndex(inicio);
    ui->InputNombre_2->clear();
    ui->InputContra_3->clear();
}


/* Botones de las actividades */

void MainWindow::on_pushButton_bailes_clicked()
{
    ui->stackedWidget->setCurrentIndex(eventos);
}

void MainWindow::on_pushButton_conciertos_clicked()
{
    ui->stackedWidget->setCurrentIndex(eventos);
}

void MainWindow::on_pushButton_graduaciones_clicked()
{
    ui->stackedWidget->setCurrentIndex(eventos);
}

void MainWindow::on_pushButton_bodas_clicked()
{
    ui->stackedWidget->setCurrentIndex(eventos);
}

void MainWindow::on_pushButton_conferencias_clicked()
{
    ui->stackedWidget->setCurrentIndex(eventos);
}

/* Pantalle de Eventos Existentes */
void MainWindow::on_pushButton_Cancelar_Eventos_clicked()
{
    ui->stackedWidget->setCurrentIndex(principal);
}

/* Pantalla Lugares */
void MainWindow::on_pushButton_Agregar_Lugares_clicked()
{
    ui->stackedWidget->setCurrentIndex(agregar_lugares);
}

void MainWindow::on_pushButton_Eliminar_Lugares_clicked()
{
    ui->stackedWidget->setCurrentIndex(lugares);
}

void MainWindow::on_pushButton_Cancelar_Lugares_clicked()
{
    ui->stackedWidget->setCurrentIndex(principal);
}

/* Pantalla de añadir lugares */
void MainWindow::on_pushButton_Regresar_Anadir_Lugares_clicked()
{
    ui->stackedWidget->setCurrentIndex(lugares);
}


/* Pantalla Proveedores */
void MainWindow::on_pushButton_Cancelar_Proveedores_clicked()
{
    ui->stackedWidget->setCurrentIndex(principal);
}

/* Pantalla Estadisticas */
void MainWindow::on_pushButton_Cancelar_Estadisticas_clicked()
{
    ui->stackedWidget->setCurrentIndex(principal);
}

/* Pantalla Solicitud */
void MainWindow::on_pushButton_Cancelar_Solicitud_clicked()
{
    ui->stackedWidget->setCurrentIndex(principal);
}

/* Pantalla Crear evento */

void MainWindow::on_pushButton_Cancelar_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(principal);
}

void MainWindow::on_pushButton_Crear_clicked()
{
    /*
    if (los campos estan vacíos){
        muestre un mensaje de error
    }
    else {
        cree el evento
    }
    */

    if (ui->nombreEvento->text().isEmpty() ||
        ui->cliente->text().isEmpty() ||
        ui->dj->text().isEmpty() ||
        ui->catering->text().isEmpty() ||
        ui->comparsa->text().isEmpty() ||
        ui->presupuesto->text().isEmpty()){
        // Mostrar mensaje de error
        QMessageBox::warning(this, 
                             tr("Crear Evento"),
                             tr("Por favor, completa todos los campos."));
        return;
    }
    else {
        QString nombreEvento = ui->nombreEvento->text();
        QString cliente = ui->cliente->text();
        QDate fechaEvento = ui->fechaEvento->date();
        QTime horaInicio = ui->horaInicio->time();
        QTime horaFinal = ui->horaFin->time();
        QString tipoEvento = ui->tipoEvento->currentText();
        QString dj = ui->dj->text();
        QString catering = ui->catering->text();
        QString comparsa = ui->comparsa->text();
        QString presupuesto = ui->presupuesto->text();

        if (dbEvento.agregarEvento(nombreEvento,
                                   cliente,
                                   fechaEvento,
                                   horaInicio,
                                   horaFinal,
                                   tipoEvento,
                                   dj,
                                   catering,
                                   comparsa,
                                   presupuesto)) {
            // Éxito al agregar el evento
            QMessageBox::information(this,
                                     tr("Crear Evento"),
                                     tr("Evento agregado correctamente."));

            // Limpiar los campos
            ui->nombreEvento->clear();
            ui->cliente->clear();
            ui->dj->clear();
            ui->catering->clear();
            ui->comparsa->clear();
            ui->presupuesto->clear();
        } else {
            // Error al agregar el evento
            QMessageBox::warning(this,
                                 tr("Crear Evento"),
                                 tr("No se pudo agregar el evento."));
        }
    }


    // Se dirige a la ventana de eventos existentes
    //ui->stackedWidget->setCurrentIndex(eventos);
}

/* Pantalla Contáctenos */

void MainWindow::on_pushButton_Regresar_clicked()
{
    ui->stackedWidget->setCurrentIndex(principal);
}

void MainWindow::on_pushButton_Enviar_clicked()
{
    ui->stackedWidget->setCurrentIndex(principal);
}

void MainWindow::on_pushButton_Eventos_clicked()
{
    ui->stackedWidget->setCurrentIndex(eventos);
}

