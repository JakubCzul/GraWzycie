#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QTimer>
#include <QGraphicsRectItem>

class GameOfLifeBoard : public QGraphicsView
{
    Q_OBJECT

public:
    GameOfLifeBoard(QWidget *parent = nullptr);
    static const int width = 800;
    static const int height = 400;
    int widthCells;
    int heightCells;
    QSize getBoardSize() const;
    int getActiveCellCount() const;

    void saveGame(const QString &fileName);
    void loadGame(const QString &fileName);
    void setBoardSize(int width, int height);

public slots:
    void initializeBoard(int width, int height);
    void play();
    void stop();
    void faster();
    void updateBoard();
    void random();

private:
    int countLiveNeighbors(int row, int column);
    QTimer *timer;
    QGraphicsScene *scene;

signals:
    void gameSaved();
};

#endif // GAMEBOARD_H
