#include "mafiaplayer.h"

IdType MAXID;

MafiaPlayer::MafiaPlayer(QObject *parent) :
    QObject(parent)
{
    name_ = "noname";
    points_ = 0;
    totalGamesPlayed_ = 0;
    emit newId();
    emit changeRating();
    connect(this,SIGNAL(gamePlayed()),this,SLOT(changeRating()));
}
MafiaPlayer::MafiaPlayer(QString name, int points, int totalGamesPlayed)
{
    name_ = name;
    points_ = points;
    totalGamesPlayed_ = totalGamesPlayed;
    emit newId();
    emit changeRating();
    connect(this,SIGNAL(gamePlayed()),this,SLOT(changeRating()));
}

void MafiaPlayer::setName(QString name)
{
    name_ = name;
}

QString MafiaPlayer::getName()
{
    return name_;
}
void MafiaPlayer::setPoints(int points)
{
    points_=points;
}
int MafiaPlayer::getPoints()
{
    return points_;
}
void MafiaPlayer::setRating(double rating)
{
    rating_ = rating;
}
double MafiaPlayer::getRating()
{
    return rating_;
}
void MafiaPlayer::setTotalGamesPlayed(int totalGamesPlayed)
{
    totalGamesPlayed_ = totalGamesPlayed;
}
int MafiaPlayer::getTotalGamesPlayed()
{
    return totalGamesPlayed_;
}
void MafiaPlayer::newId()
{
    id_ = MAXID;
    MAXID++;
}
void MafiaPlayer::changeRating()
{
    //TODO ADD FORMULA FOR RATING
}
