#ifndef MANAGEPURCHASES_H
#define MANAGEPURCHASES_H

#include "ui_managepurchases.h"

class ManagePurchases : public QFrame, private Ui::ManagePurchases
{
    Q_OBJECT

public:
    explicit ManagePurchases(QWidget *parent = 0);
};

#endif // MANAGEPURCHASES_H
