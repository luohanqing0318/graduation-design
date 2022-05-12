#ifndef tenantsbought_information_H
#define tenantsbought_information_H
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
#include "deleteitem_btn.h"
namespace Ui {
class tenantsbought_information;
}

class tenantsbought_information : public QWidget
{
    Q_OBJECT

public:
    explicit tenantsbought_information(QWidget *parent = 0);
    ~tenantsbought_information();
    QString GetFindKind(int kind);

private slots:
    void on_pushButton_clicked();

private:
    Ui::tenantsbought_information *ui;
    QListWidgetItem* m_create_item;
    newitem_btn *m_pnewitembtn1;
    newitem_btn *m_pnewitembtn2;
    houseinfor_btn *m_phouseinfobtn;
    houseinfor *m_houseinfor_wdiget;
    deleteitem_btn *m_pdeleteitembtn;

    QList<int> m_house_id_list;
    QList<QString> m_bought_time_list;
    QList<QString> m_all_price_list;
    QList<QString> m_house_name_list;
};

#endif // tenantsbought_information_H
