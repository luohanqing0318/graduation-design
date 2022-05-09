#ifndef MYINFORMATION_H
#define MYINFORMATION_H

#include <QWidget>

namespace Ui {
class myinformation;
}

class myinformation : public QWidget
{
    Q_OBJECT

public:
    explicit myinformation(QWidget *parent = 0);
    ~myinformation();

private:
    Ui::myinformation *ui;
};

#endif // MYINFORMATION_H
