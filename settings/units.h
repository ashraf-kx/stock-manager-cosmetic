#ifndef UNITS_H
#define UNITS_H

#include "ui_units.h"

class Units : public QFrame, private Ui::Units
{
    Q_OBJECT

public:
    explicit Units(QWidget *parent = 0);
};

#endif // UNITS_H
