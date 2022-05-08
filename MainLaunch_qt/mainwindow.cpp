#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_btnNum = 1;
        QListWidgetItem *item=new QListWidgetItem;
        item->setIcon(QIcon("F:/GitHub Desktop/image/house01_2.jpg"));

        item->setSizeHint(QSize(100,100));
        ui->listWidget->addItem(item);

        QWidget *w = new QWidget;
        QHBoxLayout *hlayout=new QHBoxLayout;

        QVBoxLayout *vlayout1 = new QVBoxLayout;
        QVBoxLayout *vlayout2 = new QVBoxLayout;

        QLabel *label1 = new QLabel;
        label1->setAlignment(Qt::AlignCenter);
        label1->setText(QStringLiteral("天通南苑东一区-702"));

        QLabel *label2 = new QLabel;
        label2->setAlignment(Qt::AlignCenter);
        label2->setText(QStringLiteral("合租/月付/2350"));

        QPushButton *pushButton1=new QPushButton(w);
        QPushButton *pushButton2=new QPushButton(w);
        pushButton1->setText(QStringLiteral("采光展示"));
        pushButton2->setText(QStringLiteral("合约信息"));


        hlayout->addLayout(vlayout1);
        hlayout->addLayout(vlayout2);

        vlayout1->addWidget(label1);
        vlayout1->addWidget(label2);

        vlayout2->addWidget(pushButton1);
        vlayout2->addWidget(pushButton2);

        w->setLayout(hlayout);
        ui->listWidget->setIconSize(QSize(180,180));
        ui->listWidget->setItemWidget(item,w);

        connect(pushButton1, SIGNAL(clicked()), this, SLOT(On_list_Button_clicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::On_list_Button_clicked()
{
    m_lighthouse.show();
}
