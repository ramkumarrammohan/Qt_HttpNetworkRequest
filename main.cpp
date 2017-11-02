#include <QCoreApplication>

#include "Backend.h"
#include "RequestManager.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "App started";
    RequestManager requestManager;
    Backend backend(&requestManager);

    backend.getRequest("www.google.com");

    return a.exec();
}
