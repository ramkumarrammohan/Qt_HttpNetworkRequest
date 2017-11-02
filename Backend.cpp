#include "Backend.h"
#include "RequestManager.h"

Backend::Backend(QObject *parent) : QObject(parent)
{

}

Backend::Backend(const RequestManager& requestManager, QObject* parent)
    : QObject(parent),
      m_requestManager(requestManager)
{
    qDebug() << "Backend initialized";
}

void Backend::getRequest(QString hostUrl)
{
    m_requestManager->GET(hostUrl);
}
