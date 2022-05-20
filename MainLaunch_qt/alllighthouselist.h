#ifndef alllighthouselist_H
#define alllighthouselist_H
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
class alllighthouselist;
}

class alllighthouselist : public QWidget
{
    Q_OBJECT

public:
    explicit alllighthouselist(QWidget *parent = 0);
    ~alllighthouselist();
    QString GetFindKind(int kind);

private slots:
    void on_pushButton_clicked();

private:
    Ui::alllighthouselist *ui;
    QListWidgetItem* m_create_item;
    newitem_btn *m_pnewitembtn1;
    newitem_btn *m_pnewitembtn2;

    houseinfor *m_houseinfor_wdiget;
};

#endif // alllighthouselist_H
