#ifndef ACTIVITY_H
#define ACTIVITY_H

#include <QObject>

class Activity : public QObject
{
    Q_OBJECT
public:
    explicit Activity(QObject *parent = nullptr);

signals:

public slots:
};

#endif // ACTIVITY_H