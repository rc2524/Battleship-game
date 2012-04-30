#ifndef BATTLENETWORKGAME_H
#define BATTLENETWORKGAME_H

#include <QWidget>

namespace Ui {
    class battlenetworkgame;
}

class battlenetworkgame : public QWidget
{
    Q_OBJECT

public:
    explicit battlenetworkgame(QWidget *parent = 0);
    void setOpponentName(QString oName);

private:
    Ui::battlenetworkgame *ui;
    ~battlenetworkgame();
    QString opponentName;
};

#endif // BATTLENETWORKGAME_H
