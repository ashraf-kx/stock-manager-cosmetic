#include "dashboard.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DashBoard w;
    w.show();

    return a.exec();
}
