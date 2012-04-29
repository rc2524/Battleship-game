#ifndef INITIALWINDOW_H
#define INITIALWINDOW_H

#include "ui_InitialWindow.h"
#include <QWidget>

namespace Ui{
    class InitialWindow;
}

class InitialWindow : public QDialog
{
    Q_OBJECT

public:
    explicit InitialWindow(QWidget *parent =0);
     ~InitialWindow();
    void closeEvent(QCloseEvent *e );

public slots:

private slots:
     void AIPlay();
     void LocalPlay();
     void NetworkPlay();
private:
     Ui::InitialWindow *ui;
};
#endif // INITIALWINDOW_H
