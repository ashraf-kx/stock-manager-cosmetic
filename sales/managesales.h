#ifndef MANAGESALES_H
#define MANAGESALES_H

#include "ui_managesales.h"

class ManageSales : public QFrame, private Ui::ManageSales
{
    Q_OBJECT

public:
    explicit ManageSales(QWidget *parent = 0);
};

#endif // MANAGESALES_H
