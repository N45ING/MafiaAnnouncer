#ifndef MAFIAANNOUNCER_H
#define MAFIAANNOUNCER_H

#include "addplayer.h"

#include <QMainWindow>
#include <QPicture>
#include <QPainter>


namespace Ui {
class MafiaAnnouncer;
}

class MafiaAnnouncer : public QMainWindow
{
    Q_OBJECT

public:
    explicit MafiaAnnouncer(QWidget *parent = 0);
    ~MafiaAnnouncer();

private slots:
    void on_actionExit_triggered();

    void on_actionNew_triggered();

    void on_actionAdd_new_player_triggered();

private:
    AddPlayer *addWindow;
    Ui::MafiaAnnouncer *ui;
};

#endif // MAFIAANNOUNCER_H
