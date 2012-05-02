/********************************************************************************
** Form generated from reading UI file 'battleaigame.ui'
**
** Created: Mon Apr 30 09:57:36 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTLEAIGAME_H
#define UI_BATTLEAIGAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_BattleAIGame
{
public:
    QLabel *GameLogo;

    void setupUi(QDialog *BattleAIGame)
    {
        if (BattleAIGame->objectName().isEmpty())
            BattleAIGame->setObjectName(QString::fromUtf8("BattleAIGame"));
        BattleAIGame->resize(400, 300);
        GameLogo = new QLabel(BattleAIGame);
        GameLogo->setObjectName(QString::fromUtf8("GameLogo"));
        GameLogo->setGeometry(QRect(110, 10, 191, 41));
        QFont font;
        font.setPointSize(28);
        GameLogo->setFont(font);

        retranslateUi(BattleAIGame);

        QMetaObject::connectSlotsByName(BattleAIGame);
    } // setupUi

    void retranslateUi(QDialog *BattleAIGame)
    {
        BattleAIGame->setWindowTitle(QApplication::translate("BattleAIGame", "BattleShip Computer Game", 0, QApplication::UnicodeUTF8));
        GameLogo->setText(QApplication::translate("BattleAIGame", "BattleShip", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BattleAIGame: public Ui_BattleAIGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLEAIGAME_H
