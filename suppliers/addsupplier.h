#ifndef ADDSUPPLIER_H
#define ADDSUPPLIER_H

#include "ui_addsupplier.h"

class AddSupplier : public QFrame, private Ui::AddSupplier
{
    Q_OBJECT

public:
    explicit AddSupplier(QWidget *parent = 0);
};

#endif // ADDSUPPLIER_H
