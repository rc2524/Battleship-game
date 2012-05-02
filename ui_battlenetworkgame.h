/********************************************************************************
** Form generated from reading UI file 'battlenetworkgame.ui'
**
** Created: Wed May 2 14:34:16 2012
**      by: Qt User Interface Compiler version 4.7.4
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
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_battlenetworkgame
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
    QLabel *OppName;
    QTextBrowser *OpponentGameBoard;

    void setupUi(QWidget *battlenetworkgame)
    {
        if (battlenetworkgame->objectName().isEmpty())
            battlenetworkgame->setObjectName(QString::fromUtf8("battlenetworkgame"));
        battlenetworkgame->resize(550, 400);
        GameLogo = new QLabel(battlenetworkgame);
        GameLogo->setObjectName(QString::fromUtf8("GameLogo"));
        GameLogo->setGeometry(QRect(180, 10, 191, 41));
        QFont font;
        font.setPointSize(28);
        GameLogo->setFont(font);
        CustomButton = new QPushButton(battlenetworkgame);
        CustomButton->setObjectName(QString::fromUtf8("CustomButton"));
        CustomButton->setGeometry(QRect(382, 350, 121, 27));
        RandomButton = new QPushButton(battlenetworkgame);
        RandomButton->setObjectName(QString::fromUtf8("RandomButton"));
        RandomButton->setGeometry(QRect(382, 320, 121, 27));
        Coordinates = new QSplitter(battlenetworkgame);
        Coordinates->setObjectName(QString::fromUtf8("Coordinates"));
        Coordinates->setEnabled(true);
        Coordinates->setGeometry(QRect(52, 320, 150, 27));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
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
        layoutWidget = new QWidget(battlenetworkgame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(282, 80, 221, 241));
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

        FireButton = new QPushButton(battlenetworkgame);
        FireButton->setObjectName(QString::fromUtf8("FireButton"));
        FireButton->setGeometry(QRect(52, 350, 150, 27));
        layoutWidget_2 = new QWidget(battlenetworkgame);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(50, 80, 231, 241));
        EnemyWin = new QVBoxLayout(layoutWidget_2);
        EnemyWin->setObjectName(QString::fromUtf8("EnemyWin"));
        EnemyWin->setSizeConstraint(QLayout::SetNoConstraint);
        EnemyWin->setContentsMargins(0, 0, 0, 0);
        OppName = new QLabel(layoutWidget_2);
        OppName->setObjectName(QString::fromUtf8("OppName"));
        OppName->setAlignment(Qt::AlignCenter);

        EnemyWin->addWidget(OppName);

        OpponentGameBoard = new QTextBrowser(layoutWidget_2);
        OpponentGameBoard->setObjectName(QString::fromUtf8("OpponentGameBoard"));
        OpponentGameBoard->setMaximumSize(QSize(16777215, 16777215));

        EnemyWin->addWidget(OpponentGameBoard);


        retranslateUi(battlenetworkgame);

        QMetaObject::connectSlotsByName(battlenetworkgame);
    } // setupUi

    void retranslateUi(QWidget *battlenetworkgame)
    {
        battlenetworkgame->setWindowTitle(QApplication::translate("battlenetworkgame", "BattleShip Network Game", 0, QApplication::UnicodeUTF8));
        GameLogo->setText(QApplication::translate("battlenetworkgame", "BattleShip", 0, QApplication::UnicodeUTF8));
        CustomButton->setText(QApplication::translate("battlenetworkgame", "Custom Board", 0, QApplication::UnicodeUTF8));
        RandomButton->setText(QApplication::translate("battlenetworkgame", "Random Board", 0, QApplication::UnicodeUTF8));
        XLabel->setText(QApplication::translate("battlenetworkgame", "X:", 0, QApplication::UnicodeUTF8));
        YLabel->setText(QApplication::translate("battlenetworkgame", "Y:", 0, QApplication::UnicodeUTF8));
        PlayerBoardLabel->setText(QApplication::translate("battlenetworkgame", "Your Board", 0, QApplication::UnicodeUTF8));
        FireButton->setText(QApplication::translate("battlenetworkgame", "Fire", 0, QApplication::UnicodeUTF8));
        OppName->setText(QApplication::translate("battlenetworkgame", "Opponent's Board", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class battlenetworkgame: public Ui_battlenetworkgame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLENETWORKGAME_H
