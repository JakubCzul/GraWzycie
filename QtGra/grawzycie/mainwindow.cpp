#include "mainwindow.h"
#include "gameboard.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->dateActuall->setDate(QDate::currentDate());
    gameBoard = new GameOfLifeBoard(ui->boardObject);
    QSize boardSize = ui->boardObject->size();
    gameBoard->setMinimumSize(boardSize);
    gameBoard->setBoardSize(boardSize.width(), boardSize.height());
    connect(ui->startButton, &QPushButton::clicked, this, &MainWindow::on_startButton_clicked);
    updateInfoWindow();

    connect(gameBoard, &GameOfLifeBoard::dateUpdated, this, [this]() {
        QDate currentDate = ui->dateActuall->date();
        currentDate = currentDate.addDays(1);
        ui->dateActuall->setDate(currentDate);
    });

    connect(ui->stopButton, &QPushButton::clicked, this, &MainWindow::on_stopButton_clicked);
    connect(gameBoard, &GameOfLifeBoard::gameSaved, this, &MainWindow::updateInfoWindow);
    connect(gameBoard, &GameOfLifeBoard::populationSizeChanged, this, &MainWindow::updateInfoWindow);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateInfoWindow() {
    QString infoText = QString(" Current board size: %1 x %2\n\n Population size: %3")
                           .arg(ui->widthSpinBox->value())
                           .arg(ui->heightSpinBox->value())
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
    this->updateInfoWindow();
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

void MainWindow::resizeEvent(QResizeEvent *event) {
    QMainWindow::resizeEvent(event);
    QSize boardSize = ui->boardObject->size();
    gameBoard->setColumnWidthsAndHeights(boardSize.width() / gameBoard->columnCount(), boardSize.height() / gameBoard->rowCount());
}

void MainWindow::on_stopButton_clicked() {
    gameBoard->stop();
}

