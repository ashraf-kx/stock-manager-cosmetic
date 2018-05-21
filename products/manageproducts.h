#ifndef MANAGEPRODUCTS_H
#define MANAGEPRODUCTS_H

#include "ui_manageproducts.h"

class ManageProducts : public QFrame, private Ui::ManageProducts
{
    Q_OBJECT

public:
    explicit ManageProducts(QWidget *parent = 0);
};

#endif // MANAGEPRODUCTS_H
