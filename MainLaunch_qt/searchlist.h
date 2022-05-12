#ifndef searchlist_H
#define searchlist_H
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
class searchlist;
}

class searchlist : public QWidget
{
    Q_OBJECT

public:
    explicit searchlist(QWidget *parent = 0);
    ~searchlist();
    QString GetFindKind(int kind);

private slots:
    void on_pushButton_clicked();

private:
    Ui::searchlist *ui;
    QListWidgetItem* m_create_item;
    newitem_btn *m_pnewitembtn1;
    newitem_btn *m_pnewitembtn2;
    houseinfor_btn *m_phouseinfobtn;
    houseinfor *m_houseinfor_wdiget;
};

#endif // searchlist_H
