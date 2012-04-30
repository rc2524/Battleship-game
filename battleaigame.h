#ifndef BATTLEAIGAME_H
#define BATTLEAIGAME_H

#include <QDialog>

namespace Ui {
    class BattleAIGame;
}

class BattleAIGame : public QDialog
{
    Q_OBJECT

public:
    explicit BattleAIGame(QWidget *parent = 0);
    ~BattleAIGame();

private:
    Ui::BattleAIGame *ui;
};

#endif // BATTLEAIGAME_H
