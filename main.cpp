#include "mafiaannouncer.h"
#include "playersdatabase.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MafiaAnnouncer w;
    w.show();
    PlayersDataBase dbase;
    dbase.printPlayers();
    return a.exec();
}
