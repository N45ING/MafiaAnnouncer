#ifndef GAMESETUP_H
#define GAMESETUP_H

#include <QWidget>

namespace Ui {
class GameSetup;
}

class GameSetup : public QWidget
{
    Q_OBJECT

public:
    explicit GameSetup(QWidget *parent = 0);
    ~GameSetup();

private:
    Ui::GameSetup *ui;
};

#endif // GAMESETUP_H
