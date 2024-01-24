#include "oknoStart.h"
#include "ui_oknoStart.h"
#include "gameboard.h"


windowStartDialog::windowStartDialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::windowStartDialog)
{
    ui->setupUi(this);
}

windowStartDialog::~windowStartDialog()
{
    delete ui;
}


int windowStartDialog::getHeight() const {
    return ui->heightSpinBox->value();

}

int windowStartDialog::getWidth() const {
    return ui->widthSpinBox->value();
}

void windowStartDialog::on_buttonBox_accepted() {
    int width = getWidth();
    int height = getHeight();
    QObject* potentialParent = parent();
    if (qobject_cast<GameOfLifeBoard*>(potentialParent)) {
        GameOfLifeBoard* gameBoard = qobject_cast<GameOfLifeBoard*>(potentialParent);
        gameBoard->setBoardSize(width, height);
    }

    close();
}

void windowStartDialog::on_buttonBox_rejected() {
    close();
}

