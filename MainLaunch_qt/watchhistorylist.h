#ifndef watchhistorylist_H
#define watchhistorylist_H
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
class watchhistorylist;
}

class watchhistorylist : public QWidget
{
    Q_OBJECT

public:
    explicit watchhistorylist(QWidget *parent = 0);
    ~watchhistorylist();
    QString GetFindKind(int kind);

private slots:
    void on_pushButton_clicked();

private:
    Ui::watchhistorylist *ui;
    QListWidgetItem* m_create_item;
    newitem_btn *m_pnewitembtn1;
    newitem_btn *m_pnewitembtn2;
    houseinfor_btn *m_phouseinfobtn;
    houseinfor *m_houseinfor_wdiget;

    QList<int> m_house_id_list;

};

#endif // watchhistorylist_H
