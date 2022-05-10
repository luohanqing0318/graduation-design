#ifndef bighouselist_H
#define bighouselist_H
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
class bighouselist;
}

class bighouselist : public QWidget
{
    Q_OBJECT

public:
    explicit bighouselist(QWidget *parent = 0);
    ~bighouselist();
    QString GetFindKind(int kind);

private:
    Ui::bighouselist *ui;
    QListWidgetItem* m_create_item;
    newitem_btn *m_pnewitembtn1;
    newitem_btn *m_pnewitembtn2;
    houseinfor_btn *m_phouseinfobtn;
    houseinfor *m_houseinfor_wdiget;
};

#endif // bighouselist_H
