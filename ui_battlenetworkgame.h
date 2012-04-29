/********************************************************************************
** Form generated from reading UI file 'battlenetworkgame.ui'
**
** Created: Sat Apr 28 20:17:53 2012
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTLENETWORKGAME_H
#define UI_BATTLENETWORKGAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_battlenetworkgame
{
public:
    QLabel *OppName;
    QLabel *GameLogo;

    void setupUi(QWidget *battlenetworkgame)
    {
        if (battlenetworkgame->objectName().isEmpty())
            battlenetworkgame->setObjectName(QString::fromUtf8("battlenetworkgame"));
        battlenetworkgame->resize(624, 303);
        OppName = new QLabel(battlenetworkgame);
        OppName->setObjectName(QString::fromUtf8("OppName"));
        OppName->setGeometry(QRect(40, 50, 221, 21));
        OppName->setAutoFillBackground(false);
        OppName->setFrameShape(QFrame::NoFrame);
        OppName->setScaledContents(true);
        OppName->setWordWrap(false);
        GameLogo = new QLabel(battlenetworkgame);
        GameLogo->setObjectName(QString::fromUtf8("GameLogo"));
        GameLogo->setGeometry(QRect(230, 10, 191, 41));
        QFont font;
        font.setPointSize(28);
        GameLogo->setFont(font);

        retranslateUi(battlenetworkgame);

        QMetaObject::connectSlotsByName(battlenetworkgame);
    } // setupUi

    void retranslateUi(QWidget *battlenetworkgame)
    {
        battlenetworkgame->setWindowTitle(QApplication::translate("battlenetworkgame", "BattleShip Network Game", 0, QApplication::UnicodeUTF8));
        OppName->setText(QApplication::translate("battlenetworkgame", "Opponent Name", 0, QApplication::UnicodeUTF8));
        GameLogo->setText(QApplication::translate("battlenetworkgame", "BattleShip", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class battlenetworkgame: public Ui_battlenetworkgame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLENETWORKGAME_H
