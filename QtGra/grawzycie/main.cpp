#include "mainwindow.h"
#include "oknoStart.h"
#include "gameboard.h"

#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    windowStartDialog win;
    if (win.exec() == QDialog::Rejected) {
        // Jeśli użytkownik anuluje, zakończ program
        return 0;
    }

    // Pobierz rozmiar planszy z windowStartDialog
    int width = win.getWidth();
    int height = win.getHeight();

    // Utwórz MainWindow z rozmiarami planszy
    MainWindow w;
    w.getGameBoard()->setBoardSize(width, height);
    w.show();


    return a.exec();
}
