#ifndef COREAPPLICATION_H
#define COREAPPLICATION_H

#include <QObject>

class CoreApplication : public QObject
{
    Q_OBJECT
public:
    explicit CoreApplication(QObject *parent = 0);

signals:

public slots:

};

#endif // COREAPPLICATION_H
