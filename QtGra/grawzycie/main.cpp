#include "mainwindow.h"
#include "gameboard.h"

#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    MainWindow w;

    int width = w.getWidthSpinBox()->value();
    int height = w.getHeightSpinBox()->value();

    w.getGameBoard()->setBoardSize(width, height);
    w.show();

    return a.exec();
}
