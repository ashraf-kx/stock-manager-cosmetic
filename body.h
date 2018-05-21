#ifndef BODY_H
#define BODY_H

#include "ui_body.h"

class Body : public QFrame, private Ui::Body
{
    Q_OBJECT

public:
    explicit Body(QWidget *parent = 0);
};

#endif // BODY_H
