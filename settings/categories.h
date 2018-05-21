#ifndef CATEGORIES_H
#define CATEGORIES_H

#include "ui_categories.h"

class Categories : public QFrame, private Ui::Categories
{
    Q_OBJECT

public:
    explicit Categories(QWidget *parent = 0);
};

#endif // CATEGORIES_H
