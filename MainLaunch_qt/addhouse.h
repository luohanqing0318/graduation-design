#ifndef ADDHOUSE_H
#define ADDHOUSE_H

#include <QWidget>
#include "src/lighthouse/lighthousedemo.h"
namespace Ui {
class addHouse;
}

class addHouse : public QWidget
{
    Q_OBJECT

public:
    explicit addHouse(QWidget *parent = 0);
    ~addHouse();

    QString objname() const;
    void setObjname(const QString &objname);
signals:
    void childsendText(QString str);
    void SendAddOneNewHouse(int house_id);


private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();



    void on_pushButton_5_clicked();

private:
    Ui::addHouse *ui;
    LightHouseDemo *m_pligghthousedemo;

    QString m_housename;
    int m_prices;
    QString m_picturename;
    QString m_objname;
};

#endif // ADDHOUSE_H
