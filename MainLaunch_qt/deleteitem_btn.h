#ifndef deleteitem_btn_H
#define deleteitem_btn_H

#include <QPushButton>
#include "src/lighthouse/lighthousedemo.h"
class deleteitem_btn : public QPushButton
{
    Q_OBJECT
public:
    explicit deleteitem_btn(QWidget *parent = nullptr);



    void mousePressEvent(QMouseEvent *e);

    int getHouse_id() const;
    void setHouse_id(int value);

private:

    int house_id;


signals:

public slots:
};

#endif // deleteitem_btn_H
