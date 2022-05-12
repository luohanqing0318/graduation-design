#ifndef goodhouselist_H
#define goodhouselist_H
#include <QListWidgetItem>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QWidget>
#include <QLabel>
#include "newitem_btn.h"
#include "houseinfor_btn.h"
#include "houseinfor.h"
namespace Ui {
class goodhouselist;
}

class goodhouselist : public QWidget
{
    Q_OBJECT

public:
    explicit goodhouselist(QWidget *parent = 0);
    ~goodhouselist();
    QString GetFindKind(int kind);

private slots:
    void on_pushButton_clicked();

private:
    Ui::goodhouselist *ui;
    QListWidgetItem* m_create_item;
    newitem_btn *m_pnewitembtn1;
    newitem_btn *m_pnewitembtn2;
    houseinfor_btn *m_phouseinfobtn;
    houseinfor *m_houseinfor_wdiget;
};

#endif // goodhouselist_H
