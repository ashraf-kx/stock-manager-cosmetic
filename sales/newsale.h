#ifndef NEWSALE_H
#define NEWSALE_H

#include "ui_newsale.h"

class NewSale : public QFrame, private Ui::NewSale
{
    Q_OBJECT

public:
    explicit NewSale(QWidget *parent = 0);
};

#endif // NEWSALE_H
