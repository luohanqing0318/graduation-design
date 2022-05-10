#ifndef HOUSEINFOR_BTN_H
#define HOUSEINFOR_BTN_H

#include <QPushButton>
#include "houseinfor.h"
class houseinfor_btn : public QPushButton
{
    Q_OBJECT
public:
    explicit houseinfor_btn(QWidget *parent = nullptr);

    void mousePressEvent(QMouseEvent *e);


    int houseid() const;
    void setHouseid(int houseid);

    QString landlordsid() const;
    void setLandlordsid(const QString &landlordsid);

private:
    houseinfor* m_phouseinfor_widget;
    int m_houseid;
    QString m_landlordsid;
signals:

public slots:
};

#endif // HOUSEINFOR_BTN_H
