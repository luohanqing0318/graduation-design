#ifndef allhouselist_H
#define allhouselist_H
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
class allhouselist;
}

class allhouselist : public QWidget
{
    Q_OBJECT

public:
    explicit allhouselist(QWidget *parent = 0);
    ~allhouselist();
    QString GetFindKind(int kind);

private slots:
    void on_pushButton_clicked();

private:
    Ui::allhouselist *ui;
    QListWidgetItem* m_create_item;
    newitem_btn *m_pnewitembtn1;
    newitem_btn *m_pnewitembtn2;
    houseinfor_btn *m_phouseinfobtn;
    houseinfor *m_houseinfor_wdiget;
};

#endif // allhouselist_H
