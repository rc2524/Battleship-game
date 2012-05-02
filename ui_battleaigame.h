/********************************************************************************
** Form generated from reading UI file 'battleaigame.ui'
**
** Created: Wed May 2 16:17:15 2012
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
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BattleAIGame
{
public:
    QLabel *GameLogo;
    QPushButton *CustomButton;
    QPushButton *RandomButton;
    QSplitter *Coordinates;
    QLabel *XLabel;
    QLineEdit *FireRowText;
    QLabel *YLabel;
    QLineEdit *FireColText;
    QWidget *layoutWidget;
    QVBoxLayout *PlayerWin;
    QLabel *PlayerBoardLabel;
    QTextBrowser *PlayerGameBoard;
    QPushButton *FireButton;
    QWidget *layoutWidget_2;
    QVBoxLayout *EnemyWin;
    QLabel *EnemyBoardLabel;
    QTextBrowser *OpponentGameBoard;

    void setupUi(QDialog *BattleAIGame)
    {
        if (BattleAIGame->objectName().isEmpty())
            BattleAIGame->setObjectName(QString::fromUtf8("BattleAIGame"));
        BattleAIGame->resize(700, 400);
        GameLogo = new QLabel(BattleAIGame);
        GameLogo->setObjectName(QString::fromUtf8("GameLogo"));
        GameLogo->setGeometry(QRect(248, 10, 200, 41));
        QFont font;
        font.setPointSize(28);
        GameLogo->setFont(font);
        GameLogo->setAlignment(Qt::AlignCenter);
        CustomButton = new QPushButton(BattleAIGame);
        CustomButton->setObjectName(QString::fromUtf8("CustomButton"));
        CustomButton->setGeometry(QRect(450, 330, 121, 27));
        RandomButton = new QPushButton(BattleAIGame);
        RandomButton->setObjectName(QString::fromUtf8("RandomButton"));
        RandomButton->setGeometry(QRect(450, 300, 121, 27));
        Coordinates = new QSplitter(BattleAIGame);
        Coordinates->setObjectName(QString::fromUtf8("Coordinates"));
        Coordinates->setEnabled(true);
        Coordinates->setGeometry(QRect(120, 300, 150, 27));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Coordinates->sizePolicy().hasHeightForWidth());
        Coordinates->setSizePolicy(sizePolicy);
        Coordinates->setOrientation(Qt::Horizontal);
        XLabel = new QLabel(Coordinates);
        XLabel->setObjectName(QString::fromUtf8("XLabel"));
        XLabel->setEnabled(true);
        Coordinates->addWidget(XLabel);
        FireRowText = new QLineEdit(Coordinates);
        FireRowText->setObjectName(QString::fromUtf8("FireRowText"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(FireRowText->sizePolicy().hasHeightForWidth());
        FireRowText->setSizePolicy(sizePolicy1);
        Coordinates->addWidget(FireRowText);
        YLabel = new QLabel(Coordinates);
        YLabel->setObjectName(QString::fromUtf8("YLabel"));
        Coordinates->addWidget(YLabel);
        FireColText = new QLineEdit(Coordinates);
        FireColText->setObjectName(QString::fromUtf8("FireColText"));
        FireColText->setEnabled(true);
        sizePolicy1.setHeightForWidth(FireColText->sizePolicy().hasHeightForWidth());
        FireColText->setSizePolicy(sizePolicy1);
        Coordinates->addWidget(FireColText);
        layoutWidget = new QWidget(BattleAIGame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(350, 60, 221, 241));
        PlayerWin = new QVBoxLayout(layoutWidget);
        PlayerWin->setObjectName(QString::fromUtf8("PlayerWin"));
        PlayerWin->setSizeConstraint(QLayout::SetNoConstraint);
        PlayerWin->setContentsMargins(0, 0, 0, 0);
        PlayerBoardLabel = new QLabel(layoutWidget);
        PlayerBoardLabel->setObjectName(QString::fromUtf8("PlayerBoardLabel"));
        PlayerBoardLabel->setAlignment(Qt::AlignCenter);

        PlayerWin->addWidget(PlayerBoardLabel);

        PlayerGameBoard = new QTextBrowser(layoutWidget);
        PlayerGameBoard->setObjectName(QString::fromUtf8("PlayerGameBoard"));

        PlayerWin->addWidget(PlayerGameBoard);

        FireButton = new QPushButton(BattleAIGame);
        FireButton->setObjectName(QString::fromUtf8("FireButton"));
        FireButton->setGeometry(QRect(120, 330, 150, 27));
        layoutWidget_2 = new QWidget(BattleAIGame);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(118, 60, 231, 241));
        EnemyWin = new QVBoxLayout(layoutWidget_2);
        EnemyWin->setObjectName(QString::fromUtf8("EnemyWin"));
        EnemyWin->setSizeConstraint(QLayout::SetNoConstraint);
        EnemyWin->setContentsMargins(0, 0, 0, 0);
        EnemyBoardLabel = new QLabel(layoutWidget_2);
        EnemyBoardLabel->setObjectName(QString::fromUtf8("EnemyBoardLabel"));
        EnemyBoardLabel->setAlignment(Qt::AlignCenter);

        EnemyWin->addWidget(EnemyBoardLabel);

        OpponentGameBoard = new QTextBrowser(layoutWidget_2);
        OpponentGameBoard->setObjectName(QString::fromUtf8("OpponentGameBoard"));
        OpponentGameBoard->setMaximumSize(QSize(16777215, 16777215));

        EnemyWin->addWidget(OpponentGameBoard);


        retranslateUi(BattleAIGame);

        QMetaObject::connectSlotsByName(BattleAIGame);
    } // setupUi

    void retranslateUi(QDialog *BattleAIGame)
    {
        BattleAIGame->setWindowTitle(QApplication::translate("BattleAIGame", "BattleShip Computer Game", 0, QApplication::UnicodeUTF8));
        GameLogo->setText(QApplication::translate("BattleAIGame", "BattleShip", 0, QApplication::UnicodeUTF8));
        CustomButton->setText(QApplication::translate("BattleAIGame", "Custom Board", 0, QApplication::UnicodeUTF8));
        RandomButton->setText(QApplication::translate("BattleAIGame", "Random Board", 0, QApplication::UnicodeUTF8));
        XLabel->setText(QApplication::translate("BattleAIGame", "X:", 0, QApplication::UnicodeUTF8));
        YLabel->setText(QApplication::translate("BattleAIGame", "Y:", 0, QApplication::UnicodeUTF8));
        PlayerBoardLabel->setText(QApplication::translate("BattleAIGame", "Your Board", 0, QApplication::UnicodeUTF8));
        FireButton->setText(QApplication::translate("BattleAIGame", "Fire", 0, QApplication::UnicodeUTF8));
        EnemyBoardLabel->setText(QApplication::translate("BattleAIGame", "Opponent's Board", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BattleAIGame: public Ui_BattleAIGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLEAIGAME_H
