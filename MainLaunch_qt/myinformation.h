#ifndef MYINFORMATION_H
#define MYINFORMATION_H

#include <QWidget>
#include "changepersonalinformation.h"
namespace Ui {
class myinformation;
}

class myinformation : public QWidget
{
    Q_OBJECT

public:
    explicit myinformation(QWidget *parent = 0);
    ~myinformation();
    void GetName(QString name);
private slots:
    void on_pushButton_2_clicked();

private:
    Ui::myinformation *ui;
    QString m_name;
    changepersonalinformation *m_changewidiget;
};

#endif // MYINFORMATION_H
