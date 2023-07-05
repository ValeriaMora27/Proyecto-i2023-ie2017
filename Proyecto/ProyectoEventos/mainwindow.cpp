/**
 * @file mainwindow.cpp
 * @brief Implementación de la clase MainWindow.
 */

#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "usuario.h"
#include "enums.h"
#include "evento.h"
#include "lugares.h"
#include "proveedor.h"
#include "solicitudes.h"
#include "estadisticas.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <string>
#include <QMessageBox>
#include <QString>
#include <regex>
#include <fstream>
#include <sstream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    const QStringList titles{"Lugar","Capacidad","Disponibilidad","Precio","Localización","¿Es bajo techo?"};
    ui->tablaLugares->setColumnCount(titles.size());
    ui->tablaLugares->setHorizontalHeaderLabels(titles);
    cargarDatos();

    const QStringList titlesProveedor{"Tipo de servicio","Empresa","Cantidad de eventos","Valoración","Precio"};
    ui->tablaProveedores->setColumnCount(titlesProveedor.size());
    ui->tablaProveedores->setHorizontalHeaderLabels(titlesProveedor);
    cargarDatosProveedores();

    const QStringList titlesSolicitudes{"Correo","Nombre","Teléfono","Tipo de evento","Presupuesto", "Detalles"};
    ui->tablaSolicitudes->setColumnCount(titlesSolicitudes.size());
    ui->tablaSolicitudes->setHorizontalHeaderLabels(titlesSolicitudes);
    cargarDatosSolicitudes();

    const QStringList titlesEvento{"Nombre","Cliente","Contacto","Lugar","Fecha","Hora de inicio","Hora de finalización","Tipo de evento","Dj", "Catering","Comparsa","Cotización"};
    ui->tablaEventos->setColumnCount(titlesEvento.size());
    ui->tablaEventos->setHorizontalHeaderLabels(titlesEvento);
    cargarDatosEventos();

}

MainWindow::~MainWindow()
{
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
    ui->stackedWidget->setCurrentIndex(pantalla_eventos);
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
    ui->stackedWidget->setCurrentIndex(pantalla_eventos);
}

void MainWindow::on_pushButton_conciertos_clicked()
{
    ui->stackedWidget->setCurrentIndex(pantalla_eventos);
}

void MainWindow::on_pushButton_graduaciones_clicked()
{
    ui->stackedWidget->setCurrentIndex(pantalla_eventos);
}

void MainWindow::on_pushButton_bodas_clicked()
{
    ui->stackedWidget->setCurrentIndex(pantalla_eventos);
}

void MainWindow::on_pushButton_conferencias_clicked()
{
    ui->stackedWidget->setCurrentIndex(pantalla_eventos);
}


/* Pantalla Lugares */
void MainWindow::on_pushButton_Agregar_Lugares_clicked()
{
    ui->stackedWidget->setCurrentIndex(agregar_lugares);
}

void MainWindow::on_pushButton_Eliminar_Lugares_clicked()
{
    eliminarLugarActual();
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




/////////////////////////////////////////////////////////
/* Pantalla Estadisticas */
void MainWindow::on_pushButton_Cancelar_Estadisticas_clicked()
{
    ui->stackedWidget->setCurrentIndex(principal);
}

void MainWindow::on_pushButton_Refrescar_clicked()
{
    QString eventosTotales = estadisticaCantidadEventos();
    ui->label_numCantEventos->setText(eventosTotales);

    QString ingresosPrevistos = estIngresosPrevistos();
    ui->label_numIngresos->setText(ingresosPrevistos);

    QString solicitudesPendientes = estadisticaSolicitudesPendientes();
    ui->label_numSolicitudesPendientes->setText(solicitudesPendientes);

}


/////////////////////////////////////////////////////////////
/* Pantalla Solicitud */
void MainWindow::on_pushButton_Cancelar_Solicitud_clicked()
{
    ui->stackedWidget->setCurrentIndex(principal);
}
////////////////////////////////////////////////////////////////
/* Pantalle de Eventos Existentes */
void MainWindow::on_pushButton_Cancelar_Eventos_clicked()
{
    ui->stackedWidget->setCurrentIndex(principal);
}

void MainWindow::on_pushButton_irCrearEvento_clicked()
{
    ui->stackedWidget->setCurrentIndex(crear_evento);

}

void MainWindow::on_pushButton_Eliminar_Evento_clicked()
{
    eliminarEventoActual();
}

/**
 * @brief cargarDatosEvento permite cargar en una tabla los datos de los
 * eventos existentes.
 */
void MainWindow::cargarDatosEventos()
{
    // Se abre el archivo
    QFile file("../eventos.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    // Se lee el archivo en formato lectura
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList datos = line.split(",");
        if (datos.size() == componenentesEventoCount) {
            QString nombre = datos[numNombre];
            QString cliente = datos[numCliente];
            QString contacto = datos[numContacto];
            QString lugar = datos[numLugar];
            QString fechaStr = datos[numFecha];
            QString horaInicioStr = datos[numHoraInicio];
            QString horaFinStr = datos[numHoraFin];
            QString tipoEvento = datos[numTipoEvento];
            QString dj = datos[numDj];
            QString catering = datos[numCatering];
            QString comparsa = datos[numComparsa];
            float presupuesto = datos[numCosto].toFloat();

            QDate fecha = QDate::fromString(fechaStr, "ddd MMM d yyyy");
            QTime horaInicio = QTime::fromString(horaInicioStr, "hh:mm");
            QTime horaFin = QTime::fromString(horaFinStr, "hh:mm");


            /* Crear un nuevo objeto Evento y añadirlo a la tabla */
            Evento evento;

            evento.setNombre(nombre);
            evento.setCliente(cliente);
            evento.setContacto(contacto);
            evento.setLugar(lugar);
            evento.setFecha(fecha);
            evento.setHoraInicio(horaInicio);
            evento.setHoraFin(horaFin);
            evento.setTipoEvento(tipoEvento);
            evento.setDj(dj);
            evento.setCatering(catering);
            evento.setComparsa(comparsa);
            evento.setPresupuesto(presupuesto);

            // Se inserta en tablaEventos
            int row = ui->tablaEventos->rowCount();
            ui->tablaEventos->insertRow(row);
            ui->tablaEventos->setItem(row, numNombre, new QTableWidgetItem(evento.getNombre()));
            ui->tablaEventos->setItem(row, numCliente, new QTableWidgetItem(evento.getCliente()));
            ui->tablaEventos->setItem(row, numContacto, new QTableWidgetItem(evento.getContacto()));
            ui->tablaEventos->setItem(row, numLugar, new QTableWidgetItem(evento.getLugar()));
            ui->tablaEventos->setItem(row, numFecha, new QTableWidgetItem(evento.getFecha().toString("ddd MMM d yyyy")));
            ui->tablaEventos->setItem(row, numHoraInicio, new QTableWidgetItem(evento.getHoraInicio().toString("hh:mm")));
            ui->tablaEventos->setItem(row, numHoraFin, new QTableWidgetItem(evento.getHoraFin().toString("hh:mm")));
            ui->tablaEventos->setItem(row, numTipoEvento, new QTableWidgetItem(evento.getTipoEvento()));
            ui->tablaEventos->setItem(row, numDj, new QTableWidgetItem(evento.getDj()));
            ui->tablaEventos->setItem(row, numCatering, new QTableWidgetItem(evento.getCatering()));
            ui->tablaEventos->setItem(row, numComparsa, new QTableWidgetItem(evento.getComparsa()));
            ui->tablaEventos->setItem(row, numCosto, new QTableWidgetItem(QString::number(evento.getPresupuesto())));
        }
    }
    file.close();
}

void MainWindow::eliminarEventoActual()
{
    /* Obtener el índice de la fila seleccionada */
    int selectedRow = ui->tablaEventos->currentRow();
    if (selectedRow >= 0) {
        /* Eliminar la fila seleccionada de la tabla */
        ui->tablaEventos->removeRow(selectedRow);

        /* Abrir el archivo de proveedores en modo escritura */
        QFile file("../eventos.txt");
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)){
            QTextStream out(&file);

            /* Recorrer todas las filas de la tabla y guardar los datos en el archivo */
            int rowCount = ui->tablaEventos->rowCount();
            for (int row = 0; row < rowCount; ++row)
            {
                QString nombre = ui->tablaEventos->item(row, numNombre)->text();
                QString cliente = ui->tablaEventos->item(row, numCliente)->text();
                QString contacto = ui->tablaEventos->item(row, numContacto)->text();
                QString lugar = ui->tablaEventos->item(row, numLugar)->text();
                QString fecha = ui->tablaEventos->item(row, numFecha)->text();
                QString horaInicio = ui->tablaEventos->item(row, numHoraInicio)->text();
                QString horaFin = ui->tablaEventos->item(row, numHoraFin)->text();
                QString tipoEvento = ui->tablaEventos->item(row, numTipoEvento)->text();
                QString dj = ui->tablaEventos->item(row, numDj)->text();
                QString catering = ui->tablaEventos->item(row, numCatering)->text();
                QString comparsa = ui->tablaEventos->item(row, numComparsa)->text();
                float presupuesto = ui->tablaEventos->item(row, numCosto)->text().toFloat();

                out << nombre << ","
                    << cliente << ","
                    << contacto << ","
                    << lugar << ","
                    << fecha << ","
                    << horaInicio << ","
                    << horaFin << ","
                    << tipoEvento << ","
                    << dj << ","
                    << catering << ","
                    << comparsa << ","
                    << presupuesto << "\n";
            }
            file.close();
        }
    }
}


/////////////////////////////////////////////////////////////
/* Pantalla Crear evento */

void MainWindow::on_pushButton_Cancelar_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(principal);
}

void MainWindow::on_pushButton_Crear_clicked()
{
    anadirEvento();
}

void MainWindow::on_pushButton_Eventos_clicked()
{
    ui->stackedWidget->setCurrentIndex(pantalla_eventos);
}

void MainWindow::anadirEvento()
{
    /* Verificar si alguna de las entradas está vacía */
    if (ui->lineEdit_nombreEvento->text().isEmpty() ||
        ui->lineEdit_cliente->text().isEmpty() ||
        ui->lineEdit_lugar->text().isEmpty() ||
        ui->lineEdit_dj->text().isEmpty() ||
        ui->lineEdit_catering->text().isEmpty() ||
        ui->lineEdit_comparsa->text().isEmpty() ||
        ui->lineEdit_presupuesto->text().isEmpty()) {
        /*  Muestra un mensaje de error si alguna entrada está vacía */
        QMessageBox::warning(this, tr("Proveedor"), tr("Por favor, completa todos los campos."));
        return;
    }

    /* Extraer los datos introducidos por el usuario */
    QString nombreEvento = ui->lineEdit_nombreEvento->text();
    QString cliente = ui->lineEdit_cliente->text();
    QString contacto = ui->lineEdit_contacto->text();
    QString lugar = ui->lineEdit_lugar->text();
    QDate fecha = ui->dateEdit_fechaEvento->date();
    QString fechaStr= fecha.toString("dd/MM/yyyy");
    QTime horaInicio = ui->dateEdit_horaInicio->time();
    QString horaInicioStr = horaInicio.toString("hh:mm:ss");
    QTime horaFin = ui->dateEdit_horaFin->time();
    QString horaFinStr = horaFin.toString("hh:mm:ss");
    if (!verificarHoras(horaInicio, horaFin)) {return;}
    QString tipoEvento = ui->lineEdit_tipoEvento->currentText();
    QString dj = ui->lineEdit_dj->text();
    QString catering = ui->lineEdit_catering->text();
    QString comparsa = ui->lineEdit_comparsa->text();
    QString presupuestoStr = ui->lineEdit_presupuesto->text();
    float presupuesto;
    if (!verificarPresupuesto(presupuestoStr, presupuesto)) {return;}


    /* Crear un nuevo objeto Evento con los datos introducidos */
    Evento eventoNuevo;
    eventoNuevo.setNombre(nombreEvento);
    eventoNuevo.setCliente(cliente);
    eventoNuevo.setContacto(contacto);
    eventoNuevo.setLugar(lugar);
    eventoNuevo.setFecha(fecha);
    eventoNuevo.setHoraInicio(horaInicio);
    eventoNuevo.setHoraFin(horaFin);
    eventoNuevo.setTipoEvento(tipoEvento);
    eventoNuevo.setDj(dj);
    eventoNuevo.setCatering(catering);
    eventoNuevo.setComparsa(comparsa);
    eventoNuevo.setPresupuesto(presupuesto);

    /* Añadir el evento a la tabla */

    int row = ui->tablaEventos->rowCount();
    ui->tablaEventos->insertRow(row);
    ui->tablaEventos->setItem(row, numNombre, new QTableWidgetItem(eventoNuevo.getNombre()));
    ui->tablaEventos->setItem(row, numCliente, new QTableWidgetItem(eventoNuevo.getCliente()));
    ui->tablaEventos->setItem(row, numContacto, new QTableWidgetItem(eventoNuevo.getContacto()));
    ui->tablaEventos->setItem(row, numLugar, new QTableWidgetItem(eventoNuevo.getLugar()));
    ui->tablaEventos->setItem(row, numFecha, new QTableWidgetItem(eventoNuevo.getFecha().toString()));
    ui->tablaEventos->setItem(row, numHoraInicio, new QTableWidgetItem(eventoNuevo.getHoraInicio().toString("hh:mm")));
    ui->tablaEventos->setItem(row, numHoraFin, new QTableWidgetItem(eventoNuevo.getHoraFin().toString("hh:mm")));
    ui->tablaEventos->setItem(row, numTipoEvento, new QTableWidgetItem(eventoNuevo.getTipoEvento()));
    ui->tablaEventos->setItem(row, numDj, new QTableWidgetItem(eventoNuevo.getDj()));
    ui->tablaEventos->setItem(row, numCatering, new QTableWidgetItem(eventoNuevo.getCatering()));
    ui->tablaEventos->setItem(row, numComparsa, new QTableWidgetItem(eventoNuevo.getComparsa()));
    ui->tablaEventos->setItem(row, numCosto, new QTableWidgetItem(QString::number(eventoNuevo.getPresupuesto())));


    /* Limpiar los campos de entrada */
    ui->lineEdit_nombreEvento->clear();
    ui->lineEdit_cliente->clear();
    ui->lineEdit_contacto->clear();
    ui->lineEdit_lugar->clear();
    ui->lineEdit_dj->clear();
    ui->lineEdit_catering->clear();
    ui->lineEdit_comparsa->clear();
    ui->lineEdit_presupuesto->clear();

    /* Almacenar los datos en un archivo de texto */
    QFile file("../eventos.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << eventoNuevo.getNombre() << ","
            << eventoNuevo.getCliente() << ","
            << eventoNuevo.getContacto() << ","
            << eventoNuevo.getLugar() << ","
            << eventoNuevo.getFecha().toString("ddd MMM dd yyyy") << ","
            << eventoNuevo.getHoraInicio().toString("hh:mm") << ","
            << eventoNuevo.getHoraFin().toString("hh:mm") << ","
            << eventoNuevo.getTipoEvento() << ","
            << eventoNuevo.getDj() << ","
            << eventoNuevo.getCatering() << ","
            << eventoNuevo.getComparsa() << ","
            << eventoNuevo.getPresupuesto() << "\n";
        file.close();
    }
    /* Mostrar mensaje de éxito */
    QMessageBox::information(this, "Éxito", "Evento agregado.");

}


////////////////////////////////////////////////////////////////////////////
/* Pantalla Contáctenos */

void MainWindow::on_pushButton_Regresar_clicked()
{
    ui->stackedWidget->setCurrentIndex(principal);
}

void MainWindow::on_pushButton_Enviar_clicked()
{
    /* Verificar si alguna de las entradas está vacía */
    if (ui->InputCorreoE->text().isEmpty() ||
        ui->InputNombreE->text().isEmpty() ||
        ui->InputTelefonoE->text().isEmpty() ||
        ui->comboBox_2->currentIndex() == -1 ||
        ui->InputPresupuestoE->text().isEmpty() ||
        ui->InputAcercaEvento->text().isEmpty()) {
        /* Mostrar un mensaje de error si alguna entrada está vacía */
        QMessageBox::warning(this, tr("Solicitud de Evento"), tr("Por favor, completa todos los campos."));
        return;
    }

    /* Extraer los datos introducidos por el usuario */
    QString correo = ui->InputCorreoE->text();
    QString nombre = ui->InputNombreE->text();
    QString telefono = ui->InputTelefonoE->text();
    QString tipoEvento = ui->comboBox_2->currentText();
    QString presupuestoString = ui->InputPresupuestoE->text();
    QString detalles = ui->InputAcercaEvento->text();

    /* Validar el correo */
    QRegularExpression correoRegex(R"(\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,}\b)");
    QRegularExpressionMatch correoMatch = correoRegex.match(correo);
    if (!correoMatch.hasMatch()) {
        QMessageBox::warning(this, "Error", "Por favor, ingresa un correo válido.");
            return;
    }

    /* Validar el número de teléfono */
    QRegularExpression telefonoRegex(R"(\b\d{8}\b)");
    QRegularExpressionMatch telefonoMatch = telefonoRegex.match(telefono);
    if (!telefonoMatch.hasMatch()) {
        QMessageBox::warning(this, "Error", "Por favor, ingresa un número de teléfono válido (8 dígitos).");
        return;
    }

    /* Convertir el presupuesto a un número decimal */
    bool ok;
    double presupuesto = presupuestoString.toDouble(&ok);
    if (!ok || presupuesto < 0) {
        QMessageBox::warning(this, "Error", "El presupuesto debe ser un número válido.");
        return;
    }

    /* Crear un nuevo objeto Solicitud con los datos introducidos */
    Solicitud solicitud;
    solicitud.setCorreo(correo);
    solicitud.setNombre(nombre);
    solicitud.setTelefono(telefono);
    solicitud.setTipoEvento(tipoEvento);
    solicitud.setPresupuesto(presupuesto);
    solicitud.setDetalles(detalles);

    /* Añadir la solicitud a la tabla de solicitudes */
    int row = ui->tablaSolicitudes->rowCount();
    ui->tablaSolicitudes->insertRow(row);
    ui->tablaSolicitudes->setItem(row, 0, new QTableWidgetItem(solicitud.getCorreo()));
    ui->tablaSolicitudes->setItem(row, 1, new QTableWidgetItem(solicitud.getNombre()));
    ui->tablaSolicitudes->setItem(row, 2, new QTableWidgetItem(solicitud.getTelefono()));
    ui->tablaSolicitudes->setItem(row, 3, new QTableWidgetItem(solicitud.getTipoEvento()));
    ui->tablaSolicitudes->setItem(row, 4, new QTableWidgetItem(QString::number(solicitud.getPresupuesto())));
    ui->tablaSolicitudes->setItem(row, 5, new QTableWidgetItem(solicitud.getDetalles()));

    /* Limpiar los campos de entrada */
    ui->InputCorreoE->clear();
    ui->InputNombreE->clear();
    ui->InputTelefonoE->clear();
    ui->comboBox_2->setCurrentIndex(-1);
    ui->InputPresupuestoE->clear();
    ui->InputAcercaEvento->clear();

    /* Almacenar los datos en un archivo de texto */
    QFile file("../solicitudes.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << solicitud.getCorreo() << ","
            << solicitud.getNombre() << ","
            << solicitud.getTelefono() << ","
            << solicitud.getTipoEvento() << ","
            << solicitud.getPresupuesto() << ","
            << solicitud.getDetalles() << "\n";
        file.close();
    }

    /* Mostrar un mensaje de éxito */
    QMessageBox::information(this, tr("Éxito"), tr("Solicitud de evento enviada."));
    ui->stackedWidget->setCurrentIndex(principal);
}

void MainWindow::cargarDatosSolicitudes()
{
    QFile file("../solicitudes.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList datos = line.split(",");
        if (datos.size() == 6) {
            QString correo = datos[0];
            QString nombre = datos[1];
            QString telefono = datos[2];
            QString tipoEvento = datos[3];
            double presupuesto = datos[4].toDouble();
            QString detalles = datos[5];

            /* Crear un nuevo objeto Solicitud y añadirlo a la tabla */
            Solicitud solicitud;
            solicitud.setCorreo(correo);
            solicitud.setNombre(nombre);
            solicitud.setTelefono(telefono);
            solicitud.setTipoEvento(tipoEvento);
            solicitud.setPresupuesto(presupuesto);
            solicitud.setDetalles(detalles);

            int row = ui->tablaSolicitudes->rowCount();
            ui->tablaSolicitudes->insertRow(row);
            ui->tablaSolicitudes->setItem(row, 0, new QTableWidgetItem(solicitud.getCorreo()));
            ui->tablaSolicitudes->setItem(row, 1, new QTableWidgetItem(solicitud.getNombre()));
            ui->tablaSolicitudes->setItem(row, 2, new QTableWidgetItem(solicitud.getTelefono()));
            ui->tablaSolicitudes->setItem(row, 3, new QTableWidgetItem(solicitud.getTipoEvento()));
            ui->tablaSolicitudes->setItem(row, 4, new QTableWidgetItem(QString::number(solicitud.getPresupuesto())));
            ui->tablaSolicitudes->setItem(row, 5, new QTableWidgetItem(solicitud.getDetalles()));
        }
    }

    file.close();
}

void MainWindow::eliminarSolicitudActual()
{
    /* Obtener la fila seleccionada */
    int row = ui->tablaSolicitudes->currentRow();
    if (row >= 0) {
        /* Eliminar la fila de la tabla */
        ui->tablaSolicitudes->removeRow(row);

        /* Actualizar el archivo de texto */
        QFile file("../solicitudes.txt");
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            int rowCount = ui->tablaSolicitudes->rowCount();
            for (int i = 0; i < rowCount; ++i) {
                QString correo = ui->tablaSolicitudes->item(i, 0)->text();
                QString nombre = ui->tablaSolicitudes->item(i, 1)->text();
                QString telefono = ui->tablaSolicitudes->item(i, 2)->text();
                QString tipoEvento = ui->tablaSolicitudes->item(i, 3)->text();
                QString presupuesto = ui->tablaSolicitudes->item(i, 4)->text();
                QString detalles = ui->tablaSolicitudes->item(i, 5)->text();

                out << correo << ","
                    << nombre << ","
                    << telefono << ","
                    << tipoEvento << ","
                    << presupuesto << ","
                    << detalles << "\n";
            }
            file.close();
        }
    }
}

void MainWindow::on_pushButton_Eliminar_Solicitud_clicked()
{
    eliminarSolicitudActual();
    ui->stackedWidget->setCurrentIndex(solicitudes);
}


///////////////////////////////////////////////////////////////////////
/* Pantalla Añadir Lugares */

void MainWindow::on_pushButton_anadir_lugar_clicked()
{
     /* Verificar si alguna de las entradas está vacía */
    if (ui->lineEdit_nombre->text().isEmpty() ||
        ui->lineEdit_capacidad->text().isEmpty() ||
        ui->lineEdit_disponibilidad->text().isEmpty() ||
        ui->lineEdit_precio->text().isEmpty() ||
        ui->lineEdit_localizacion->text().isEmpty()) {
        // Muestra un mensaje de error si alguna entrada está vacía
        QMessageBox::warning(this, tr("Lugar"), tr("Por favor, completa todos los campos."));
        return;
    }

    /* Extrae los datos introducidos por el usuario */
    QString nombre = ui->lineEdit_nombre->text();
    bool ok;
    int capacidad = ui->lineEdit_capacidad->text().toInt(&ok);
    if (!ok || capacidad <= 0) {
        QMessageBox::warning(this, "Error", "La capacidad debe ser un número positivo.");
            return;
    }
    QString disponibilidad = ui->lineEdit_disponibilidad->text();
    double precio = ui->lineEdit_precio->text().toDouble(&ok);
    if (!ok || precio < 0) {
        QMessageBox::warning(this, "Error", "El precio debe ser un número positivo.");
            return;
    }
    QString localizacion = ui->lineEdit_localizacion->text();
    bool bajoTecho = ui->comboBox_techo->currentIndex() == 0;  // Suponiendo que la opción 0 es "bajo techo"

    /* Crea un nuevo objeto Lugar con los datos introducidos */
    Lugar lugar;
    lugar.setNombre(nombre);
    lugar.setCapacidad(capacidad);
    lugar.setDisponibilidad(disponibilidad);
    lugar.setPrecio(precio);
    lugar.setLocalizacion(localizacion);
    lugar.setBajoTecho(bajoTecho);

    /* Añade el lugar a la tabla */

    int row = ui->tablaLugares->rowCount();
    ui->tablaLugares->insertRow(row);
    ui->tablaLugares->setItem(row, 0, new QTableWidgetItem(lugar.getNombre()));
    ui->tablaLugares->setItem(row, 1, new QTableWidgetItem(QString::number(lugar.getCapacidad())));
    ui->tablaLugares->setItem(row, 2, new QTableWidgetItem(lugar.getDisponibilidad()));
    ui->tablaLugares->setItem(row, 3, new QTableWidgetItem(QString::number(lugar.getPrecio())));
    ui->tablaLugares->setItem(row, 4, new QTableWidgetItem(lugar.getLocalizacion()));
    ui->tablaLugares->setItem(row, 5, new QTableWidgetItem(lugar.getBajoTecho() ? "Sí" : "No"));

    /* Limpiar los campos de entrada */
    ui->lineEdit_nombre->clear();
    ui->lineEdit_capacidad->clear();
    ui->lineEdit_disponibilidad->clear();
    ui->lineEdit_precio->clear();
    ui->lineEdit_localizacion->clear();
    ui->comboBox_techo->setCurrentIndex(0);

    /* Almacena los datos en un archivo de texto */
    QFile file("../lugares.txt");
    if(file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << lugar.getNombre() << ","
            << QString::number(lugar.getCapacidad()) << ","
            << lugar.getDisponibilidad() << ","
            << QString::number(lugar.getPrecio()) << ","
            << lugar.getLocalizacion() << ","
            << (lugar.getBajoTecho() ? "Sí" : "No") << "\n";
        file.close();
    }
    /* Mensaje de éxito */
    QMessageBox::information(this, "Éxito", "Lugar agregado.");
}

void MainWindow::cargarDatos() {
    QFile file("../lugares.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList datos = line.split(",");
        if (datos.size() == 6) {
            QString nombre = datos[0];
            int capacidad = datos[1].toInt();
            QString disponibilidad = datos[2];
            double precio = datos[3].toDouble();
            QString localizacion = datos[4];
            bool bajoTecho = datos[5].trimmed().toLower() == "sí";

            // crear un nuevo Lugar y añadirlo a la tabla
            Lugar lugar;
            lugar.setNombre(nombre);
            lugar.setCapacidad(capacidad);
            lugar.setDisponibilidad(disponibilidad);
            lugar.setPrecio(precio);
            lugar.setLocalizacion(localizacion);
            lugar.setBajoTecho(bajoTecho);

            int row = ui->tablaLugares->rowCount();
            ui->tablaLugares->insertRow(row);
            ui->tablaLugares->setItem(row, 0, new QTableWidgetItem(lugar.getNombre()));
            ui->tablaLugares->setItem(row, 1, new QTableWidgetItem(QString::number(lugar.getCapacidad())));
            ui->tablaLugares->setItem(row, 2, new QTableWidgetItem(lugar.getDisponibilidad()));
            ui->tablaLugares->setItem(row, 3, new QTableWidgetItem(QString::number(lugar.getPrecio())));
            ui->tablaLugares->setItem(row, 4, new QTableWidgetItem(lugar.getLocalizacion()));
            ui->tablaLugares->setItem(row, 5, new QTableWidgetItem(lugar.getBajoTecho() ? "Sí" : "No"));
        }
    }

    file.close();
}


void MainWindow::eliminarLugarActual()
{
    // Obtener la fila seleccionada
    int row = ui->tablaLugares->currentRow();
    if (row >= 0) {
        // Obtener el nombre del lugar en la fila seleccionada
        QTableWidgetItem* itemNombre = ui->tablaLugares->item(row, 0);
        if (itemNombre) {
            QString nombreLugar = itemNombre->text();

            // Eliminar la fila de la tabla
            ui->tablaLugares->removeRow(row);

            // Eliminar el registro del archivo de texto
            QFile file("../lugares.txt");
            if (file.open(QIODevice::ReadWrite | QIODevice::Text)) {
                QTextStream in(&file);
                QStringList lines;
                while (!in.atEnd()) {
                    QString line = in.readLine();
                    QStringList datos = line.split(",");
                    if (datos.size() == 6 && datos[0] != nombreLugar) {
                        lines.append(line);
                    }
                }
                file.resize(0);
                QTextStream out(&file);
                foreach (const QString& line, lines) {
                    out << line << "\n";
                }
                file.close();

                QMessageBox::information(this, "Eliminar lugar", "El lugar ha sido eliminado correctamente.");
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////
/* Pantalla Proveedores */
void MainWindow::on_pushButton_Cancelar_Proveedores_clicked()
{
    ui->stackedWidget->setCurrentIndex(principal);
}

void MainWindow::on_pushButton_Agregar_Proveedor_clicked()
{
    ui->stackedWidget->setCurrentIndex(agregar_proveedores);
}

void MainWindow::on_pushButton_Eliminar_Proveedor_clicked()
{
    eliminarProveedorActual();
    ui->stackedWidget->setCurrentIndex(proveedores);
}

void MainWindow::cargarDatosProveedores()
{
    // Se abre el archivo
    QFile file("../proveedores.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    // Se lee el archivo
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList datos = line.split(",");
        if (datos.size() == 5) {
            QString servicio = datos[0];
            QString empresa = datos[1];
            int eventos = datos[2].toInt();
            QString valoracion = datos[3];
            double precio = datos[4].toDouble();

            /* Crear un nuevo Proveedor y añadirlo a la tabla */
            Proveedor proveedor;
            proveedor.setServicio(servicio);
            proveedor.setEmpresa(empresa);
            proveedor.setEventos(eventos);
            proveedor.setValoracion(valoracion);
            proveedor.setPrecio(precio);

            // Se inserta en la tablaProveedores
            int row = ui->tablaProveedores->rowCount();
            ui->tablaProveedores->insertRow(row);
            ui->tablaProveedores->setItem(row, 0, new QTableWidgetItem(proveedor.getServicio()));
            ui->tablaProveedores->setItem(row, 1, new QTableWidgetItem(proveedor.getEmpresa()));
            ui->tablaProveedores->setItem(row, 2, new QTableWidgetItem(QString::number(proveedor.getEventos())));
            ui->tablaProveedores->setItem(row, 3, new QTableWidgetItem(proveedor.getValoracion()));
            ui->tablaProveedores->setItem(row, 4, new QTableWidgetItem(QString::number(proveedor.getPrecio())));
        }
    }

    // Se cierra el archivo
    file.close();
}


void MainWindow::eliminarProveedorActual()
{
    /* Obtener el índice de la fila seleccionada */
    int selectedRow = ui->tablaProveedores->currentRow();
    if (selectedRow >= 0)
    {
        /* Eliminar la fila seleccionada de la tabla */
        ui->tablaProveedores->removeRow(selectedRow);

        /* Abrir el archivo de proveedores en modo escritura */
        QFile file("../proveedores.txt");
        if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QTextStream out(&file);

            /* Recorrer todas las filas de la tabla y guardar los datos en el archivo */
            int rowCount = ui->tablaProveedores->rowCount();
            for (int row = 0; row < rowCount; ++row)
            {
                QString servicio = ui->tablaProveedores->item(row, 0)->text();
                QString empresa = ui->tablaProveedores->item(row, 1)->text();
                int eventos = ui->tablaProveedores->item(row, 2)->text().toInt();
                QString valoracion = ui->tablaProveedores->item(row, 3)->text();
                double precio = ui->tablaProveedores->item(row, 4)->text().toDouble();

                out << servicio << ","
                    << empresa << ","
                    << eventos << ","
                    << valoracion << ","
                    << precio << "\n";
            }

            file.close();
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
/* Pantalla Añadir Proveedores */

void MainWindow::on_pushButton_Regresar_Anadir_Proveedor_clicked()
{
    ui->stackedWidget->setCurrentIndex(proveedores);
}

void MainWindow::on_pushButton_anadir_proveedor_clicked()
{
    anadirProvedor();
}

void MainWindow::anadirProvedor()
{
    /* Verificar si alguna de las entradas está vacía */
    if (ui->lineEdit_servicio->text().isEmpty() ||
        ui->lineEdit_empresa->text().isEmpty() ||
        ui->lineEdit_cantidadEventos->text().isEmpty() ||
        ui->lineEdit_valoracion->text().isEmpty() ||
        ui->lineEdit_precio_2->text().isEmpty()) {
        /*  Muestra un mensaje de error si alguna entrada está vacía */
        QMessageBox::warning(this, tr("Proveedor"), tr("Por favor, completa todos los campos."));
        return;
    }

    /* Extraer los datos introducidos por el usuario */
    QString servicio = ui->lineEdit_servicio->text();
    QString empresa = ui->lineEdit_empresa->text();
    bool ok;
    int eventos = ui->lineEdit_cantidadEventos->text().toInt(&ok);
    if (!ok || eventos < 0) {
        QMessageBox::warning(this, "Error", "La cantidad de eventos debe ser un número válido.");
            return;
    }
    QString valoracion = ui->lineEdit_valoracion->text();
    double precio = ui->lineEdit_precio_2->text().toDouble(&ok);
    if (!ok || precio < 0) {
        QMessageBox::warning(this, "Error", "El precio debe ser un número válido.");
            return;
    }

    /* Crear un nuevo objeto Proveedor con los datos introducidos */
    Proveedor proveedor;
    proveedor.setServicio(servicio);
    proveedor.setEmpresa(empresa);
    proveedor.setEventos(eventos);
    proveedor.setValoracion(valoracion);
    proveedor.setPrecio(precio);

    /* Añadir el proveedor a la tabla */

    int row = ui->tablaProveedores->rowCount();
    ui->tablaProveedores->insertRow(row);
    ui->tablaProveedores->setItem(row, 0, new QTableWidgetItem(proveedor.getServicio()));
    ui->tablaProveedores->setItem(row, 1, new QTableWidgetItem(proveedor.getEmpresa()));
    ui->tablaProveedores->setItem(row, 2, new QTableWidgetItem(QString::number(proveedor.getEventos())));
    ui->tablaProveedores->setItem(row, 3, new QTableWidgetItem(proveedor.getValoracion()));
    ui->tablaProveedores->setItem(row, 4, new QTableWidgetItem(QString::number(proveedor.getPrecio())));

    /* Limpiar los campos de entrada */
    ui->lineEdit_servicio->clear();
    ui->lineEdit_empresa->clear();
    ui->lineEdit_cantidadEventos->clear();
    ui->lineEdit_valoracion->clear();
    ui->lineEdit_precio_2->clear();

    /* Almacenar los datos en un archivo de texto */
    QFile file("../proveedores.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << proveedor.getServicio() << ","
            << proveedor.getEmpresa() << ","
            << QString::number(proveedor.getEventos()) << ","
            << proveedor.getValoracion() << ","
            << QString::number(proveedor.getPrecio()) << "\n";
        file.close();
    }
    /* Mostrar mensaje de éxito */
    QMessageBox::information(this, "Éxito", "Proveedor agregado.");
}
//////////////////////////////////////////////////////////////



///////////////////// FUNCIONALIDAD DE VERIFICACION PASABLE A OTRO ARCHIVO /////////////

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
    }
    return true;
}











