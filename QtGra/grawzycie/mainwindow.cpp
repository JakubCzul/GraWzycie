#include "mainwindow.h"
#include"gameboard.h"
#include "ui_mainwindow.h"
#include "oknoStart.h"
#include"ui_oknoStart.h"
#include <QDateTime>
#include <QListView>
#include <QStringListModel>
#include <QListWidget>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
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
    updateInfoWindow();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateInfoWindow()
{
    // Aktualizuj tekst w infoWindow
    QString infoText = QString(" Current board size: %1 x %2\n\n Population size: %3")
                           .arg(gameBoard->width)
                           .arg(gameBoard->height)
                           .arg(gameBoard->getActiveCellCount());

    // Wyczyść i dodaj nowe elementy do infoWindow
    ui->infoWindow->clear();
    ui->infoWindow->addItem(infoText);
}


void MainWindow::on_moveButton_clicked()
{
    gameBoard->updateBoard();
    updateInfoWindow();
}


void MainWindow::on_playButton_clicked()
{
    gameBoard->play();
}

void MainWindow::on_saveButton_clicked() {
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save Game"), "", tr("Game files (*.game)"));

    if (!fileName.isEmpty())
    {
        gameBoard->saveGame(fileName);
    }
}

void MainWindow::on_loadButton_clicked() {
    QString fileName = QFileDialog::getOpenFileName(this, tr("Load game"), "", tr("Game files (*.game)"));

    if (!fileName.isEmpty()) {
        gameBoard->loadGame(fileName);
        updateInfoWindow();
    }
}
GameOfLifeBoard* MainWindow::getGameBoard() const {
    return gameBoard;
}

