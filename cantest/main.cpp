#include "cantest.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cantest w;
    w.show();

    return a.exec();
}
