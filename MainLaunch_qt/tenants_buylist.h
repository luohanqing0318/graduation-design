#ifndef tenants_buylist_H
#define tenants_buylist_H
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
class tenants_buylist;
}

class tenants_buylist : public QWidget
{
    Q_OBJECT

public:
    explicit tenants_buylist(QWidget *parent = 0);
    ~tenants_buylist();
    QString GetFindKind(int kind);
    void UpdateList();
    void mousePressEvent(QMouseEvent* e);





    QString tenantsusername() const;
    void setTenantsusername(const QString &tenantsusername);

    QList<int> houseid_list() const;
    void setHouseid_list(const QList<int> &houseid_list);
    void addHouseid_list(int house_id);
private:
    Ui::tenants_buylist *ui;
    QListWidgetItem* m_create_item;
    newitem_btn *m_pnewitembtn1;
    newitem_btn *m_pnewitembtn2;
    houseinfor_btn *m_phouseinfobtn;
    houseinfor *m_houseinfor_wdiget;
    QString m_tenantsusername;
    QList<int>m_houseid_list;
};

#endif // tenants_buylist_H
