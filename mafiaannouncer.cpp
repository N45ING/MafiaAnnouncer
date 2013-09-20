#include "mafiaannouncer.h"
#include "ui_mafiaannouncer.h"

MafiaAnnouncer::MafiaAnnouncer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MafiaAnnouncer)
{
    ui->setupUi(this);
    addWindow = new AddPlayer;
    setStyleSheet("QMainWindow{background-image: url(:/Images/intro2.jpg);}QMenuBar {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 red, stop:1 darkgray);}QMenuBar::item {spacing: 3px; /* spacing between menu bar items */padding: 1px 4px;background: transparent;border-radius: 4px;}QMenuBar::item:selected { /* when selected using mouse or keyboard */ background: #a8a8a8;}QMenuBar::item:pressed {background: #888888;}");
}

MafiaAnnouncer::~MafiaAnnouncer()
{
    addWindow->close();
    delete ui;
}

void MafiaAnnouncer::on_actionExit_triggered()
{
    MafiaAnnouncer::close();
    addWindow->close();
}

void MafiaAnnouncer::on_actionNew_triggered()
{

}

void MafiaAnnouncer::on_actionAdd_new_player_triggered()
{
    addWindow->show();
}
