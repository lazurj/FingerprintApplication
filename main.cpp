#include "client.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Client c;
    c.setWindowTitle("Client");
    c.show();
    return a.exec();

}

