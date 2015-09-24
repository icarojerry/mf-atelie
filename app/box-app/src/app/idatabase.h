#ifndef IDATABASE_H
#define IDATABASE_H

#include <QObject>

class IDataBase : public QObject
{
    Q_OBJECT
public:
    explicit IDataBase(QObject *parent = 0);

signals:

public slots:

};

#endif // IDATABASE_H
