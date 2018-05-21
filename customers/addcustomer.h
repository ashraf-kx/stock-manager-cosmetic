#ifndef ADDCUSTOMER_H
#define ADDCUSTOMER_H

#include "ui_addcustomer.h"

class AddCustomer : public QFrame, private Ui::AddCustomer
{
    Q_OBJECT

public:
    explicit AddCustomer(QWidget *parent = 0);
};

#endif // ADDCUSTOMER_H
