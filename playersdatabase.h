#ifndef PLAYERSDATABASE_H
#define PLAYERSDATABASE_H

#include <QObject>
#include <QString>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#include "mafiaplayer.h"

class PlayersDataBase : public QObject
{
    Q_OBJECT
public:

    explicit PlayersDataBase(QObject *parent = 0);
    void printPlayers();
    ~PlayersDataBase();
signals:

public slots:

private:
    int totalPlayersNumber_;
    QString playersDataBaseFileName_;
    MafiaPlayer *allPlayers;
};

#endif // PLAYERSDATABASE_H
