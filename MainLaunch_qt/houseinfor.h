#ifndef HOUSEINFOR_H
#define HOUSEINFOR_H

#include <QWidget>

namespace Ui {
class houseinfor;
}

class houseinfor : public QWidget
{
    Q_OBJECT

public:
    explicit houseinfor(QWidget *parent = 0);
    ~houseinfor();
    void SetUIName(QString &name);
    void SetUIAge(QString &age);
    void SetUIPhone(QString &phone);
    int houseid() const;
    void setHouseid(int houseid);

    QString landlordsid() const;
    void setLandlordsid(const QString &landlordsid);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::houseinfor *ui;
    int m_houseid;
    QString m_landlordsid;
};

#endif // HOUSEINFOR_H
