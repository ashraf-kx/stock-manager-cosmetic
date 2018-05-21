#ifndef HEADER_H
#define HEADER_H

#include "ui_header.h"

class Header : public QFrame, private Ui::Header
{
    Q_OBJECT

public:
    explicit Header(QWidget *parent = 0);
};

#endif // HEADER_H
