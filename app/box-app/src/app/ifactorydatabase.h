#ifndef IFACTORYDATABASE_H
#define IFACTORYDATABASE_H

#include <QObject>

class IFactoryDataBase : public QObject
{
    Q_OBJECT
public:
    explicit IFactoryDataBase(QObject *parent = 0);
    //static getInstance();
   // virtual  IDAOClient  createDBToClient();
   // virtual  IDAORequest createDBToRequest();

signals:

public slots:

protected:
    IFactoryDataBase();

private:
    static IFactoryDataBase _instance;
};

#endif // IFACTORYDATABASE_H
