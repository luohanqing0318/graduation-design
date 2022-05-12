#include "tentantswishlist.h"
#include "ui_tentantswishlist.h"
#include <qDebug>
#include <QSqlQuery>
#include "common_data.h"
tentantswishlist::tentantswishlist(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tentantswishlist)
{
    ui->setupUi(this);
    QString username = SingletonMan::GetMobileDataInstance()->username();
    QString sql = "SELECT id FROM `tenants_wish` where buy_tenants_id = :a1;";
    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":a1", username);

    if(query.exec())
    {
        while(query.next())
        {
            m_house_id_list.append(query.value(0).toInt());
        }
     }

    for(int i = 0; i< m_house_id_list.size(); i++)
    {
        QString sql_select = "SELECT * FROM `rooms` where id = :a2;";
        QSqlQuery query_select;
        query_select.prepare(sql_select);
        query_select.bindValue(":a2", m_house_id_list[i]);
        if(query_select.exec())
        {
            qDebug()<<"tentantswishlist : sql select success";
            while (query_select.next()) {

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
             QString landlordsid = query_select.value(1).toString();
             QString housename = query_select.value(2).toString();
             label1->setAlignment(Qt::AlignCenter);
             label1->setText(QStringLiteral("地点:") + housename);

             m_create_item->setSizeHint(QSize(100,100));
             ui->listWidget->addItem(m_create_item);

             QPixmap picture;
             picture.loadFromData(query_select.value(3).toByteArray(),"JPG");
             m_create_item->setIcon(QIcon(picture));


             QString prices = query_select.value(4).toString();
             label2->setAlignment(Qt::AlignCenter);
             int thekind = query_select.value(5).toInt();
             QString kind = GetFindKind(thekind);
             label2->setText(QStringLiteral("价格:") + prices + "/" + kind);

             QString date = query_select.value(10).toString();
             label3->setAlignment(Qt::AlignCenter);
             label3->setText(QStringLiteral("上传日期:") + date);


             m_pnewitembtn1 = new newitem_btn(w);
             m_pnewitembtn1->setText(QStringLiteral("采光展示"));
             int house_id = query_select.value(0).toInt();
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

tentantswishlist::~tentantswishlist()
{
    delete ui;
}

QString tentantswishlist::GetFindKind(int kind)
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

void tentantswishlist::on_pushButton_clicked()
{
    this->~tentantswishlist();
}
