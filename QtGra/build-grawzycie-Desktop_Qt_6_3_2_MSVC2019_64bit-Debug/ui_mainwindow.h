/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QDateEdit *dateActuall;
    QPushButton *moveButton;
    QPushButton *saveButton;
    QPushButton *loadButton;
    QPushButton *playButton;
    QPushButton *fasterButton;
    QPushButton *stopButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(780, 316);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        dateActuall = new QDateEdit(centralwidget);
        dateActuall->setObjectName(QString::fromUtf8("dateActuall"));
        dateActuall->setGeometry(QRect(600, 10, 151, 31));
        moveButton = new QPushButton(centralwidget);
        moveButton->setObjectName(QString::fromUtf8("moveButton"));
        moveButton->setGeometry(QRect(600, 90, 151, 61));
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(600, 170, 151, 31));
        loadButton = new QPushButton(centralwidget);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        loadButton->setGeometry(QRect(600, 210, 151, 61));
        playButton = new QPushButton(centralwidget);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        playButton->setGeometry(QRect(650, 50, 51, 24));
        fasterButton = new QPushButton(centralwidget);
        fasterButton->setObjectName(QString::fromUtf8("fasterButton"));
        fasterButton->setGeometry(QRect(710, 50, 41, 24));
        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setGeometry(QRect(600, 50, 41, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 780, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        moveButton->setText(QCoreApplication::translate("MainWindow", "MOVE", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "SAVE", nullptr));
        loadButton->setText(QCoreApplication::translate("MainWindow", "LOAD", nullptr));
        playButton->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        fasterButton->setText(QCoreApplication::translate("MainWindow", ">>", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "I I", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
