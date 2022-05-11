#include "tenantsbought_information.h"
#include "ui_tenantsbought_information.h"
#include <qDebug>
#include <QSqlQuery>
#include "common_data.h"
tenantsbought_information::tenantsbought_information(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tenantsbought_information)
{
    ui->setupUi(this);
    QString sql = "SELECT * FROM `bought` where tenants_id = :a1;";
    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":a1", SingletonMan::GetMobileDataInstance()->username());
    if(query.exec())
    {
    while(query.next())
    {
        m_house_id_list.append(query.value(1).toInt());
        m_bought_time_list.append(query.value(2).toString());
        m_all_price_list.append(query.value(3).toString());
        m_house_name_list.append(query.value(4).toString());
    }
    }


    for(int i = 0; i < m_house_id_list.size(); i++)
    {
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


        QString housename = m_house_name_list[i];
        QString houseprice = m_all_price_list[i];
        QString boughttime = m_bought_time_list[i];
        label1->setAlignment(Qt::AlignCenter);
        label1->setText(QStringLiteral("地点:") + housename);

        m_create_item->setSizeHint(QSize(100,100));
        ui->listWidget->addItem(m_create_item);

         m_create_item->setIcon(QIcon(":/hasbought.png"));

        label2->setAlignment(Qt::AlignCenter);
        label2->setText(QStringLiteral("租金:") + houseprice);

        label3->setAlignment(Qt::AlignCenter);
        label3->setText(QStringLiteral("签约日期:") + boughttime);


        m_pnewitembtn1 = new newitem_btn(w);
        m_pnewitembtn1->setText(QStringLiteral("采光展示"));

        m_pnewitembtn1->setObjectName("m_pnewitembtn1"+QString::number(m_house_id_list[i]));
        m_pnewitembtn1->setHouse_id(m_house_id_list[i]);








        vlayout1->addWidget(label1);
        vlayout1->addWidget(label2);
        vlayout1->addWidget(label3);

        vlayout2->addWidget(m_pnewitembtn1);


        w->setLayout(hlayout);
        ui->listWidget->setIconSize(QSize(180,180));
        ui->listWidget->setItemWidget(m_create_item,w);
    }



}

tenantsbought_information::~tenantsbought_information()
{
    delete ui;
}

QString tenantsbought_information::GetFindKind(int kind)
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

void tenantsbought_information::on_pushButton_clicked()
{
    this->~tenantsbought_information();
}
