#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QTableWidget>

class GameOfLifeBoard : public QTableWidget {
    Q_OBJECT

public:
    GameOfLifeBoard(QWidget *parent = nullptr);
    int width;
    int height;
    int widthCells;
    int heightCells;
    QSize getBoardSize() const;
    int getActiveCellCount() const;

    void saveGame(const QString &fileName);
    void loadGame(const QString &fileName);
    void setBoardSize(int width, int height);
    void setWidth(int Width){width = Width;}
    void setHeight(int Height){height = Height;}
    int getWidth(){return width;}
    int getHeigt(){return height;}

public slots:
    void initializeBoard(int Width,int Height);
    void play();
    void stop();
    void faster();
    void updateBoard();
    void random();

private slots:
    void cellClicked(int row, int column);

private:
    int countLiveNeighbors(int row, int column);
    QTimer *timer;
signals:
    void gameSaved();
};

#endif // GAMEBOARD_H
