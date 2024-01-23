#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QTableWidget>

class GameOfLifeBoard : public QTableWidget {
    Q_OBJECT

public:
    GameOfLifeBoard(QWidget *parent = nullptr);
    static const int width = 800;
    static const int height = 400;
    QSize getBoardSize() const;
    int getActiveCellCount() const;

    void saveGame(const QString &fileName);
    void loadGame(const QString &fileName);

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
signals:
    void gameSaved();
};

#endif // GAMEBOARD_H
