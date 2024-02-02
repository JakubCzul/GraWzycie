#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSpinBox>
#include "gameboard.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    GameOfLifeBoard* getGameBoard() const;
    QSpinBox* getWidthSpinBox() const;
    QSpinBox* getHeightSpinBox() const;


private slots:
    void on_moveButton_clicked();
    void on_playButton_clicked();
    void on_saveButton_clicked();
    void on_loadButton_clicked();
    void on_randomButton_clicked();
    void on_startButton_clicked();

private:
    Ui::MainWindow *ui;
    GameOfLifeBoard *gameBoard;
    void updateInfoWindow();

};
#endif
