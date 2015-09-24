#ifndef IDAOREQUEST_H
#define IDAOREQUEST_H

#include <QObject>

class IDAORequest : public QObject
{
    Q_OBJECT
public:
    explicit IDAORequest(QObject *parent = 0);
    /*virtual getAllRequest(); //list
    virtual getRequestByClientName(String clientName);//list
    virtual getRequestByNumber(String requestNumber);//single
    virtual getRequestByDate(QDate date);//list
    virtual addClient(IClient *newClient);
    virtual removeClient(IClient *deletedClient);*/
signals:

public slots:

};

#endif // IDAOREQUEST_H
