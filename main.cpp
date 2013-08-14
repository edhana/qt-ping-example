#include <stdio.h>
#include <QtCore/QCoreApplication>
#include <QDebug>
#include "pingmodel.h"

int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv);
    PingModel model;

    qDebug() << "Iniciando o ping ...";
    model.start_command();

    while(model.is_running()){
        qDebug() << "waiting ...";
        sleep(1);
    }

    qDebug() << "Terminou o processo.";

    return 1;
}
