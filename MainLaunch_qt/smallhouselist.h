#ifndef SMALLHOUSELIST_H
#define SMALLHOUSELIST_H
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
class smallhouselist;
}

class smallhouselist : public QWidget
{
    Q_OBJECT

public:
    explicit smallhouselist(QWidget *parent = 0);
    ~smallhouselist();
    QString GetFindKind(int kind);

private:
    Ui::smallhouselist *ui;
    QListWidgetItem* m_create_item;
    newitem_btn *m_pnewitembtn1;
    newitem_btn *m_pnewitembtn2;
    houseinfor_btn *m_phouseinfobtn;
    houseinfor *m_houseinfor_wdiget;
};

#endif // SMALLHOUSELIST_H
