#ifndef MAFIAPLAYER_H
#define MAFIAPLAYER_H

#include <QObject>
#include <QDebug>
#include <QString>


typedef int IdType;
extern IdType MAXID;

class MafiaPlayer : public QObject
{
    Q_OBJECT
public:
    explicit MafiaPlayer(QObject *parent = 0);
    MafiaPlayer(QString name, int points, int totalGamesPlayed);
    void setName(QString name);
    QString getName();
    void setPoints(int points);
    int getPoints();
    void setRating(double rating);
    double getRating();
    void setTotalGamesPlayed(int totalGamesPlayed);
    int getTotalGamesPlayed();
    void setId(IdType id);
    IdType getId();
    void setSex(int sex);
    int getSex();
    void print();

signals: void gamePlayed();

public slots:
private slots:
    void changeRating();
    void newId();
private:
    IdType id_;
    QString name_;
    int points_;
    double rating_;
    int totalGamesPlayed_;
    int sex_; // 0-female 1-male
};

#endif // MAFIAPLAYER_H
