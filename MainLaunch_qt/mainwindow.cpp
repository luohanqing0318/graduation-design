#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "common_data.h"
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_myinformation = new myinformation();
    m_paddhouse = new addHouse();
//        QListWidgetItem *item=new QListWidgetItem;

//        item->setIcon(QIcon("F:/GitHub Desktop/image/house01_2.jpg"));
//        item->setSizeHint(QSize(100,100));
//        ui->listWidget->addItem(item);

//        QWidget *w = new QWidget;
//        QHBoxLayout *hlayout=new QHBoxLayout;

//        QVBoxLayout *vlayout1 = new QVBoxLayout;
//        QVBoxLayout *vlayout2 = new QVBoxLayout;

//        QLabel *label1 = new QLabel;
//        label1->setAlignment(Qt::AlignCenter);
//        label1->setText(QStringLiteral("天通南苑东一区-702"));

//        QLabel *label2 = new QLabel;
//        label2->setAlignment(Qt::AlignCenter);
//        label2->setText(QStringLiteral("合租/月付/2350"));

//        QPushButton *pushButton1=new QPushButton(w);
//        QPushButton *pushButton2=new QPushButton(w);
//        pushButton1->setText(QStringLiteral("采光展示"));
//        pushButton2->setText(QStringLiteral("合约信息"));
//        hlayout->addLayout(vlayout1);
//        hlayout->addLayout(vlayout2);

//        vlayout1->addWidget(label1);
//        vlayout1->addWidget(label2);

//        vlayout2->addWidget(pushButton1);
//        vlayout2->addWidget(pushButton2);

//        w->setLayout(hlayout);
//        ui->listWidget->setIconSize(QSize(180,180));
//        ui->listWidget->setItemWidget(item,w);
//    connect(pushButton1, SIGNAL(clicked()), this, SLOT(On_list_Button_clicked()));
//    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(on_pushButton_2_clicked()));
        GetNewrooms();

        if(SingletonMan::GetMobileDataInstance()->getWho())
        {
            ui->pushButton_10->hide();
        }else{
            ui->pushButton->hide();
        }




        m_picturewidget = new Picturewidget();

        ui->verticalLayout_2->addWidget(m_picturewidget);

        m_picturewidget->addImage(":/1.png");
        m_picturewidget->addImage(":/2.png");
        m_picturewidget->addImage(":/3.png");
        m_picturewidget->addImage(":/4.png");
        m_picturewidget->startPlay();
        m_picturewidget->show();


        QString sql = "SELECT * FROM `rooms`order by id desc;";
        QSqlQuery query;
        query.prepare(sql);

        if(query.exec())
        {
            qDebug()<<"newlabel : sql select success";
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


             vlayout1->addWidget(label1);
             vlayout1->addWidget(label2);
             vlayout1->addWidget(label3);

             vlayout2->addWidget(m_pnewitembtn1);


             w->setLayout(hlayout);
             ui->listWidget->setIconSize(QSize(180,180));
             ui->listWidget->setItemWidget(m_create_item,w);


            }

         }




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::GetNewrooms()
{
    QString sql = "SELECT * FROM `rooms`;";

    QSqlQuery query;
    query.prepare(sql);
    if(query.exec())
    {
    qDebug()<<"newrooms : sql select success";
    if (query.last())

    {
        m_newrooms = query.at() + 1;
        qDebug()<<"newrooms"<< m_newrooms;

     }

    }
}

QString MainWindow::GetFindKind(int kind)
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
void MainWindow::On_list_Button_clicked()
{

}

void MainWindow::on_pushButton_2_clicked()
{


    m_myinformation->show();
}


void MainWindow::on_pushButton_10_clicked()
{
    m_paddhouse->show();
}

void MainWindow::on_pushButton_7_clicked()
{

}
