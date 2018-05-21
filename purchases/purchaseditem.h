#ifndef PURCHASEDITEM_H
#define PURCHASEDITEM_H

#include "ui_purchaseditem.h"

class PurchasedItem : public QFrame, private Ui::PurchasedItem
{
    Q_OBJECT

public:
    explicit PurchasedItem(QWidget *parent = 0);
};

#endif // PURCHASEDITEM_H
