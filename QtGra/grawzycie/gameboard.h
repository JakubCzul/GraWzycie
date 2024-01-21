#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QTableWidget>

class GameOfLifeBoard : public QTableWidget {
    Q_OBJECT

public:
    GameOfLifeBoard(QWidget *parent = nullptr);

public slots:
    void initializeBoard();
    void play();
    void stop();
    void faster();
    void updateBoard();

private slots:
    void cellClicked(int row, int column);

private:
    int countLiveNeighbors(int row, int column);
    QTimer *timer;
};

#endif // GAMEBOARD_H
