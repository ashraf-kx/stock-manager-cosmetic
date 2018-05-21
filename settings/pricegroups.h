#ifndef PRICEGROUPS_H
#define PRICEGROUPS_H

#include "ui_pricegroups.h"

class PriceGroups : public QFrame, private Ui::PriceGroups
{
    Q_OBJECT

public:
    explicit PriceGroups(QWidget *parent = 0);
};

#endif // PRICEGROUPS_H
