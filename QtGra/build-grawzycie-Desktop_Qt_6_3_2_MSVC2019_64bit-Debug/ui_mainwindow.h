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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QDateEdit *dateActuall;
    QHBoxLayout *horizontalLayout;
    QPushButton *stopButton;
    QPushButton *playButton;
    QPushButton *fasterButton;
    QVBoxLayout *verticalLayout;
    QPushButton *moveButton;
    QPushButton *saveButton;
    QPushButton *loadButton;
    QListWidget *infoWindow;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1312, 750);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        centralwidget->setAutoFillBackground(true);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(200, 20, 431, 81));
        QFont font;
        font.setPointSize(48);
        font.setBold(true);
        lineEdit->setFont(font);
        lineEdit->setReadOnly(true);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1040, 20, 260, 271));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        dateActuall = new QDateEdit(layoutWidget);
        dateActuall->setObjectName(QString::fromUtf8("dateActuall"));

        verticalLayout_2->addWidget(dateActuall);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        stopButton = new QPushButton(layoutWidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        horizontalLayout->addWidget(stopButton);

        playButton = new QPushButton(layoutWidget);
        playButton->setObjectName(QString::fromUtf8("playButton"));

        horizontalLayout->addWidget(playButton);

        fasterButton = new QPushButton(layoutWidget);
        fasterButton->setObjectName(QString::fromUtf8("fasterButton"));

        horizontalLayout->addWidget(fasterButton);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        moveButton = new QPushButton(layoutWidget);
        moveButton->setObjectName(QString::fromUtf8("moveButton"));

        verticalLayout->addWidget(moveButton);

        saveButton = new QPushButton(layoutWidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        verticalLayout->addWidget(saveButton);

        loadButton = new QPushButton(layoutWidget);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));

        verticalLayout->addWidget(loadButton);


        verticalLayout_2->addLayout(verticalLayout);

        infoWindow = new QListWidget(centralwidget);
        infoWindow->setObjectName(QString::fromUtf8("infoWindow"));
        infoWindow->setGeometry(QRect(20, 600, 661, 121));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        infoWindow->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "GAME OF LIFE", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "I I", nullptr));
        playButton->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        fasterButton->setText(QCoreApplication::translate("MainWindow", ">>", nullptr));
        moveButton->setText(QCoreApplication::translate("MainWindow", "MOVE", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "SAVE", nullptr));
        loadButton->setText(QCoreApplication::translate("MainWindow", "LOAD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
