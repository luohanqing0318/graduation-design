#ifndef MYINFORMATION_H
#define MYINFORMATION_H

#include <QWidget>
#include "changepersonalinformation.h"
#include "tenantsbought_information.h"
#include "landlordsbought_information.h"
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

    void on_pushButton_clicked();

private:
    Ui::myinformation *ui;
    QString m_name;
    changepersonalinformation *m_changewidiget;
    tenantsbought_information *m_ptenantswidget;
    landlordsbought_information *m_plandlordswidget;
};

#endif // MYINFORMATION_H
