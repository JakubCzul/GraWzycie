#include "mainwindow.h"
#include "gameboard.h"
#include "ui_mainwindow.h"
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

    connect(ui->startButton, &QPushButton::clicked, this, &MainWindow::on_startButton_clicked);

    QSize preferredSize(GameOfLifeBoard::width, GameOfLifeBoard::height);
    gameBoard->setMinimumSize(preferredSize);
    gameBoard->setMaximumSize(preferredSize);

    QVBoxLayout *centralLayout = new QVBoxLayout(ui->centralwidget);
    centralLayout->addWidget(gameBoard, 0, Qt::AlignHCenter | Qt::AlignVCenter);

    centralLayout->setContentsMargins(0, 0, 0, 400);
    updateInfoWindow();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateInfoWindow() {
    QString infoText = QString(" Current board size: %1 x %2\n\n Population size: %3")
                           .arg(gameBoard->width)
                           .arg(gameBoard->height)
                           .arg(gameBoard->getActiveCellCount());

    ui->infoWindow->clear();
    ui->infoWindow->addItem(infoText);
}


void MainWindow::on_moveButton_clicked() {
    gameBoard->updateBoard();
    updateInfoWindow();
    QDate data = ui->dateActuall->date().addDays(1);
    ui->dateActuall->setDate(data);
}


void MainWindow::on_playButton_clicked() {
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


void MainWindow::on_randomButton_clicked() {
    gameBoard->random();
}


void MainWindow::on_startButton_clicked() {
    int width = ui->widthSpinBox->value();
    int height = ui->heightSpinBox->value();

    gameBoard->setBoardSize(width, height);
    updateInfoWindow();
}

QSpinBox* MainWindow::getWidthSpinBox() const {
    return ui->widthSpinBox;
}

QSpinBox* MainWindow::getHeightSpinBox() const {
    return ui->heightSpinBox;
}
