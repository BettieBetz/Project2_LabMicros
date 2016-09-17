#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "secdialog.h"
#include "terdialog.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    SecDialog * secpantalla;
    terDialog * terpantalla;
};

#endif // MAINWINDOW_H
