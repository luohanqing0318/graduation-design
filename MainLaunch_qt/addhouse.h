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

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::addHouse *ui;
    LightHouseDemo *m_pligghthousedemo;
};

#endif // ADDHOUSE_H
