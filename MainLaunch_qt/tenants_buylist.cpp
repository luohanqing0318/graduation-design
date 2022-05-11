#include "tenants_buylist.h"
#include "ui_tenants_buylist.h"
#include <qDebug>
#include <QSqlQuery>
#include "common_data.h"
tenants_buylist::tenants_buylist(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tenants_buylist)
{
    ui->setupUi(this);


}

tenants_buylist::~tenants_buylist()
{
    delete ui;
}

QString tenants_buylist::GetFindKind(int kind)
{
    QString thekind = "";
    if(kind == 0)
    {
        thekind += QString(QStringLiteral("合租"));

    }else if(kind == 1)
    {
        thekind += QString(QStringLiteral("整租"));
    }
    else if(kind == 2)
    {
        thekind += QString(QStringLiteral("房东直租"));
     }
    return thekind;
}

void tenants_buylist::UpdateList()
{
    for(int i = 0; i < m_houseid_list.size(); i++)
    {
        QString sql = "SELECT * FROM `rooms` where id = :a1;";
        QSqlQuery query;
        query.prepare(sql);
        query.bindValue(":a1", m_houseid_list[i]);

        if(query.exec())
        {
            qDebug()<<"tenants_buylist : sql select success";
            while (query.next()) {

             m_create_item=new QListWidgetItem;

             QWidget *w = new QWidget;
             QHBoxLayout *hlayout=new QHBoxLayout;
             QVBoxLayout *vlayout1 = new QVBoxLayout;
             QVBoxLayout *vlayout2 = new QVBoxLayout;
             hlayout->addLayout(vlayout1);
             hlayout->addLayout(vlayout2);

             QLabel *label1 = new QLabel;
             QLabel *label2 = new QLabel;
             QLabel *label3 = new QLabel;
             QString landlordsid = query.value(1).toString();
             QString housename = query.value(2).toString();
             label1->setAlignment(Qt::AlignCenter);
             label1->setText(QStringLiteral("地点:") + housename);

             m_create_item->setSizeHint(QSize(100,100));
             ui->listWidget->addItem(m_create_item);

             QPixmap picture;
             picture.loadFromData(query.value(3).toByteArray(),"JPG");
             m_create_item->setIcon(QIcon(picture));


             QString prices = query.value(4).toString();
             label2->setAlignment(Qt::AlignCenter);
             int thekind = query.value(5).toInt();
             QString kind = GetFindKind(thekind);
             label2->setText(QStringLiteral("价格:") + prices + "/" + kind);

             QString date = query.value(10).toString();
             label3->setAlignment(Qt::AlignCenter);
             label3->setText(QStringLiteral("上传日期:") + date);


             m_pnewitembtn1 = new newitem_btn(w);
             m_pnewitembtn1->setText(QStringLiteral("采光展示"));
             int house_id = query.value(0).toInt();
             m_pnewitembtn1->setObjectName("m_pnewitembtn1"+QString::number(house_id));
             m_pnewitembtn1->setHouse_id(house_id);


             m_phouseinfobtn = new houseinfor_btn(w);
             m_phouseinfobtn->setText(QStringLiteral("房东信息"));
             m_phouseinfobtn->setHouseid(house_id);
             m_phouseinfobtn->setLandlordsid(landlordsid);





             vlayout1->addWidget(label1);
             vlayout1->addWidget(label2);
             vlayout1->addWidget(label3);

             vlayout2->addWidget(m_pnewitembtn1);
             vlayout2->addWidget(m_phouseinfobtn);

             w->setLayout(hlayout);
             ui->listWidget->setIconSize(QSize(180,180));
             ui->listWidget->setItemWidget(m_create_item,w);


            }

         }

    }
}

void tenants_buylist::mousePressEvent(QMouseEvent *e)
{

}

QString tenants_buylist::tenantsusername() const
{
    return m_tenantsusername;
}

void tenants_buylist::setTenantsusername(const QString &tenantsusername)
{
    m_tenantsusername = tenantsusername;
}

QList<int> tenants_buylist::houseid_list() const
{
    return m_houseid_list;
}

void tenants_buylist::setHouseid_list(const QList<int> &houseid_list)
{
    m_houseid_list = houseid_list;
}

void tenants_buylist::addHouseid_list(int house_id)
{
    m_houseid_list.append(house_id);
}


