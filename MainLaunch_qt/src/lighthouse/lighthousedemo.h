#ifndef LIGHTHOUSEDEMO_H
#define LIGHTHOUSEDEMO_H

#include <QMainWindow>

namespace Ui {
class LightHouseDemo;
}

class LightHouseDemo : public QMainWindow
{
    Q_OBJECT

public:
    explicit LightHouseDemo(QWidget *parent = 0);
    ~LightHouseDemo();

private:
    Ui::LightHouseDemo *ui;
};

#endif // LIGHTHOUSEDEMO_H
