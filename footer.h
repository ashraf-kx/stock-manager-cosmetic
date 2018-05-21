#ifndef FOOTER_H
#define FOOTER_H

#include "ui_footer.h"

class Footer : public QFrame, private Ui::Footer
{
    Q_OBJECT

public:
    explicit Footer(QWidget *parent = 0);
};

#endif // FOOTER_H
