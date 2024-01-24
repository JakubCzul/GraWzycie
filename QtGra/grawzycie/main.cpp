#include "mainwindow.h"
#include "oknoStart.h"
#include "gameboard.h"

#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    windowStartDialog win;
    if (win.exec() == QDialog::Rejected) {
        return 0;
    }

    int width = win.getWidth();
    int height = win.getHeight();

    MainWindow w;
    w.getGameBoard()->setBoardSize(width, height);
    w.show();


    return a.exec();
}
