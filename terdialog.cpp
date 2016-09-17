#include "terdialog.h"
#include "ui_terdialog.h"
#include "mainwindow.h"
#include "secdialog.h"

terDialog::terDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::terDialog)
{
    ui->setupUi(this);
}

terDialog::~terDialog()
{
    delete ui;
}

void terDialog::on_pushButton_clicked()
{
    SecDialog secpantalla;
    secpantalla.setModal(true);
    secpantalla.exec();
    //MainWindow principal;
   //pantalla_principal.set;
    //pantalla_principal.exec();
}
