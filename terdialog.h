#ifndef TERDIALOG_H
#define TERDIALOG_H
//#include "secdialog.h"
#include <QDialog>

namespace Ui {
class terDialog;
}

class terDialog : public QDialog
{
    Q_OBJECT

public:
    explicit terDialog(QWidget *parent = 0);
    ~terDialog();

private slots:
    //void on_radioButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::terDialog *ui;
  //  SecDialog * secpantalla;
};

#endif // TERDIALOG_H
