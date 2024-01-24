#ifndef OKNOSTART_H
#define OKNOSTART_H
#include <QDialog>

namespace Ui {
class windowStartDialog;
}

class windowStartDialog : public QDialog
{
    Q_OBJECT

public:
    explicit windowStartDialog(QWidget *parent = nullptr);
    ~windowStartDialog();

    int getWidth() const;
    int getHeight() const;

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    Ui::windowStartDialog *ui;
};


#endif // OKNOSTART_H
