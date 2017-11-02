#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>

class RequestManager;

class Backend : public QObject
{
    Q_OBJECT
public:
    explicit Backend(QObject *parent = nullptr);
    explicit Backend(const RequestManager& requestManager, QObject* parent = 0);

    void getRequest(QString hostUrl);
signals:

public slots:

private:
    RequestManager* m_requestManager;
};

#endif // BACKEND_H
