#ifndef LOGIN_H
#define LOGIN_H

#include "ui_login.h"

class Login : public QFrame, private Ui::Login
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
};

#endif // LOGIN_H
