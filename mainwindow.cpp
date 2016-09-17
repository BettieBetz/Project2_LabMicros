#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secdialog.h"
#include "terdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
   //SecDialog secpantalla;
    //secpantalla.setModal(true);
    //secpantalla.exec();
    hide();
    secpantalla = new SecDialog (this);
    secpantalla->show();

}

void MainWindow::on_pushButton_2_clicked()
{
    hide ();
    terpantalla = new terDialog (this);
    terpantalla->show();
}
