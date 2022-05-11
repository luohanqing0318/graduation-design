﻿#ifndef tentantswishlist_H
#define tentantswishlist_H
#include <QListWidgetItem>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QWidget>
#include <QLabel>
#include <QList>
#include "newitem_btn.h"
#include "houseinfor_btn.h"
#include "houseinfor.h"
namespace Ui {
class tentantswishlist;
}

class tentantswishlist : public QWidget
{
    Q_OBJECT

public:
    explicit tentantswishlist(QWidget *parent = 0);
    ~tentantswishlist();
    QString GetFindKind(int kind);

private:
    Ui::tentantswishlist *ui;
    QListWidgetItem* m_create_item;
    newitem_btn *m_pnewitembtn1;
    newitem_btn *m_pnewitembtn2;
    houseinfor_btn *m_phouseinfobtn;
    houseinfor *m_houseinfor_wdiget;

    QList<int> m_house_id_list;

};

#endif // tentantswishlist_H