#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QTableWidget>
#include <QTableWidgetItem>
#include <QTimer>
#include <QVector>
#include <QDebug>
#include <QFile>
#include <QTextStream>
class GameOfLifeBoard : public QTableWidget {
    Q_OBJECT

public:
    GameOfLifeBoard(QWidget *parent = nullptr);
    int getActiveCellCount() const;
    void saveGame(const QString &fileName);
    void loadGame(const QString &fileName);
    void setBoardSize(int width, int height);
    void setColumnWidthsAndHeights(int cellWidth, int cellHeight);

public slots:
    void initializeBoard(int width, int height);
    void play();
    void stop();
    void faster();
    void updateBoard();
    void random();

private slots:
    void cellClicked(int row, int column);

private:
    int CellsHeight = 50;
    int CellsWidth = 50;
    int widthCells;
    int heightCells;
    QSize getBoardSize() const;
    int countLiveNeighbors(int row, int column);
    QTimer *timer;
signals:
    void gameSaved();
    void dateUpdated();
    void populationSizeChanged();

protected:
    void resizeEvent(QResizeEvent *event) override;
};

#endif // GAMEBOARD_H
