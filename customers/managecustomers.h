#ifndef MANAGECUSTOMERS_H
#define MANAGECUSTOMERS_H

#include "ui_managecustomers.h"

class ManageCustomers : public QFrame, private Ui::ManageCustomers
{
    Q_OBJECT

public:
    explicit ManageCustomers(QWidget *parent = 0);
};

#endif // MANAGECUSTOMERS_H
