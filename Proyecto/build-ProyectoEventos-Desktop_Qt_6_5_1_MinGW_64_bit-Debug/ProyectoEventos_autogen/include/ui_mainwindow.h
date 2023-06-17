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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *BotonIniciarSesion;
    QPushButton *BotonRegistrarse;
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
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 70, 361, 71));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(320, 220, 161, 41));
        QFont font1;
        font1.setPointSize(18);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        BotonIniciarSesion = new QPushButton(centralwidget);
        BotonIniciarSesion->setObjectName("BotonIniciarSesion");
        BotonIniciarSesion->setGeometry(QRect(220, 380, 101, 41));
        QFont font2;
        font2.setPointSize(10);
        BotonIniciarSesion->setFont(font2);
        BotonIniciarSesion->setStyleSheet(QString::fromUtf8(""));
        BotonRegistrarse = new QPushButton(centralwidget);
        BotonRegistrarse->setObjectName("BotonRegistrarse");
        BotonRegistrarse->setGeometry(QRect(494, 380, 101, 41));
        BotonRegistrarse->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "SerVal Event Solutions", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\302\241Bienvenido!", nullptr));
        BotonIniciarSesion->setText(QCoreApplication::translate("MainWindow", "Iniciar Sesi\303\263n", nullptr));
        BotonRegistrarse->setText(QCoreApplication::translate("MainWindow", "Registrarse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
