#ifndef CHANGEPERSONALINFORMATION_H
#define CHANGEPERSONALINFORMATION_H

#include <QWidget>

namespace Ui {
class changepersonalinformation;
}

class changepersonalinformation : public QWidget
{
    Q_OBJECT

public:
    explicit changepersonalinformation(QWidget *parent = 0);
    ~changepersonalinformation();

private slots:
    void on_pushButton_2_clicked();

    void pushButton_clicked();

private:
    Ui::changepersonalinformation *ui;
};

#endif // CHANGEPERSONALINFORMATION_H
