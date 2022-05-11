#ifndef TENANTSBOUGHT_INFORMATION_H
#define TENANTSBOUGHT_INFORMATION_H

#include <QWidget>

namespace Ui {
class tenantsbought_information;
}

class tenantsbought_information : public QWidget
{
    Q_OBJECT

public:
    explicit tenantsbought_information(QWidget *parent = 0);
    ~tenantsbought_information();

private slots:
    void on_pushButton_clicked();

private:
    Ui::tenantsbought_information *ui;
};

#endif // TENANTSBOUGHT_INFORMATION_H
