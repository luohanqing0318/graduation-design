#ifndef SIGNDIALOG_H
#define SIGNDIALOG_H

#include <QDialog>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
namespace Ui {
class SignDialog;
}

class SignDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SignDialog(QWidget *parent = 0);
    ~SignDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SignDialog *ui;
};

#endif // SIGNDIALOG_H
