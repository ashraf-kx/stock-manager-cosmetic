#ifndef ADDPRODUCT_H
#define ADDPRODUCT_H

#include "ui_addproduct.h"

class AddProduct : public QWizard, private Ui::AddProduct
{
    Q_OBJECT

public:
    explicit AddProduct(QWidget *parent = 0);
};

#endif // ADDPRODUCT_H
