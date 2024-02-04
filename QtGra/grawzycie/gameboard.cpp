#include "gameboard.h"
#include <QVector>
#include <QFile>
#include <QTextStream>
#include <time.h>

GameOfLifeBoard::GameOfLifeBoard(QWidget *parent)
    : QGraphicsView(parent), timer(new QTimer(this)), scene(new QGraphicsScene(this))
{
    setStyleSheet("background-color: white;");
    setScene(scene);

    connect(timer, &QTimer::timeout, this, &GameOfLifeBoard::play);
    initializeBoard(widthCells, heightCells);
}

void GameOfLifeBoard::initializeBoard(int width, int height)
{
    widthCells = width;
    heightCells = height;

    scene->clear();
    scene->setSceneRect(0, 0, widthCells, heightCells);

    for (int row = 0; row < heightCells; row++)
    {
        for (int col = 0; col < widthCells; col++)
        {
            QGraphicsRectItem *cell = new QGraphicsRectItem(col, row, 1, 1);
            cell->setBrush(Qt::white);
            scene->addItem(cell);
        }
    }
}

void GameOfLifeBoard::play()
{
    updateBoard();
}

void GameOfLifeBoard::setBoardSize(int width, int height)
{
    widthCells = width;
    heightCells = height;
    initializeBoard(width, height);
}

void GameOfLifeBoard::faster()
{
    int interval = timer->interval();
    if (interval > 50)
    {
        timer->setInterval(interval - 50);
    }
}

void GameOfLifeBoard::stop()
{
    timer->stop();
}

void GameOfLifeBoard::updateBoard()
{
    QVector<QVector<int>> newBoard(heightCells, QVector<int>(widthCells, 0));

    for (int row = 0; row < heightCells; ++row)
    {
        for (int col = 0; col < widthCells; ++col)
        {
            int liveNeighbors = countLiveNeighbors(row, col);

            QGraphicsRectItem *cell = dynamic_cast<QGraphicsRectItem *>(scene->itemAt(col, row, QTransform()));
            if (cell)
            {
                if (cell->brush().color() == Qt::black)
                {
                    if (liveNeighbors < 2 || liveNeighbors > 3)
                    {
                        newBoard[row][col] = 0;
                    }
                    else
                    {
                        newBoard[row][col] = 1;
                    }
                }
                else
                {
                    if (liveNeighbors == 3)
                    {
                        newBoard[row][col] = 1;
                    }
                }
            }
        }
    }

    for (int row = 0; row < heightCells; ++row)
    {
        for (int col = 0; col < widthCells; ++col)
        {
            QGraphicsRectItem *cell = dynamic_cast<QGraphicsRectItem *>(scene->itemAt(col, row, QTransform()));
            if (cell)
            {
                cell->setBrush(newBoard[row][col] == 1 ? Qt::black : Qt::white);
            }
        }
    }
}

int GameOfLifeBoard::countLiveNeighbors(int row, int column)
{
    int count = 0;
    for (int i = -1; i <= 1; ++i)
    {
        for (int j = -1; j <= 1; ++j)
        {
            int newRow = row + i;
            int newCol = column + j;

            if (newRow >= 0 && newRow < heightCells && newCol >= 0 && newCol < widthCells &&
                !(i == 0 && j == 0))
            {
                QGraphicsRectItem *cell = dynamic_cast<QGraphicsRectItem *>(scene->itemAt(newCol, newRow, QTransform()));
                if (cell && cell->brush().color() == Qt::black)
                {
                    count += 1;
                }
            }
        }
    }
    return count;
}

QSize GameOfLifeBoard::getBoardSize() const
{
    return QSize(widthCells, heightCells);
}

int GameOfLifeBoard::getActiveCellCount() const
{
    int activeCount = 0;
    for (int row = 0; row < heightCells; row++)
    {
        for (int col = 0; col < widthCells; col++)
        {
            QGraphicsRectItem *cell = dynamic_cast<QGraphicsRectItem *>(scene->itemAt(col, row, QTransform()));
            if (cell && cell->brush().color() == Qt::black)
            {
                activeCount++;
            }
        }
    }

    return activeCount;
}

void GameOfLifeBoard::saveGame(const QString &fileName)
{
    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&file);

        out << widthCells << " " << heightCells << "\n";

        for (int row = 0; row < heightCells; row++)
        {
            for (int col = 0; col < widthCells; col++)
            {
                QGraphicsRectItem *cell = dynamic_cast<QGraphicsRectItem *>(scene->itemAt(col, row, QTransform()));
                out << (cell && cell->brush().color() == Qt::black ? "1" : "0");
            }
            out << "\n";
        }

        file.close();
        emit gameSaved();
    }
}

void GameOfLifeBoard::loadGame(const QString &fileName)
{
    QFile file(fileName);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);

        int loadedWidth, loadedHeight;
        in >> loadedWidth >> loadedHeight;

        setBoardSize(loadedWidth, loadedHeight);

        for (int row = 0; row < heightCells; ++row)
        {
            QString rowState;
            in >> rowState;

            for (int col = 0; col < widthCells; ++col)
            {
                QGraphicsRectItem *cell = dynamic_cast<QGraphicsRectItem *>(scene->itemAt(col, row, QTransform()));
                if (cell)
                {
                    cell->setBrush(rowState[col] == '1' ? Qt::black : Qt::white);
                }
            }
        }

        file.close();
    }
}

void GameOfLifeBoard::random()
{
    srand(time(NULL));

    for (int row = 0; row < heightCells; ++row)
    {
        for (int col = 0; col < widthCells; ++col)
        {
            QGraphicsRectItem *cell = dynamic_cast<QGraphicsRectItem *>(scene->itemAt(col, row, QTransform()));
            if (cell)
            {
                int tester = rand() % 2;
                cell->setBrush(tester == 0 ? Qt::white : Qt::black);
            }
        }
    }
}
