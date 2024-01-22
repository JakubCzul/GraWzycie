#include "mainwindow.h"
#include"gameboard.h"
#include "ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->dateActuall->setDate(QDate::currentDate());
    gameBoard = new GameOfLifeBoard(this);

    // Ustal preferowany rozmiar planszy
    QSize preferredSize(GameOfLifeBoard::width, GameOfLifeBoard::height);
    gameBoard->setMinimumSize(preferredSize);
    gameBoard->setMaximumSize(preferredSize);

    // Ustaw planszę na środku centralwidget
    QVBoxLayout *centralLayout = new QVBoxLayout(ui->centralwidget);
    centralLayout->addWidget(gameBoard, 0, Qt::AlignHCenter | Qt::AlignVCenter);

    // Dodaj margines po lewej stronie (zmień wartość w zależności od preferencji)
    centralLayout->setContentsMargins(0, 0, 400, 0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_moveButton_clicked()
{
    gameBoard->updateBoard();
}


void MainWindow::on_playButton_clicked()
{
    gameBoard->play();
}

