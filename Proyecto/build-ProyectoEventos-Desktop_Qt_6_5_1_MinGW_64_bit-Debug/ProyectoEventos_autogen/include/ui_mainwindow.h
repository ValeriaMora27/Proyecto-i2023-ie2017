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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
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
    QPushButton *pushButton_Cancelar_2;
    QPushButton *pushButton_Iniciar_2;
    QWidget *layoutWidget;
    QFormLayout *formLayout_4;
    QLabel *label_13;
    QLineEdit *InputNombre_2;
    QLabel *label_14;
    QLineEdit *InputContra_3;
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
    QTableWidget *tablaEventos;
    QWidget *page05_CrearEvento;
    QLabel *label_10;
    QPushButton *pushButton_Cancelar_3;
    QPushButton *pushButton_Crear;
    QWidget *layoutWidget1;
    QFormLayout *formLayout_3;
    QLabel *label_18;
    QLineEdit *InputNombre_3;
    QLabel *label_19;
    QDateEdit *dateEdit;
    QLabel *label_20;
    QTimeEdit *timeEdit;
    QLabel *label_31;
    QComboBox *comboBox;
    QLabel *label_27;
    QLineEdit *InputNombre_4;
    QLabel *label_28;
    QLineEdit *InputNombre_5;
    QLabel *label_29;
    QLineEdit *InputNombre_6;
    QLabel *label_30;
    QPlainTextEdit *plainTextEdit;
    QWidget *page06_Lugares;
    QLabel *label_9;
    QPushButton *pushButton_Cancelar_Lugares;
    QPushButton *pushButton_Eliminar_Lugares;
    QPushButton *pushButton_Agregar_Lugares;
    QWidget *page07_Proveedores;
    QLabel *label_8;
    QLabel *label_32;
    QPushButton *pushButton_Cancelar_Proveedores;
    QWidget *page08_Estadisticas;
    QLabel *label_7;
    QPushButton *pushButton_Cancelar_Estadisticas;
    QWidget *page09_SolicitudesE;
    QLabel *label_6;
    QPushButton *pushButton_Cancelar_Solicitud;
    QWidget *page10_Contacto;
    QLabel *label_5;
    QPushButton *pushButton_Regresar;
    QPushButton *pushButton_Enviar;
    QWidget *layoutWidget2;
    QFormLayout *formLayout;
    QLabel *label_correo;
    QLineEdit *InputNombre_7;
    QLabel *label_nombre;
    QLineEdit *InputNombre_8;
    QLabel *label_telefono;
    QLineEdit *InputNombre_9;
    QLabel *label_tipo_evento;
    QComboBox *comboBox_2;
    QLineEdit *InputNombre_10;
    QLabel *label__acerca_de;
    QLineEdit *InputNombre_11;
    QLabel *label_presupuesto;
    QWidget *page11_Anadir_Lugar;
    QPushButton *pushButton_anadir_lugar;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_anada_lugar;
    QPushButton *pushButton_Regresar_Anadir_Lugares;
    QWidget *layoutWidget4;
    QFormLayout *formLayout_2;
    QLabel *label_nombre_lugar;
    QLineEdit *lineEdit_nombre;
    QLabel *label_capacidad;
    QLineEdit *lineEdit_capacidad;
    QLabel *label_disponibilidad;
    QLineEdit *lineEdit_disponibilidad;
    QLabel *label_precio;
    QLineEdit *lineEdit_precio;
    QLabel *label_localizacion;
    QLineEdit *lineEdit_localizacion;
    QLabel *label_bajo_techo;
    QComboBox *comboBox_techo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(812, 614);
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
        stackedWidget->setGeometry(QRect(0, 0, 811, 641));
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
        label_12->setGeometry(QRect(290, 80, 231, 51));
        QFont font3;
        font3.setPointSize(20);
        label_12->setFont(font3);
        label_12->setAlignment(Qt::AlignCenter);
        pushButton_Cancelar_2 = new QPushButton(page01_Login);
        pushButton_Cancelar_2->setObjectName("pushButton_Cancelar_2");
        pushButton_Cancelar_2->setGeometry(QRect(240, 320, 121, 41));
        pushButton_Cancelar_2->setFont(font2);
        pushButton_Cancelar_2->setAutoDefault(false);
        pushButton_Cancelar_2->setFlat(false);
        pushButton_Iniciar_2 = new QPushButton(page01_Login);
        pushButton_Iniciar_2->setObjectName("pushButton_Iniciar_2");
        pushButton_Iniciar_2->setGeometry(QRect(450, 320, 121, 41));
        pushButton_Iniciar_2->setFont(font2);
        pushButton_Iniciar_2->setAutoDefault(false);
        pushButton_Iniciar_2->setFlat(false);
        layoutWidget = new QWidget(page01_Login);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(200, 170, 401, 111));
        formLayout_4 = new QFormLayout(layoutWidget);
        formLayout_4->setObjectName("formLayout_4");
        formLayout_4->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_4->setHorizontalSpacing(16);
        formLayout_4->setVerticalSpacing(43);
        formLayout_4->setContentsMargins(3, 3, 3, 3);
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");
        QFont font4;
        font4.setPointSize(12);
        label_13->setFont(font4);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_13);

        InputNombre_2 = new QLineEdit(layoutWidget);
        InputNombre_2->setObjectName("InputNombre_2");

        formLayout_4->setWidget(0, QFormLayout::FieldRole, InputNombre_2);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName("label_14");
        label_14->setFont(font4);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_14);

        InputContra_3 = new QLineEdit(layoutWidget);
        InputContra_3->setObjectName("InputContra_3");
        InputContra_3->setEchoMode(QLineEdit::Password);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, InputContra_3);

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
        Nombre->setGeometry(QRect(180, 120, 73, 27));
        Nombre->setFont(font4);
        Correo = new QLabel(page02_Registro);
        Correo->setObjectName("Correo");
        Correo->setGeometry(QRect(180, 190, 60, 27));
        Correo->setFont(font4);
        Rol = new QLabel(page02_Registro);
        Rol->setObjectName("Rol");
        Rol->setGeometry(QRect(180, 260, 28, 27));
        Rol->setFont(font4);
        contrasena = new QLabel(page02_Registro);
        contrasena->setObjectName("contrasena");
        contrasena->setGeometry(QRect(170, 320, 98, 27));
        contrasena->setFont(font4);
        ConfirmContra = new QLabel(page02_Registro);
        ConfirmContra->setObjectName("ConfirmContra");
        ConfirmContra->setGeometry(QRect(170, 390, 95, 54));
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
        label_4->setGeometry(QRect(210, 30, 361, 51));
        QFont font6;
        font6.setPointSize(20);
        font6.setBold(true);
        label_4->setFont(font6);
        label_4->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(page03_Principal);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(90, 90, 160, 27));
        QFont font7;
        font7.setPointSize(12);
        font7.setBold(true);
        label_15->setFont(font7);
        label_16 = new QLabel(page03_Principal);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(100, 120, 511, 51));
        label_16->setFont(font4);
        label_17 = new QLabel(page03_Principal);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(90, 200, 161, 27));
        label_17->setFont(font7);
        label_22 = new QLabel(page03_Principal);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(110, 370, 61, 21));
        QFont font8;
        font8.setPointSize(10);
        font8.setBold(true);
        label_22->setFont(font8);
        label_23 = new QLabel(page03_Principal);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(350, 370, 101, 21));
        label_23->setFont(font8);
        label_24 = new QLabel(page03_Principal);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(590, 370, 111, 21));
        label_24->setFont(font8);
        label_24->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(page03_Principal);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(170, 530, 131, 21));
        label_25->setFont(font8);
        label_25->setAlignment(Qt::AlignCenter);
        label_26 = new QLabel(page03_Principal);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(520, 530, 41, 21));
        label_26->setFont(font8);
        pushButton_bailes = new QPushButton(page03_Principal);
        pushButton_bailes->setObjectName("pushButton_bailes");
        pushButton_bailes->setGeometry(QRect(60, 250, 201, 111));
        pushButton_bailes->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/Bailes.jpg)"));
        pushButton_conferencias = new QPushButton(page03_Principal);
        pushButton_conferencias->setObjectName("pushButton_conferencias");
        pushButton_conferencias->setGeometry(QRect(290, 250, 201, 111));
        pushButton_conferencias->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/Conferencias.jpg)"));
        pushButton_graduaciones = new QPushButton(page03_Principal);
        pushButton_graduaciones->setObjectName("pushButton_graduaciones");
        pushButton_graduaciones->setGeometry(QRect(530, 250, 201, 111));
        pushButton_graduaciones->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/Graduaciones.jpg)"));
        pushButton_conciertos = new QPushButton(page03_Principal);
        pushButton_conciertos->setObjectName("pushButton_conciertos");
        pushButton_conciertos->setGeometry(QRect(140, 410, 201, 111));
        pushButton_conciertos->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/Conciertos.jpg)"));
        pushButton_bodas = new QPushButton(page03_Principal);
        pushButton_bodas->setObjectName("pushButton_bodas");
        pushButton_bodas->setGeometry(QRect(430, 410, 201, 111));
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
        tablaEventos = new QTableWidget(page04_Eventos);
        if (tablaEventos->columnCount() < 8)
            tablaEventos->setColumnCount(8);
        QFont font9;
        font9.setPointSize(9);
        font9.setBold(false);
        font9.setStyleStrategy(QFont::PreferDefault);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font9);
        tablaEventos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablaEventos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablaEventos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablaEventos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablaEventos->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tablaEventos->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tablaEventos->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tablaEventos->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tablaEventos->setObjectName("tablaEventos");
        tablaEventos->setGeometry(QRect(70, 130, 681, 351));
        stackedWidget->addWidget(page04_Eventos);
        page05_CrearEvento = new QWidget();
        page05_CrearEvento->setObjectName("page05_CrearEvento");
        label_10 = new QLabel(page05_CrearEvento);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(320, 10, 201, 51));
        label_10->setFont(font3);
        label_10->setAlignment(Qt::AlignCenter);
        pushButton_Cancelar_3 = new QPushButton(page05_CrearEvento);
        pushButton_Cancelar_3->setObjectName("pushButton_Cancelar_3");
        pushButton_Cancelar_3->setGeometry(QRect(300, 530, 111, 41));
        pushButton_Cancelar_3->setFont(font4);
        pushButton_Cancelar_3->setAutoDefault(false);
        pushButton_Cancelar_3->setFlat(false);
        pushButton_Crear = new QPushButton(page05_CrearEvento);
        pushButton_Crear->setObjectName("pushButton_Crear");
        pushButton_Crear->setGeometry(QRect(510, 530, 111, 41));
        pushButton_Crear->setFont(font4);
        layoutWidget1 = new QWidget(page05_CrearEvento);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(200, 70, 439, 434));
        formLayout_3 = new QFormLayout(layoutWidget1);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_3->setVerticalSpacing(21);
        formLayout_3->setContentsMargins(3, 3, 3, 3);
        label_18 = new QLabel(layoutWidget1);
        label_18->setObjectName("label_18");
        label_18->setFont(font4);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_18);

        InputNombre_3 = new QLineEdit(layoutWidget1);
        InputNombre_3->setObjectName("InputNombre_3");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, InputNombre_3);

        label_19 = new QLabel(layoutWidget1);
        label_19->setObjectName("label_19");
        label_19->setFont(font4);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_19);

        dateEdit = new QDateEdit(layoutWidget1);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setDateTime(QDateTime(QDate(2023, 9, 17), QTime(6, 0, 0)));
        dateEdit->setMinimumDateTime(QDateTime(QDate(2023, 1, 4), QTime(6, 0, 0)));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, dateEdit);

        label_20 = new QLabel(layoutWidget1);
        label_20->setObjectName("label_20");
        label_20->setFont(font4);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_20);

        timeEdit = new QTimeEdit(layoutWidget1);
        timeEdit->setObjectName("timeEdit");

        formLayout_3->setWidget(2, QFormLayout::FieldRole, timeEdit);

        label_31 = new QLabel(layoutWidget1);
        label_31->setObjectName("label_31");
        label_31->setFont(font4);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_31);

        comboBox = new QComboBox(layoutWidget1);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        formLayout_3->setWidget(3, QFormLayout::FieldRole, comboBox);

        label_27 = new QLabel(layoutWidget1);
        label_27->setObjectName("label_27");
        label_27->setFont(font4);

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_27);

        InputNombre_4 = new QLineEdit(layoutWidget1);
        InputNombre_4->setObjectName("InputNombre_4");

        formLayout_3->setWidget(4, QFormLayout::FieldRole, InputNombre_4);

        label_28 = new QLabel(layoutWidget1);
        label_28->setObjectName("label_28");
        label_28->setFont(font4);

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_28);

        InputNombre_5 = new QLineEdit(layoutWidget1);
        InputNombre_5->setObjectName("InputNombre_5");

        formLayout_3->setWidget(5, QFormLayout::FieldRole, InputNombre_5);

        label_29 = new QLabel(layoutWidget1);
        label_29->setObjectName("label_29");
        label_29->setFont(font4);

        formLayout_3->setWidget(6, QFormLayout::LabelRole, label_29);

        InputNombre_6 = new QLineEdit(layoutWidget1);
        InputNombre_6->setObjectName("InputNombre_6");

        formLayout_3->setWidget(6, QFormLayout::FieldRole, InputNombre_6);

        label_30 = new QLabel(layoutWidget1);
        label_30->setObjectName("label_30");
        label_30->setFont(font4);

        formLayout_3->setWidget(7, QFormLayout::LabelRole, label_30);

        plainTextEdit = new QPlainTextEdit(layoutWidget1);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setMaximumSize(QSize(16777215, 16777213));

        formLayout_3->setWidget(7, QFormLayout::FieldRole, plainTextEdit);

        stackedWidget->addWidget(page05_CrearEvento);
        page06_Lugares = new QWidget();
        page06_Lugares->setObjectName("page06_Lugares");
        label_9 = new QLabel(page06_Lugares);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 20, 501, 61));
        label_9->setFont(font3);
        label_9->setAlignment(Qt::AlignCenter);
        pushButton_Cancelar_Lugares = new QPushButton(page06_Lugares);
        pushButton_Cancelar_Lugares->setObjectName("pushButton_Cancelar_Lugares");
        pushButton_Cancelar_Lugares->setGeometry(QRect(680, 30, 83, 29));
        pushButton_Eliminar_Lugares = new QPushButton(page06_Lugares);
        pushButton_Eliminar_Lugares->setObjectName("pushButton_Eliminar_Lugares");
        pushButton_Eliminar_Lugares->setGeometry(QRect(180, 90, 131, 31));
        pushButton_Agregar_Lugares = new QPushButton(page06_Lugares);
        pushButton_Agregar_Lugares->setObjectName("pushButton_Agregar_Lugares");
        pushButton_Agregar_Lugares->setGeometry(QRect(30, 90, 131, 31));
        stackedWidget->addWidget(page06_Lugares);
        page07_Proveedores = new QWidget();
        page07_Proveedores->setObjectName("page07_Proveedores");
        label_8 = new QLabel(page07_Proveedores);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(60, 30, 381, 41));
        label_8->setFont(font3);
        label_8->setAlignment(Qt::AlignCenter);
        label_32 = new QLabel(page07_Proveedores);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(130, 140, 81, 16));
        pushButton_Cancelar_Proveedores = new QPushButton(page07_Proveedores);
        pushButton_Cancelar_Proveedores->setObjectName("pushButton_Cancelar_Proveedores");
        pushButton_Cancelar_Proveedores->setGeometry(QRect(680, 40, 83, 29));
        stackedWidget->addWidget(page07_Proveedores);
        page08_Estadisticas = new QWidget();
        page08_Estadisticas->setObjectName("page08_Estadisticas");
        label_7 = new QLabel(page08_Estadisticas);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 20, 421, 61));
        label_7->setFont(font3);
        label_7->setAlignment(Qt::AlignCenter);
        pushButton_Cancelar_Estadisticas = new QPushButton(page08_Estadisticas);
        pushButton_Cancelar_Estadisticas->setObjectName("pushButton_Cancelar_Estadisticas");
        pushButton_Cancelar_Estadisticas->setGeometry(QRect(670, 40, 83, 29));
        stackedWidget->addWidget(page08_Estadisticas);
        page09_SolicitudesE = new QWidget();
        page09_SolicitudesE->setObjectName("page09_SolicitudesE");
        label_6 = new QLabel(page09_SolicitudesE);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 30, 341, 61));
        label_6->setFont(font3);
        pushButton_Cancelar_Solicitud = new QPushButton(page09_SolicitudesE);
        pushButton_Cancelar_Solicitud->setObjectName("pushButton_Cancelar_Solicitud");
        pushButton_Cancelar_Solicitud->setGeometry(QRect(670, 50, 83, 29));
        stackedWidget->addWidget(page09_SolicitudesE);
        page10_Contacto = new QWidget();
        page10_Contacto->setObjectName("page10_Contacto");
        label_5 = new QLabel(page10_Contacto);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(250, 30, 301, 41));
        label_5->setFont(font3);
        pushButton_Regresar = new QPushButton(page10_Contacto);
        pushButton_Regresar->setObjectName("pushButton_Regresar");
        pushButton_Regresar->setGeometry(QRect(250, 490, 121, 41));
        pushButton_Regresar->setFont(font4);
        pushButton_Regresar->setAutoDefault(false);
        pushButton_Regresar->setFlat(false);
        pushButton_Enviar = new QPushButton(page10_Contacto);
        pushButton_Enviar->setObjectName("pushButton_Enviar");
        pushButton_Enviar->setGeometry(QRect(490, 490, 121, 41));
        pushButton_Enviar->setFont(font4);
        pushButton_Enviar->setAutoDefault(false);
        pushButton_Enviar->setFlat(false);
        layoutWidget2 = new QWidget(page10_Contacto);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(130, 100, 481, 361));
        formLayout = new QFormLayout(layoutWidget2);
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_correo = new QLabel(layoutWidget2);
        label_correo->setObjectName("label_correo");
        label_correo->setFont(font4);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_correo);

        InputNombre_7 = new QLineEdit(layoutWidget2);
        InputNombre_7->setObjectName("InputNombre_7");

        formLayout->setWidget(0, QFormLayout::FieldRole, InputNombre_7);

        label_nombre = new QLabel(layoutWidget2);
        label_nombre->setObjectName("label_nombre");
        label_nombre->setFont(font4);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_nombre);

        InputNombre_8 = new QLineEdit(layoutWidget2);
        InputNombre_8->setObjectName("InputNombre_8");

        formLayout->setWidget(2, QFormLayout::FieldRole, InputNombre_8);

        label_telefono = new QLabel(layoutWidget2);
        label_telefono->setObjectName("label_telefono");
        label_telefono->setFont(font4);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_telefono);

        InputNombre_9 = new QLineEdit(layoutWidget2);
        InputNombre_9->setObjectName("InputNombre_9");

        formLayout->setWidget(4, QFormLayout::FieldRole, InputNombre_9);

        label_tipo_evento = new QLabel(layoutWidget2);
        label_tipo_evento->setObjectName("label_tipo_evento");
        label_tipo_evento->setFont(font4);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_tipo_evento);

        comboBox_2 = new QComboBox(layoutWidget2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        formLayout->setWidget(6, QFormLayout::FieldRole, comboBox_2);

        InputNombre_10 = new QLineEdit(layoutWidget2);
        InputNombre_10->setObjectName("InputNombre_10");

        formLayout->setWidget(8, QFormLayout::FieldRole, InputNombre_10);

        label__acerca_de = new QLabel(layoutWidget2);
        label__acerca_de->setObjectName("label__acerca_de");
        label__acerca_de->setFont(font4);

        formLayout->setWidget(10, QFormLayout::LabelRole, label__acerca_de);

        InputNombre_11 = new QLineEdit(layoutWidget2);
        InputNombre_11->setObjectName("InputNombre_11");

        formLayout->setWidget(10, QFormLayout::FieldRole, InputNombre_11);

        label_presupuesto = new QLabel(layoutWidget2);
        label_presupuesto->setObjectName("label_presupuesto");
        label_presupuesto->setFont(font4);

        formLayout->setWidget(8, QFormLayout::LabelRole, label_presupuesto);

        stackedWidget->addWidget(page10_Contacto);
        page11_Anadir_Lugar = new QWidget();
        page11_Anadir_Lugar->setObjectName("page11_Anadir_Lugar");
        pushButton_anadir_lugar = new QPushButton(page11_Anadir_Lugar);
        pushButton_anadir_lugar->setObjectName("pushButton_anadir_lugar");
        pushButton_anadir_lugar->setGeometry(QRect(320, 500, 151, 51));
        pushButton_anadir_lugar->setFont(font4);
        layoutWidget3 = new QWidget(page11_Anadir_Lugar);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(20, 20, 751, 46));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_anada_lugar = new QLabel(layoutWidget3);
        label_anada_lugar->setObjectName("label_anada_lugar");

        horizontalLayout->addWidget(label_anada_lugar);

        pushButton_Regresar_Anadir_Lugares = new QPushButton(layoutWidget3);
        pushButton_Regresar_Anadir_Lugares->setObjectName("pushButton_Regresar_Anadir_Lugares");
        pushButton_Regresar_Anadir_Lugares->setEnabled(true);
        pushButton_Regresar_Anadir_Lugares->setMaximumSize(QSize(226, 16777215));
        pushButton_Regresar_Anadir_Lugares->setFont(font2);
        pushButton_Regresar_Anadir_Lugares->setMouseTracking(false);
        pushButton_Regresar_Anadir_Lugares->setCheckable(false);
        pushButton_Regresar_Anadir_Lugares->setAutoRepeat(false);
        pushButton_Regresar_Anadir_Lugares->setAutoExclusive(false);
        pushButton_Regresar_Anadir_Lugares->setAutoDefault(false);
        pushButton_Regresar_Anadir_Lugares->setFlat(false);

        horizontalLayout->addWidget(pushButton_Regresar_Anadir_Lugares, 0, Qt::AlignRight|Qt::AlignVCenter);

        layoutWidget4 = new QWidget(page11_Anadir_Lugar);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(160, 90, 451, 387));
        formLayout_2 = new QFormLayout(layoutWidget4);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_2->setRowWrapPolicy(QFormLayout::DontWrapRows);
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_2->setFormAlignment(Qt::AlignCenter);
        formLayout_2->setHorizontalSpacing(16);
        formLayout_2->setVerticalSpacing(39);
        formLayout_2->setContentsMargins(3, 3, 3, 3);
        label_nombre_lugar = new QLabel(layoutWidget4);
        label_nombre_lugar->setObjectName("label_nombre_lugar");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_nombre_lugar);

        lineEdit_nombre = new QLineEdit(layoutWidget4);
        lineEdit_nombre->setObjectName("lineEdit_nombre");
        lineEdit_nombre->setMaximumSize(QSize(261, 28));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_nombre);

        label_capacidad = new QLabel(layoutWidget4);
        label_capacidad->setObjectName("label_capacidad");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_capacidad);

        lineEdit_capacidad = new QLineEdit(layoutWidget4);
        lineEdit_capacidad->setObjectName("lineEdit_capacidad");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_capacidad);

        label_disponibilidad = new QLabel(layoutWidget4);
        label_disponibilidad->setObjectName("label_disponibilidad");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_disponibilidad);

        lineEdit_disponibilidad = new QLineEdit(layoutWidget4);
        lineEdit_disponibilidad->setObjectName("lineEdit_disponibilidad");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_disponibilidad);

        label_precio = new QLabel(layoutWidget4);
        label_precio->setObjectName("label_precio");

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_precio);

        lineEdit_precio = new QLineEdit(layoutWidget4);
        lineEdit_precio->setObjectName("lineEdit_precio");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEdit_precio);

        label_localizacion = new QLabel(layoutWidget4);
        label_localizacion->setObjectName("label_localizacion");

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_localizacion);

        lineEdit_localizacion = new QLineEdit(layoutWidget4);
        lineEdit_localizacion->setObjectName("lineEdit_localizacion");

        formLayout_2->setWidget(4, QFormLayout::FieldRole, lineEdit_localizacion);

        label_bajo_techo = new QLabel(layoutWidget4);
        label_bajo_techo->setObjectName("label_bajo_techo");

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_bajo_techo);

        comboBox_techo = new QComboBox(layoutWidget4);
        comboBox_techo->addItem(QString());
        comboBox_techo->addItem(QString());
        comboBox_techo->setObjectName("comboBox_techo");
        comboBox_techo->setEnabled(true);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, comboBox_techo);

        stackedWidget->addWidget(page11_Anadir_Lugar);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        pushButton_Cancelar_2->setDefault(false);
        pushButton_Iniciar_2->setDefault(false);
        pushButton_Cancelar->setDefault(false);
        pushButton_Registrar->setDefault(false);
        pushButton_Cancelar_3->setDefault(false);
        pushButton_Regresar->setDefault(false);
        pushButton_Enviar->setDefault(false);
        pushButton_Regresar_Anadir_Lugares->setDefault(false);


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
        pushButton_Cancelar_2->setText(QCoreApplication::translate("MainWindow", "Cancelar", nullptr));
        pushButton_Iniciar_2->setText(QCoreApplication::translate("MainWindow", "Iniciar Sesi\303\263n", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Correo", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Contrase\303\261a", nullptr));
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
        pushButton_Cancelar_Eventos->setText(QCoreApplication::translate("MainWindow", "Regresar", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablaEventos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Evento", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablaEventos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Cliente", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablaEventos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Fecha", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tablaEventos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Hora inicio", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tablaEventos->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Hora fin", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tablaEventos->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Tipo de evento", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tablaEventos->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Servicios extra", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tablaEventos->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Costo", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Crear evento", nullptr));
        pushButton_Cancelar_3->setText(QCoreApplication::translate("MainWindow", "Cancelar", nullptr));
        pushButton_Crear->setText(QCoreApplication::translate("MainWindow", "Crear", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Nombre del evento", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Fecha", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Hora de inicio", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Tipo del evento", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Bodas", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Bailes", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Bodas", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Conferencias", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Graduaciones", nullptr));

        label_27->setText(QCoreApplication::translate("MainWindow", "Lugar del evento", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Proveedores", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Costo del evento", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Detalles", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Lugares disponibles para eventos", nullptr));
        pushButton_Cancelar_Lugares->setText(QCoreApplication::translate("MainWindow", "Regresar", nullptr));
        pushButton_Eliminar_Lugares->setText(QCoreApplication::translate("MainWindow", "Eliminar lugar", nullptr));
        pushButton_Agregar_Lugares->setText(QCoreApplication::translate("MainWindow", "Agregar lugar", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Lista de proveedores", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Proveedores", nullptr));
        pushButton_Cancelar_Proveedores->setText(QCoreApplication::translate("MainWindow", "Regresar", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Estad\303\255sticas de los eventos", nullptr));
        pushButton_Cancelar_Estadisticas->setText(QCoreApplication::translate("MainWindow", "Regresar", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Solicitudes de eventos", nullptr));
        pushButton_Cancelar_Solicitud->setText(QCoreApplication::translate("MainWindow", "Regresar", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\302\241Reserve su evento!", nullptr));
        pushButton_Regresar->setText(QCoreApplication::translate("MainWindow", "Regresar", nullptr));
        pushButton_Enviar->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
        label_correo->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">Correo</p></body></html>", nullptr));
        label_nombre->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">Nombre</p></body></html>", nullptr));
        label_telefono->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">Tel\303\251fono</p></body></html>", nullptr));
        label_tipo_evento->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">Tipo del evento</p></body></html>", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "Bodas", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "Bailes", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "Bodas", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MainWindow", "Conferencias", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("MainWindow", "Graduaciones", nullptr));

        label__acerca_de->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Acerca del evento</p></body></html>", nullptr));
        label_presupuesto->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">Presupuesto</p></body></html>", nullptr));
        pushButton_anadir_lugar->setText(QCoreApplication::translate("MainWindow", "A\303\261adir lugar", nullptr));
        label_anada_lugar->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">A\303\261ada un lugar para realizar eventos        </span></p></body></html>", nullptr));
        pushButton_Regresar_Anadir_Lugares->setText(QCoreApplication::translate("MainWindow", "Regresar", nullptr));
        label_nombre_lugar->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:14pt;\">Nombre del lugar</span></p></body></html>", nullptr));
        label_capacidad->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:14pt;\">Capacidad</span></p></body></html>", nullptr));
        label_disponibilidad->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:14pt;\">Disponibilidad</span></p></body></html>", nullptr));
        label_precio->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:14pt;\">Precio</span></p></body></html>", nullptr));
        label_localizacion->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:14pt;\">Localizacion</span></p></body></html>", nullptr));
        label_bajo_techo->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:14pt;\">\302\277Es bajo techo?</span></p></body></html>", nullptr));
        comboBox_techo->setItemText(0, QCoreApplication::translate("MainWindow", "S\303\255", nullptr));
        comboBox_techo->setItemText(1, QCoreApplication::translate("MainWindow", "No", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
