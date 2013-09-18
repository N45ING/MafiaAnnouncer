#ifndef MAFIAANNOUNCER_H
#define MAFIAANNOUNCER_H

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

private:
    Ui::MafiaAnnouncer *ui;
};

#endif // MAFIAANNOUNCER_H
