#ifndef LANDLORDSBOUGHT_INFORMATION_H
#define LANDLORDSBOUGHT_INFORMATION_H

#include <QWidget>

namespace Ui {
class landlordsbought_information;
}

class landlordsbought_information : public QWidget
{
    Q_OBJECT

public:
    explicit landlordsbought_information(QWidget *parent = 0);
    ~landlordsbought_information();

private slots:
    void on_pushButton_clicked();

private:
    Ui::landlordsbought_information *ui;
};

#endif // LANDLORDSBOUGHT_INFORMATION_H
