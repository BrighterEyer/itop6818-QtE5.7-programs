#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font;
        font.setPointSize(8);
        font.setFamily(("wenquanyi"));
        font.setBold(false);
        a.setFont(font);
    MainWindow w;
    w.show();

    return a.exec();
}
