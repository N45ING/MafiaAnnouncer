#include "addplayer.h"
#include "ui_addplayer.h"

AddPlayer::AddPlayer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPlayer)
{
    initialPoints_ = 0;
    initialGamesPlayed_ = 0;
    initialRating_ = 0;
    ui->setupUi(this);
    //setStyleSheet("QDialog{background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 red, stop:1 darkgray)}");
    setStyleSheet("QDialog{background-image: url(:/Images/addingPlayer2.jpg);background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 red, stop:1 darkgray);}");
}

AddPlayer::~AddPlayer()
{
    delete ui;
}

void AddPlayer::on_buttonBox_accepted()
{
    QString newName = ui->nameEdit->text();
    QString newSex = ui->sexEdit->text();
    int value;
    if(newSex == "male" || newSex == "Male")
    {
        value = 1;
    }
    if(newSex == "female" || newSex == "Female")
    {
        value = 0;
    }

    MafiaPlayer *playersBefore;
    IdType n =0;
    string name;
    int id;
    int points;
    double rating;
    int gamesPlayed;
    int sex;

    ifstream fin;
    fin.open("D:\\Git\\MafiaAnnouncer\\players.txt");
    fin >> n;
    playersBefore = new MafiaPlayer [n];
    for(int i=0;i<n;i++)
    {
        fin >> id >> name >> points >> rating >> gamesPlayed >> sex;
        QString qName = QString::fromStdString(name);
        playersBefore[i].setId(id);
        playersBefore[i].setName(qName);
        playersBefore[i].setPoints(points);
        playersBefore[i].setRating(rating);
        playersBefore[i].setTotalGamesPlayed(gamesPlayed);
        playersBefore[i].setSex(sex);
    }
    fin.close();

    ofstream fout;
    fout.open("D:\\Git\\MafiaAnnouncer\\players.txt",std::fstream::out);
    fout << n+1 << endl;
    for (int i=0; i<n; i++)
    {
        id = playersBefore[i].getId();
        name = playersBefore[i].getName().toLocal8Bit().constData();
        points = playersBefore[i].getPoints();
        rating = playersBefore[i].getRating();
        gamesPlayed=playersBefore[i].getTotalGamesPlayed();
        sex = playersBefore[i].getSex();

        fout << id << " " << name << " " << points << " " << rating << " " << gamesPlayed << " " << sex << endl;
    }
    name = newName.toLocal8Bit().constData();
    fout << n+1 << " " << name << " " << initialPoints_ << " " << initialRating_ << " " << initialGamesPlayed_ << " " << value;
    fout.close();
    delete playersBefore;
}

void AddPlayer::on_buttonBox_rejected()
{

}
