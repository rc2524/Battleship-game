/********************************************************************************
** Form generated from reading UI file 'battlelocalgame.ui'
**
** Created: Sat Apr 28 20:17:53 2012
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTLELOCALGAME_H
#define UI_BATTLELOCALGAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BattleLocalGame
{
public:
    QLabel *GameLogo;

    void setupUi(QWidget *BattleLocalGame)
    {
        if (BattleLocalGame->objectName().isEmpty())
            BattleLocalGame->setObjectName(QString::fromUtf8("BattleLocalGame"));
        BattleLocalGame->resize(400, 300);
        GameLogo = new QLabel(BattleLocalGame);
        GameLogo->setObjectName(QString::fromUtf8("GameLogo"));
        GameLogo->setGeometry(QRect(100, 10, 191, 51));
        QFont font;
        font.setPointSize(28);
        GameLogo->setFont(font);

        retranslateUi(BattleLocalGame);

        QMetaObject::connectSlotsByName(BattleLocalGame);
    } // setupUi

    void retranslateUi(QWidget *BattleLocalGame)
    {
        BattleLocalGame->setWindowTitle(QApplication::translate("BattleLocalGame", "BattleShip Local 2V2 Game", 0, QApplication::UnicodeUTF8));
        GameLogo->setText(QApplication::translate("BattleLocalGame", "BattleShip", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BattleLocalGame: public Ui_BattleLocalGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLELOCALGAME_H
