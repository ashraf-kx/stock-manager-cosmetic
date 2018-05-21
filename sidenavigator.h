#ifndef SIDENAVIGATOR_H
#define SIDENAVIGATOR_H

#include "ui_sidenavigator.h"

class SideNavigator : public QFrame, private Ui::SideNavigator
{
    Q_OBJECT

public:
    explicit SideNavigator(QWidget *parent = 0);
};

#endif // SIDENAVIGATOR_H
