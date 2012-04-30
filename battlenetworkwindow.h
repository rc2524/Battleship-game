#ifndef BATTLENETWORKWINDOW_H
#define BATTLENETWORKWINDOW_H

#include "ui_battlenetworkwindow.h"
#include "client.h"
#include <QWidget>

namespace Ui {
    class BattleNetworkWindow;
}

class BattleNetworkWindow : public QWidget
{
    Q_OBJECT

public:
    explicit BattleNetworkWindow(QWidget *parent = 0);
    ~BattleNetworkWindow();

private slots:
    void returnToInital();
    void startNetworkGame();
    void newParticipant(const QString &nick); //change to work for game lobby
    void participantLeft(const QString &nick); //change to work for game lobby

private:
    void closeEvent(QCloseEvent *);
    Ui::BattleNetworkWindow *ui;
    QString myNickName;
    Client client;
};

#endif // BATTLENETWORKWINDOW_H
