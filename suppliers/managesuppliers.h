#ifndef MANAGESUPPLIERS_H
#define MANAGESUPPLIERS_H

#include "ui_managesuppliers.h"

class ManageSuppliers : public QFrame, private Ui::ManageSuppliers
{
    Q_OBJECT

public:
    explicit ManageSuppliers(QWidget *parent = 0);
};

#endif // MANAGESUPPLIERS_H
