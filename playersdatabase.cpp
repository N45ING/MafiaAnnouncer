#include "playersdatabase.h"

PlayersDataBase::PlayersDataBase(QObject *parent) :
    QObject(parent)
{
    ifstream fin;
    fin.open("D:\\Git\\MafiaAnnouncer\\players.txt");
    IdType n =0;
    fin >> n;

    allPlayers = new MafiaPlayer[n];
    totalPlayersNumber_=n;

    int id;
    string name;
    int points;
    double rating;
    int gamesPlayed;
    int sex;

    for(int i=0;i<n;i++)
    {
        fin >> id >> name >> points >> rating >> gamesPlayed >> sex;
        QString qName = QString::fromStdString(name);
        allPlayers[i].setId(id);
        allPlayers[i].setName(qName);
        allPlayers[i].setPoints(points);
        allPlayers[i].setRating(rating);
        allPlayers[i].setTotalGamesPlayed(gamesPlayed);
        allPlayers[i].setSex(sex);
    }
    fin.close();
}
void PlayersDataBase::printPlayers()
{
    for(int i=0;i<totalPlayersNumber_;i++)
    {
        allPlayers[i].print();
    }
}
PlayersDataBase::~PlayersDataBase()
{
    delete allPlayers;
}
