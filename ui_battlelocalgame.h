/********************************************************************************
** Form generated from reading UI file 'battlelocalgame.ui'
**
** Created: Wed May 2 14:34:16 2012
**      by: Qt User Interface Compiler version 4.7.4
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
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BattleLocalGame
{
public:
    QLabel *GameLogo;
    QPushButton *RandomButton;
    QLabel *label;
    QPushButton *CustomButton;
    QTextBrowser *PlayerGameBoard;

    void setupUi(QWidget *BattleLocalGame)
    {
        if (BattleLocalGame->objectName().isEmpty())
            BattleLocalGame->setObjectName(QString::fromUtf8("BattleLocalGame"));
        BattleLocalGame->resize(574, 303);
        GameLogo = new QLabel(BattleLocalGame);
        GameLogo->setObjectName(QString::fromUtf8("GameLogo"));
        GameLogo->setGeometry(QRect(190, 10, 191, 51));
        QFont font;
        font.setPointSize(28);
        GameLogo->setFont(font);
        RandomButton = new QPushButton(BattleLocalGame);
        RandomButton->setObjectName(QString::fromUtf8("RandomButton"));
        RandomButton->setGeometry(QRect(440, 270, 121, 27));
        label = new QLabel(BattleLocalGame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 60, 67, 17));
        CustomButton = new QPushButton(BattleLocalGame);
        CustomButton->setObjectName(QString::fromUtf8("CustomButton"));
        CustomButton->setGeometry(QRect(310, 270, 121, 27));
        PlayerGameBoard = new QTextBrowser(BattleLocalGame);
        PlayerGameBoard->setObjectName(QString::fromUtf8("PlayerGameBoard"));
        PlayerGameBoard->setGeometry(QRect(30, 90, 256, 192));

        retranslateUi(BattleLocalGame);

        QMetaObject::connectSlotsByName(BattleLocalGame);
    } // setupUi

    void retranslateUi(QWidget *BattleLocalGame)
    {
        BattleLocalGame->setWindowTitle(QApplication::translate("BattleLocalGame", "BattleShip Local 2V2 Game", 0, QApplication::UnicodeUTF8));
        GameLogo->setText(QApplication::translate("BattleLocalGame", "BattleShip", 0, QApplication::UnicodeUTF8));
        RandomButton->setText(QApplication::translate("BattleLocalGame", "Random Board", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BattleLocalGame", "TextLabel", 0, QApplication::UnicodeUTF8));
        CustomButton->setText(QApplication::translate("BattleLocalGame", "Custom Board", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BattleLocalGame: public Ui_BattleLocalGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLELOCALGAME_H
