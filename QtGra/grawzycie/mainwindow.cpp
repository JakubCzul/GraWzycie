#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->dateActuall->setDate(QDate::currentDate());
    gameBoard = new GameOfLifeBoard(this);
    QVBoxLayout *centralLayout = new QVBoxLayout(ui->centralwidget);
    centralLayout->addWidget(gameBoard);
}

MainWindow::~MainWindow()
{
    delete ui;
}

