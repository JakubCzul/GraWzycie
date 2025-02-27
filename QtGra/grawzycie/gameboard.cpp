#include "gameboard.h"


GameOfLifeBoard::GameOfLifeBoard(QWidget *parent)
    : QTableWidget(parent), timer(new QTimer(this))
{
    setStyleSheet("background-color: white;");

    connect(this, &QTableWidget::cellClicked, this, &GameOfLifeBoard::cellClicked);
    connect(timer, &QTimer::timeout, this, &GameOfLifeBoard::play);

    QSize boardSize = viewport()->size();
    widthCells = boardSize.width() / CellsWidth;
    heightCells = boardSize.height() / CellsHeight;

    initializeBoard(widthCells,heightCells);
}

void GameOfLifeBoard::initializeBoard(int Width,int Height) {
    setRowCount(Height);
    setColumnCount(Width);
    for (int row = 0; row < rowCount(); row++) {
        for (int col = 0; col < columnCount(); col++) {
            QTableWidgetItem *item = new QTableWidgetItem();
            item->setFlags(Qt::ItemIsEnabled | Qt::ItemIsSelectable);
            setItem(row, col, item);
        }
    }
}

void GameOfLifeBoard::cellClicked(int row, int column) {
    QTableWidgetItem *item = this->item(row,column);
    item->setBackground(item->background() == Qt::white ? Qt::black : Qt::white);
}

void GameOfLifeBoard::play() {
    timer->start(1000);
    updateBoard();
}

void GameOfLifeBoard::setBoardSize(int width, int height) {
    widthCells = width;
    heightCells = height;
    initializeBoard(width, height);
}

void GameOfLifeBoard::faster() {
    int interval = timer->interval();
    if (interval > 50) {
        timer->setInterval(interval - 500);
    }
}

void GameOfLifeBoard::stop() {
    timer->stop();
}


void GameOfLifeBoard::updateBoard() {
    int rows = rowCount();
    int cols = columnCount();
    QVector<QVector<int>> newBoard(rows, QVector<int>(cols, 0));

    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            int liveNeighbors = countLiveNeighbors(row, col);

            if (item(row, col)->background() == Qt::black) {
                if (liveNeighbors < 2 || liveNeighbors > 3) {
                    newBoard[row][col] = 0;
                } else {
                    newBoard[row][col] = 1;
                }
            } else {
                if (liveNeighbors == 3) {
                    newBoard[row][col] = 1;
                }
            }
        }
    }

    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            QTableWidgetItem *item = this->item(row, col);
            item->setBackground(newBoard[row][col] == 1 ? Qt::black : Qt::white);
        }
    }

    emit dateUpdated();
    emit populationSizeChanged();
}

int GameOfLifeBoard::countLiveNeighbors(int row, int column) {
    int count = 0;
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            int newRow = row + i;
            int newCol = column + j;

            if (newRow >= 0 && newRow < rowCount() && newCol >= 0 && newCol < columnCount() &&
                !(i == 0 && j == 0)) {
                count += item(newRow, newCol)->background() == Qt::black ? 1 : 0;
            }
        }
    }
    return count;
}

QSize GameOfLifeBoard::getBoardSize() const {
    return QSize(rowCount(), columnCount());
}

int GameOfLifeBoard::getActiveCellCount() const {
    int activeCount = 0;
    for (int row=0; row<rowCount(); row++) {
        for (int col=0; col < columnCount(); col++) {
            if (item(row, col)->background() == Qt::black) {
                activeCount++;
            }
        }
    }

    return activeCount;
}

void GameOfLifeBoard::saveGame(const QString &fileName) {
    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);

        for (int row = 0; row < rowCount(); row++) {
            for (int col = 0; col < columnCount(); col++) {
                out << (item(row, col)->background() == Qt::black ? "1" : "0");
            }
            out << "\n";
        }

        file.close();
        emit gameSaved();
    }
}

void GameOfLifeBoard::loadGame(const QString &fileName) {
    QFile file(fileName);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);

        int loadedWidth, loadedHeight;
        in >> loadedWidth >> loadedHeight;

        for (int row = 0; row < rowCount(); ++row)
        {
            QString rowState;
            in >> rowState;

            for (int col = 0; col < columnCount(); ++col)
            {
                QTableWidgetItem *item = this->item(row, col);
                if (rowState[col] == '1')
                    item->setBackground(Qt::black);
                else
                    item->setBackground(Qt::white);
            }
        }

        file.close();
    }
}

void GameOfLifeBoard::random(){
    srand( time(NULL) );
    int rows = rowCount();
    int cols = columnCount();
    QVector<QVector<int>> newBoard(rows, QVector<int>(cols, 0));
    int tester;
    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            tester = rand() % 2;
            if(tester == 0){
                newBoard[row][col] = 0;
            }
            if(tester==1){
                newBoard[row][col] = 1;
            }
        }
    }

    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            QTableWidgetItem *item = this->item(row, col);
            item->setBackground(newBoard[row][col] == 1 ? Qt::black : Qt::white);
        }
    }
}

void GameOfLifeBoard::resizeEvent(QResizeEvent *event) {
    QTableWidget::resizeEvent(event);
    QSize boardSize = viewport()->size();
    int cellWidth = boardSize.width() / columnCount();
    int cellHeight = boardSize.height() / rowCount();
    setColumnWidthsAndHeights(cellWidth, cellHeight);
}

void GameOfLifeBoard::setColumnWidthsAndHeights(int cellWidth, int cellHeight) {
    for (int col = 0; col < columnCount(); ++col)
        setColumnWidth(col, cellWidth);
    for (int row = 0; row < rowCount(); ++row)
        setRowHeight(row, cellHeight);
}

