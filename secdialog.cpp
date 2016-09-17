#include "secdialog.h"
#include "ui_secdialog.h"
#include "terdialog.h"
#include "mainwindow.h"

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_pushButton_clicked()
{
    hide();
    terpantalla = new terDialog (this);
    terpantalla->show();
}

