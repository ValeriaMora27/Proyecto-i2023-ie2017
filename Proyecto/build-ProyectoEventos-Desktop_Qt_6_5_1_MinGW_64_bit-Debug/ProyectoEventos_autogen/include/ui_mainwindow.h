/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page00_Inicio;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton_Registrarse;
    QPushButton *pushButton_Iniciar;
    QWidget *page01_Login;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *InputNombre_2;
    QLineEdit *InputContra_3;
    QPushButton *pushButton_Cancelar_2;
    QPushButton *pushButton_Iniciar_2;
    QWidget *page02_Registro;
    QLabel *label_3;
    QLabel *Nombre;
    QLabel *Correo;
    QLabel *Rol;
    QLabel *contrasena;
    QLabel *ConfirmContra;
    QComboBox *InputRol;
    QLineEdit *InputCorreo;
    QLineEdit *InputNombre;
    QLineEdit *InputContra;
    QLineEdit *InputContra_2;
    QPushButton *pushButton_Cancelar;
    QPushButton *pushButton_Registrar;
    QWidget *page03_Principal;
    QLabel *label_4;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QPushButton *pushButton_bailes;
    QPushButton *pushButton_conferencias;
    QPushButton *pushButton_graduaciones;
    QPushButton *pushButton_conciertos;
    QPushButton *pushButton_bodas;
    QWidget *page04_Eventos;
    QLabel *label_11;
    QPushButton *pushButton_Cancelar_Eventos;
    QWidget *page05_CrearEvento;
    QLabel *label_10;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLineEdit *InputNombre_3;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QPlainTextEdit *plainTextEdit;
    QLineEdit *InputNombre_4;
    QLineEdit *InputNombre_5;
    QLineEdit *InputNombre_6;
    QPushButton *pushButton_Cancelar_3;
    QLabel *label_31;
    QComboBox *comboBox;
    QPushButton *pushButton_Crear;
    QWidget *page06_Lugares;
    QLabel *label_9;
    QWidget *page07_Proveedores;
    QLabel *label_8;
    QLabel *label_32;
    QWidget *page08_Estadisticas;
    QLabel *label_7;
    QWidget *page09_SolicitudesE;
    QLabel *label_6;
    QWidget *page10_Contacto;
    QLabel *label_5;
    QLineEdit *InputNombre_7;
    QLabel *Nombre_2;
    QLabel *Nombre_3;
    QLineEdit *InputNombre_8;
    QLineEdit *InputNombre_9;
    QLabel *Nombre_4;
    QComboBox *comboBox_2;
    QLabel *Nombre_5;
    QLabel *Nombre_6;
    QLineEdit *InputNombre_10;
    QLabel *Nombre_7;
    QPlainTextEdit *plainTextEdit_2;
    QPushButton *pushButton_Regresar;
    QPushButton *pushButton_Enviar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"background-color: #E0E6F0;\n"
"}\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 800, 600));
        page00_Inicio = new QWidget();
        page00_Inicio->setObjectName("page00_Inicio");
        label_2 = new QLabel(page00_Inicio);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 220, 311, 61));
        QFont font;
        font.setPointSize(18);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label = new QLabel(page00_Inicio);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 70, 431, 71));
        QFont font1;
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setItalic(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        pushButton_Registrarse = new QPushButton(page00_Inicio);
        pushButton_Registrarse->setObjectName("pushButton_Registrarse");
        pushButton_Registrarse->setGeometry(QRect(220, 390, 121, 41));
        QFont font2;
        font2.setPointSize(10);
        pushButton_Registrarse->setFont(font2);
        pushButton_Iniciar = new QPushButton(page00_Inicio);
        pushButton_Iniciar->setObjectName("pushButton_Iniciar");
        pushButton_Iniciar->setGeometry(QRect(480, 390, 121, 41));
        pushButton_Iniciar->setFont(font2);
        pushButton_Iniciar->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->addWidget(page00_Inicio);
        page01_Login = new QWidget();
        page01_Login->setObjectName("page01_Login");
        label_12 = new QLabel(page01_Login);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(260, 60, 231, 51));
        QFont font3;
        font3.setPointSize(20);
        label_12->setFont(font3);
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(page01_Login);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(200, 180, 61, 21));
        QFont font4;
        font4.setPointSize(12);
        label_13->setFont(font4);
        label_14 = new QLabel(page01_Login);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(190, 260, 101, 21));
        label_14->setFont(font4);
        InputNombre_2 = new QLineEdit(page01_Login);
        InputNombre_2->setObjectName("InputNombre_2");
        InputNombre_2->setGeometry(QRect(310, 170, 291, 31));
        InputContra_3 = new QLineEdit(page01_Login);
        InputContra_3->setObjectName("InputContra_3");
        InputContra_3->setGeometry(QRect(310, 250, 291, 31));
        InputContra_3->setEchoMode(QLineEdit::Password);
        pushButton_Cancelar_2 = new QPushButton(page01_Login);
        pushButton_Cancelar_2->setObjectName("pushButton_Cancelar_2");
        pushButton_Cancelar_2->setGeometry(QRect(300, 400, 121, 41));
        pushButton_Cancelar_2->setFont(font2);
        pushButton_Cancelar_2->setAutoDefault(false);
        pushButton_Cancelar_2->setFlat(false);
        pushButton_Iniciar_2 = new QPushButton(page01_Login);
        pushButton_Iniciar_2->setObjectName("pushButton_Iniciar_2");
        pushButton_Iniciar_2->setGeometry(QRect(480, 400, 121, 41));
        pushButton_Iniciar_2->setFont(font2);
        pushButton_Iniciar_2->setAutoDefault(false);
        pushButton_Iniciar_2->setFlat(false);
        stackedWidget->addWidget(page01_Login);
        page02_Registro = new QWidget();
        page02_Registro->setObjectName("page02_Registro");
        label_3 = new QLabel(page02_Registro);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 40, 261, 51));
        QFont font5;
        font5.setPointSize(20);
        font5.setBold(false);
        label_3->setFont(font5);
        label_3->setAlignment(Qt::AlignCenter);
        Nombre = new QLabel(page02_Registro);
        Nombre->setObjectName("Nombre");
        Nombre->setGeometry(QRect(170, 130, 71, 16));
        Nombre->setFont(font4);
        Correo = new QLabel(page02_Registro);
        Correo->setObjectName("Correo");
        Correo->setGeometry(QRect(170, 200, 61, 16));
        Correo->setFont(font4);
        Rol = new QLabel(page02_Registro);
        Rol->setObjectName("Rol");
        Rol->setGeometry(QRect(170, 270, 49, 16));
        Rol->setFont(font4);
        contrasena = new QLabel(page02_Registro);
        contrasena->setObjectName("contrasena");
        contrasena->setGeometry(QRect(170, 330, 101, 16));
        contrasena->setFont(font4);
        ConfirmContra = new QLabel(page02_Registro);
        ConfirmContra->setObjectName("ConfirmContra");
        ConfirmContra->setGeometry(QRect(170, 390, 91, 41));
        ConfirmContra->setFont(font4);
        InputRol = new QComboBox(page02_Registro);
        InputRol->addItem(QString());
        InputRol->addItem(QString());
        InputRol->setObjectName("InputRol");
        InputRol->setGeometry(QRect(290, 260, 141, 31));
        InputRol->setFont(font4);
        InputRol->setStyleSheet(QString::fromUtf8(""));
        InputCorreo = new QLineEdit(page02_Registro);
        InputCorreo->setObjectName("InputCorreo");
        InputCorreo->setGeometry(QRect(290, 190, 291, 31));
        InputNombre = new QLineEdit(page02_Registro);
        InputNombre->setObjectName("InputNombre");
        InputNombre->setGeometry(QRect(290, 120, 291, 31));
        InputContra = new QLineEdit(page02_Registro);
        InputContra->setObjectName("InputContra");
        InputContra->setGeometry(QRect(290, 320, 291, 31));
        InputContra->setEchoMode(QLineEdit::Password);
        InputContra_2 = new QLineEdit(page02_Registro);
        InputContra_2->setObjectName("InputContra_2");
        InputContra_2->setGeometry(QRect(290, 400, 291, 31));
        InputContra_2->setEchoMode(QLineEdit::Password);
        pushButton_Cancelar = new QPushButton(page02_Registro);
        pushButton_Cancelar->setObjectName("pushButton_Cancelar");
        pushButton_Cancelar->setGeometry(QRect(270, 500, 91, 31));
        pushButton_Cancelar->setFont(font2);
        pushButton_Cancelar->setAutoDefault(false);
        pushButton_Cancelar->setFlat(false);
        pushButton_Registrar = new QPushButton(page02_Registro);
        pushButton_Registrar->setObjectName("pushButton_Registrar");
        pushButton_Registrar->setGeometry(QRect(510, 500, 91, 31));
        pushButton_Registrar->setFont(font2);
        pushButton_Registrar->setAutoDefault(false);
        pushButton_Registrar->setFlat(false);
        stackedWidget->addWidget(page02_Registro);
        page03_Principal = new QWidget();
        page03_Principal->setObjectName("page03_Principal");
        label_4 = new QLabel(page03_Principal);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(250, 30, 361, 51));
        QFont font6;
        font6.setPointSize(20);
        font6.setBold(true);
        label_4->setFont(font6);
        label_4->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(page03_Principal);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(130, 100, 171, 21));
        QFont font7;
        font7.setPointSize(12);
        font7.setBold(true);
        label_15->setFont(font7);
        label_16 = new QLabel(page03_Principal);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(140, 120, 511, 51));
        label_16->setFont(font4);
        label_17 = new QLabel(page03_Principal);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(130, 200, 171, 21));
        label_17->setFont(font7);
        label_22 = new QLabel(page03_Principal);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(150, 370, 61, 21));
        QFont font8;
        font8.setPointSize(10);
        font8.setBold(true);
        label_22->setFont(font8);
        label_23 = new QLabel(page03_Principal);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(390, 370, 101, 21));
        label_23->setFont(font8);
        label_24 = new QLabel(page03_Principal);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(630, 370, 111, 21));
        label_24->setFont(font8);
        label_24->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(page03_Principal);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(210, 530, 131, 21));
        label_25->setFont(font8);
        label_25->setAlignment(Qt::AlignCenter);
        label_26 = new QLabel(page03_Principal);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(560, 530, 41, 21));
        label_26->setFont(font8);
        pushButton_bailes = new QPushButton(page03_Principal);
        pushButton_bailes->setObjectName("pushButton_bailes");
        pushButton_bailes->setGeometry(QRect(100, 250, 201, 111));
        pushButton_bailes->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/Bailes.jpg)"));
        pushButton_conferencias = new QPushButton(page03_Principal);
        pushButton_conferencias->setObjectName("pushButton_conferencias");
        pushButton_conferencias->setGeometry(QRect(330, 250, 201, 111));
        pushButton_conferencias->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/Conferencias.jpg)"));
        pushButton_graduaciones = new QPushButton(page03_Principal);
        pushButton_graduaciones->setObjectName("pushButton_graduaciones");
        pushButton_graduaciones->setGeometry(QRect(570, 250, 201, 111));
        pushButton_graduaciones->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/Graduaciones.jpg)"));
        pushButton_conciertos = new QPushButton(page03_Principal);
        pushButton_conciertos->setObjectName("pushButton_conciertos");
        pushButton_conciertos->setGeometry(QRect(180, 410, 201, 111));
        pushButton_conciertos->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/Conciertos.jpg)"));
        pushButton_bodas = new QPushButton(page03_Principal);
        pushButton_bodas->setObjectName("pushButton_bodas");
        pushButton_bodas->setGeometry(QRect(470, 410, 201, 111));
        pushButton_bodas->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/Bodas.jpg)"));
        stackedWidget->addWidget(page03_Principal);
        pushButton_bodas->raise();
        pushButton_graduaciones->raise();
        pushButton_conferencias->raise();
        pushButton_bailes->raise();
        label_4->raise();
        label_15->raise();
        label_16->raise();
        label_17->raise();
        label_22->raise();
        label_23->raise();
        label_24->raise();
        label_25->raise();
        label_26->raise();
        pushButton_conciertos->raise();
        page04_Eventos = new QWidget();
        page04_Eventos->setObjectName("page04_Eventos");
        label_11 = new QLabel(page04_Eventos);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(260, 60, 281, 51));
        label_11->setFont(font3);
        label_11->setAlignment(Qt::AlignCenter);
        pushButton_Cancelar_Eventos = new QPushButton(page04_Eventos);
        pushButton_Cancelar_Eventos->setObjectName("pushButton_Cancelar_Eventos");
        pushButton_Cancelar_Eventos->setGeometry(QRect(20, 520, 83, 29));
        stackedWidget->addWidget(page04_Eventos);
        page05_CrearEvento = new QWidget();
        page05_CrearEvento->setObjectName("page05_CrearEvento");
        label_10 = new QLabel(page05_CrearEvento);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(320, 20, 201, 51));
        label_10->setFont(font3);
        label_10->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(page05_CrearEvento);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(190, 80, 141, 16));
        label_18->setFont(font4);
        label_19 = new QLabel(page05_CrearEvento);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(190, 130, 141, 16));
        label_19->setFont(font4);
        label_20 = new QLabel(page05_CrearEvento);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(190, 180, 141, 16));
        label_20->setFont(font4);
        label_27 = new QLabel(page05_CrearEvento);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(190, 280, 141, 21));
        label_27->setFont(font4);
        label_28 = new QLabel(page05_CrearEvento);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(190, 330, 141, 16));
        label_28->setFont(font4);
        label_29 = new QLabel(page05_CrearEvento);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(190, 390, 141, 16));
        label_29->setFont(font4);
        label_30 = new QLabel(page05_CrearEvento);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(190, 440, 141, 16));
        label_30->setFont(font4);
        InputNombre_3 = new QLineEdit(page05_CrearEvento);
        InputNombre_3->setObjectName("InputNombre_3");
        InputNombre_3->setGeometry(QRect(360, 80, 291, 31));
        dateEdit = new QDateEdit(page05_CrearEvento);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(360, 130, 110, 22));
        dateEdit->setDateTime(QDateTime(QDate(2023, 9, 15), QTime(12, 0, 0)));
        dateEdit->setMinimumDateTime(QDateTime(QDate(2023, 1, 2), QTime(12, 0, 0)));
        timeEdit = new QTimeEdit(page05_CrearEvento);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(360, 180, 118, 22));
        plainTextEdit = new QPlainTextEdit(page05_CrearEvento);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(360, 440, 311, 51));
        InputNombre_4 = new QLineEdit(page05_CrearEvento);
        InputNombre_4->setObjectName("InputNombre_4");
        InputNombre_4->setGeometry(QRect(360, 280, 291, 31));
        InputNombre_5 = new QLineEdit(page05_CrearEvento);
        InputNombre_5->setObjectName("InputNombre_5");
        InputNombre_5->setGeometry(QRect(360, 330, 291, 31));
        InputNombre_6 = new QLineEdit(page05_CrearEvento);
        InputNombre_6->setObjectName("InputNombre_6");
        InputNombre_6->setGeometry(QRect(360, 380, 291, 31));
        pushButton_Cancelar_3 = new QPushButton(page05_CrearEvento);
        pushButton_Cancelar_3->setObjectName("pushButton_Cancelar_3");
        pushButton_Cancelar_3->setGeometry(QRect(260, 520, 91, 31));
        pushButton_Cancelar_3->setFont(font2);
        pushButton_Cancelar_3->setAutoDefault(false);
        pushButton_Cancelar_3->setFlat(false);
        label_31 = new QLabel(page05_CrearEvento);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(190, 230, 141, 16));
        label_31->setFont(font4);
        comboBox = new QComboBox(page05_CrearEvento);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(360, 230, 121, 22));
        pushButton_Crear = new QPushButton(page05_CrearEvento);
        pushButton_Crear->setObjectName("pushButton_Crear");
        pushButton_Crear->setGeometry(QRect(520, 520, 91, 31));
        stackedWidget->addWidget(page05_CrearEvento);
        page06_Lugares = new QWidget();
        page06_Lugares->setObjectName("page06_Lugares");
        label_9 = new QLabel(page06_Lugares);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(160, 40, 501, 61));
        label_9->setFont(font3);
        label_9->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page06_Lugares);
        page07_Proveedores = new QWidget();
        page07_Proveedores->setObjectName("page07_Proveedores");
        label_8 = new QLabel(page07_Proveedores);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(280, 70, 261, 41));
        label_8->setFont(font3);
        label_8->setAlignment(Qt::AlignCenter);
        label_32 = new QLabel(page07_Proveedores);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(130, 140, 81, 16));
        stackedWidget->addWidget(page07_Proveedores);
        page08_Estadisticas = new QWidget();
        page08_Estadisticas->setObjectName("page08_Estadisticas");
        label_7 = new QLabel(page08_Estadisticas);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(250, 60, 321, 61));
        label_7->setFont(font3);
        label_7->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page08_Estadisticas);
        page09_SolicitudesE = new QWidget();
        page09_SolicitudesE->setObjectName("page09_SolicitudesE");
        label_6 = new QLabel(page09_SolicitudesE);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(280, 60, 271, 61));
        label_6->setFont(font3);
        stackedWidget->addWidget(page09_SolicitudesE);
        page10_Contacto = new QWidget();
        page10_Contacto->setObjectName("page10_Contacto");
        label_5 = new QLabel(page10_Contacto);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(280, 50, 241, 41));
        label_5->setFont(font3);
        InputNombre_7 = new QLineEdit(page10_Contacto);
        InputNombre_7->setObjectName("InputNombre_7");
        InputNombre_7->setGeometry(QRect(320, 130, 291, 31));
        Nombre_2 = new QLabel(page10_Contacto);
        Nombre_2->setObjectName("Nombre_2");
        Nombre_2->setGeometry(QRect(190, 130, 71, 16));
        Nombre_2->setFont(font4);
        Nombre_3 = new QLabel(page10_Contacto);
        Nombre_3->setObjectName("Nombre_3");
        Nombre_3->setGeometry(QRect(190, 180, 71, 16));
        Nombre_3->setFont(font4);
        InputNombre_8 = new QLineEdit(page10_Contacto);
        InputNombre_8->setObjectName("InputNombre_8");
        InputNombre_8->setGeometry(QRect(320, 180, 291, 31));
        InputNombre_9 = new QLineEdit(page10_Contacto);
        InputNombre_9->setObjectName("InputNombre_9");
        InputNombre_9->setGeometry(QRect(320, 230, 291, 31));
        Nombre_4 = new QLabel(page10_Contacto);
        Nombre_4->setObjectName("Nombre_4");
        Nombre_4->setGeometry(QRect(190, 230, 71, 16));
        Nombre_4->setFont(font4);
        comboBox_2 = new QComboBox(page10_Contacto);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(320, 290, 141, 31));
        Nombre_5 = new QLabel(page10_Contacto);
        Nombre_5->setObjectName("Nombre_5");
        Nombre_5->setGeometry(QRect(190, 300, 131, 16));
        Nombre_5->setFont(font4);
        Nombre_6 = new QLabel(page10_Contacto);
        Nombre_6->setObjectName("Nombre_6");
        Nombre_6->setGeometry(QRect(190, 350, 101, 21));
        Nombre_6->setFont(font4);
        InputNombre_10 = new QLineEdit(page10_Contacto);
        InputNombre_10->setObjectName("InputNombre_10");
        InputNombre_10->setGeometry(QRect(320, 350, 291, 31));
        Nombre_7 = new QLabel(page10_Contacto);
        Nombre_7->setObjectName("Nombre_7");
        Nombre_7->setGeometry(QRect(190, 410, 101, 41));
        Nombre_7->setFont(font4);
        plainTextEdit_2 = new QPlainTextEdit(page10_Contacto);
        plainTextEdit_2->setObjectName("plainTextEdit_2");
        plainTextEdit_2->setGeometry(QRect(320, 410, 291, 81));
        pushButton_Regresar = new QPushButton(page10_Contacto);
        pushButton_Regresar->setObjectName("pushButton_Regresar");
        pushButton_Regresar->setGeometry(QRect(220, 510, 91, 31));
        pushButton_Regresar->setFont(font2);
        pushButton_Regresar->setAutoDefault(false);
        pushButton_Regresar->setFlat(false);
        pushButton_Enviar = new QPushButton(page10_Contacto);
        pushButton_Enviar->setObjectName("pushButton_Enviar");
        pushButton_Enviar->setGeometry(QRect(520, 510, 91, 31));
        pushButton_Enviar->setFont(font2);
        pushButton_Enviar->setAutoDefault(false);
        pushButton_Enviar->setFlat(false);
        stackedWidget->addWidget(page10_Contacto);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);
        pushButton_Cancelar_2->setDefault(false);
        pushButton_Iniciar_2->setDefault(false);
        pushButton_Cancelar->setDefault(false);
        pushButton_Registrar->setDefault(false);
        pushButton_Cancelar_3->setDefault(false);
        pushButton_Regresar->setDefault(false);
        pushButton_Enviar->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\302\241Gracias por visitarnos!", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "SerVal Event Solutions", nullptr));
        pushButton_Registrarse->setText(QCoreApplication::translate("MainWindow", "Registrarse", nullptr));
        pushButton_Iniciar->setText(QCoreApplication::translate("MainWindow", "Iniciar Sesi\303\263n", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Iniciar sesi\303\263n", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Correo", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Contrase\303\261a", nullptr));
        pushButton_Cancelar_2->setText(QCoreApplication::translate("MainWindow", "Cancelar", nullptr));
        pushButton_Iniciar_2->setText(QCoreApplication::translate("MainWindow", "Iniciar Sesi\303\263n", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Registrar Cuenta", nullptr));
        Nombre->setText(QCoreApplication::translate("MainWindow", "Nombre", nullptr));
        Correo->setText(QCoreApplication::translate("MainWindow", "Correo", nullptr));
        Rol->setText(QCoreApplication::translate("MainWindow", "Rol", nullptr));
        contrasena->setText(QCoreApplication::translate("MainWindow", "Contrase\303\261a", nullptr));
        ConfirmContra->setText(QCoreApplication::translate("MainWindow", "Confirmar \n"
"contrase\303\261a", nullptr));
        InputRol->setItemText(0, QCoreApplication::translate("MainWindow", "Usuario", nullptr));
        InputRol->setItemText(1, QCoreApplication::translate("MainWindow", "Administrador", nullptr));

        pushButton_Cancelar->setText(QCoreApplication::translate("MainWindow", "Cancelar", nullptr));
        pushButton_Registrar->setText(QCoreApplication::translate("MainWindow", "Registrarse", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "SerVal Event Solutions", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\302\277Qui\303\251nes somos?", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Somos una empresa dedicada a brindar soluciones innovadoras en la \n"
"planificaci\303\263n, organizaci\303\263n y gesti\303\263n de eventos extraordinarios.", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\302\277Qu\303\251 ofrecemos?", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Bailes", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Conferencias", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Graduaciones", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Conciertos", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Bodas", nullptr));
        pushButton_bailes->setText(QString());
        pushButton_conferencias->setText(QString());
        pushButton_graduaciones->setText(QString());
        pushButton_conciertos->setText(QString());
        pushButton_bodas->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "Eventos pr\303\263ximos", nullptr));
        pushButton_Cancelar_Eventos->setText(QCoreApplication::translate("MainWindow", "Cancelar", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Crear evento", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Nombre del evento:", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Fecha:", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Hora de inicio:", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Lugar del evento:", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Proveedores:", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Costo del evento:", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Detalles:", nullptr));
        pushButton_Cancelar_3->setText(QCoreApplication::translate("MainWindow", "Cancelar", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Tipo del evento:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Bodas", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Bailes", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Bodas", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Conferencias", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Graduaciones", nullptr));

        pushButton_Crear->setText(QCoreApplication::translate("MainWindow", "Crear", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Lugares que tenemos para eventos", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Lista de proveedores", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Proveedores", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Estad\303\255sticas de los eventos", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Solicitudes de eventos", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\302\241Reserve mi evento!", nullptr));
        Nombre_2->setText(QCoreApplication::translate("MainWindow", "Nombre:", nullptr));
        Nombre_3->setText(QCoreApplication::translate("MainWindow", "Correo:", nullptr));
        Nombre_4->setText(QCoreApplication::translate("MainWindow", "Tel\303\251fono:", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "Bodas", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "Bailes", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "Bodas", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MainWindow", "Conferencias", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("MainWindow", "Graduaciones", nullptr));

        Nombre_5->setText(QCoreApplication::translate("MainWindow", "Tipo del evento:", nullptr));
        Nombre_6->setText(QCoreApplication::translate("MainWindow", "Presupuesto:", nullptr));
        Nombre_7->setText(QCoreApplication::translate("MainWindow", "Acerca de \n"
"su evento:", nullptr));
        pushButton_Regresar->setText(QCoreApplication::translate("MainWindow", "Regresar", nullptr));
        pushButton_Enviar->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
