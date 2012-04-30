#ifndef BATTLELOCALGAME_H
#define BATTLELOCALGAME_H

#include <QWidget>

namespace Ui {
    class BattleLocalGame;
}

class BattleLocalGame : public QWidget
{
    Q_OBJECT

public:
    explicit BattleLocalGame(QWidget *parent = 0);
    ~BattleLocalGame();

private:
    Ui::BattleLocalGame *ui;
};

#endif // BATTLELOCALGAME_H
