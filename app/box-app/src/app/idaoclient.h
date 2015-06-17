#ifndef IDAOCLIENT_H
#define IDAOCLIENT_H

#include <QObject>

class IDAOClient : public QObject
{
    Q_OBJECT
public:
    explicit IDAOClient(QObject *parent = 0);
    //getAllClient();
    //getClient(String nameClient);
    //addClient(IClient *newClient);
    //removeClient(IClient *deletedClient);
signals:

public slots:

};

#endif // IDAOCLIENT_H
