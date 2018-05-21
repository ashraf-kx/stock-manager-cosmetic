#ifndef DIALOGBOX_H
#define DIALOGBOX_H

#include "ui_dialogbox.h"

class DialogBox : public QWidget, private Ui::DialogBox
{
    Q_OBJECT

public:
    explicit DialogBox(QWidget *parent = 0);
};

#endif // DIALOGBOX_H
