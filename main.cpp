#include "mafiaannouncer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MafiaAnnouncer w;
    w.show();

    return a.exec();
}
