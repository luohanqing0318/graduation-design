#ifndef NEWITEM_BTN_H
#define NEWITEM_BTN_H

#include <QPushButton>
#include "src/lighthouse/lighthousedemo.h"
class newitem_btn : public QPushButton
{
    Q_OBJECT
public:
    explicit newitem_btn(QWidget *parent = nullptr);



    void mousePressEvent(QMouseEvent *e);

    QString objname() const;
    void setObjname(const QString &objname);

private:
    QString m_objname;
    LightHouseDemo *m_plighthouse;

signals:

public slots:
};

#endif // NEWITEM_BTN_H
