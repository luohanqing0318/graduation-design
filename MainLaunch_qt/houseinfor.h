#ifndef HOUSEINFOR_H
#define HOUSEINFOR_H

#include <QWidget>

namespace Ui {
class houseinfor;
}

class houseinfor : public QWidget
{
    Q_OBJECT

public:
    explicit houseinfor(QWidget *parent = 0);
    ~houseinfor();

private:
    Ui::houseinfor *ui;
};

#endif // HOUSEINFOR_H
