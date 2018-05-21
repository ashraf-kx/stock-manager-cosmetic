#ifndef NEWPURCHASE_H
#define NEWPURCHASE_H

#include "ui_newpurchase.h"

class NewPurchase : public QFrame, private Ui::NewPurchase
{
    Q_OBJECT

public:
    explicit NewPurchase(QWidget *parent = 0);
};

#endif // NEWPURCHASE_H
