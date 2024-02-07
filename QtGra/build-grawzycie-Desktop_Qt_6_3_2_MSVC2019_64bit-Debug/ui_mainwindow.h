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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_7;
    QTableWidget *boardObject;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEdit;
    QListWidget *infoWindow;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QDateEdit *dateActuall;
    QHBoxLayout *horizontalLayout;
    QPushButton *stopButton;
    QPushButton *playButton;
    QPushButton *fasterButton;
    QPushButton *randomButton;
    QPushButton *moveButton;
    QPushButton *saveButton;
    QPushButton *loadButton;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEditSize;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEditWidth;
    QSpinBox *widthSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditHeight;
    QSpinBox *heightSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *startButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(922, 721);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        centralwidget->setAutoFillBackground(true);
        verticalLayout_7 = new QVBoxLayout(centralwidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        boardObject = new QTableWidget(centralwidget);
        boardObject->setObjectName(QString::fromUtf8("boardObject"));
        boardObject->setMinimumSize(QSize(900, 450));
        boardObject->setMaximumSize(QSize(3599, 3600));

        verticalLayout_7->addWidget(boardObject);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(450, 100));
        QFont font;
        font.setPointSize(40);
        font.setBold(true);
        lineEdit->setFont(font);
        lineEdit->setReadOnly(true);

        verticalLayout_5->addWidget(lineEdit);

        infoWindow = new QListWidget(centralwidget);
        infoWindow->setObjectName(QString::fromUtf8("infoWindow"));
        infoWindow->setMaximumSize(QSize(450, 150));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        infoWindow->setFont(font1);
        infoWindow->setProperty("isWrapping", QVariant(true));

        verticalLayout_5->addWidget(infoWindow);


        horizontalLayout_7->addLayout(verticalLayout_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(32, -1, -1, -1);
        dateActuall = new QDateEdit(centralwidget);
        dateActuall->setObjectName(QString::fromUtf8("dateActuall"));
        dateActuall->setMaximumSize(QSize(150, 16777215));

        verticalLayout_2->addWidget(dateActuall);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 24, -1);
        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(stopButton);

        playButton = new QPushButton(centralwidget);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        playButton->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(playButton);

        fasterButton = new QPushButton(centralwidget);
        fasterButton->setObjectName(QString::fromUtf8("fasterButton"));
        fasterButton->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(fasterButton);


        verticalLayout_2->addLayout(horizontalLayout);

        randomButton = new QPushButton(centralwidget);
        randomButton->setObjectName(QString::fromUtf8("randomButton"));
        randomButton->setMaximumSize(QSize(200, 16777215));

        verticalLayout_2->addWidget(randomButton);

        moveButton = new QPushButton(centralwidget);
        moveButton->setObjectName(QString::fromUtf8("moveButton"));
        moveButton->setMaximumSize(QSize(200, 16777215));

        verticalLayout_2->addWidget(moveButton);

        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setMaximumSize(QSize(200, 16777215));

        verticalLayout_2->addWidget(saveButton);

        loadButton = new QPushButton(centralwidget);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        loadButton->setMaximumSize(QSize(200, 16777215));

        verticalLayout_2->addWidget(loadButton);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        lineEditSize = new QLineEdit(centralwidget);
        lineEditSize->setObjectName(QString::fromUtf8("lineEditSize"));
        lineEditSize->setMaximumSize(QSize(220, 16777215));
        lineEditSize->setReadOnly(true);

        verticalLayout_6->addWidget(lineEditSize);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lineEditWidth = new QLineEdit(centralwidget);
        lineEditWidth->setObjectName(QString::fromUtf8("lineEditWidth"));
        lineEditWidth->setMaximumSize(QSize(100, 16777215));
        lineEditWidth->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEditWidth);

        widthSpinBox = new QSpinBox(centralwidget);
        widthSpinBox->setObjectName(QString::fromUtf8("widthSpinBox"));
        widthSpinBox->setMaximumSize(QSize(50, 16777215));
        widthSpinBox->setMinimum(3);
        widthSpinBox->setMaximum(20);

        horizontalLayout_4->addWidget(widthSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEditHeight = new QLineEdit(centralwidget);
        lineEditHeight->setObjectName(QString::fromUtf8("lineEditHeight"));
        lineEditHeight->setMaximumSize(QSize(100, 16777215));
        lineEditHeight->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEditHeight);

        heightSpinBox = new QSpinBox(centralwidget);
        heightSpinBox->setObjectName(QString::fromUtf8("heightSpinBox"));
        heightSpinBox->setMaximumSize(QSize(50, 16777215));
        heightSpinBox->setMinimum(3);
        heightSpinBox->setMaximum(20);

        horizontalLayout_3->addWidget(heightSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_2->addWidget(startButton);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_6->addLayout(verticalLayout_4);


        verticalLayout->addLayout(verticalLayout_6);


        horizontalLayout_5->addLayout(verticalLayout);


        horizontalLayout_7->addLayout(horizontalLayout_5);


        verticalLayout_7->addLayout(horizontalLayout_7);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gra w \305\274ycie", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "GAME OF LIFE", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "I I", nullptr));
        playButton->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        fasterButton->setText(QCoreApplication::translate("MainWindow", ">>", nullptr));
        randomButton->setText(QCoreApplication::translate("MainWindow", "RANDOM", nullptr));
        moveButton->setText(QCoreApplication::translate("MainWindow", "MOVE", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "SAVE", nullptr));
        loadButton->setText(QCoreApplication::translate("MainWindow", "LOAD", nullptr));
        lineEditSize->setText(QCoreApplication::translate("MainWindow", "Prosze podaj rozmiar planszy:", nullptr));
        lineEditWidth->setText(QCoreApplication::translate("MainWindow", "Szeroko\305\233\304\207", nullptr));
        lineEditHeight->setText(QCoreApplication::translate("MainWindow", "Wysoko\305\233\304\207", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
