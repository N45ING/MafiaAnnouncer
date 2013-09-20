#ifndef ADDPLAYER_H
#define ADDPLAYER_H

#include "mafiaplayer.h"
#include <QDialog>
#include <QString>
#include <Qstring>
#include <fstream>
#include <string>

using namespace std;

namespace Ui {
class AddPlayer;
}

class AddPlayer : public QDialog
{
    Q_OBJECT

public:
    explicit AddPlayer(QWidget *parent = 0);
    ~AddPlayer();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::AddPlayer *ui;
    int initialPoints_;
    int initialRating_;
    int initialGamesPlayed_;
};

#endif // ADDPLAYER_H
