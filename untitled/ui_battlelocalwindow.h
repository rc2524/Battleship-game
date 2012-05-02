/********************************************************************************
** Form generated from reading UI file 'battlelocalwindow.ui'
**
** Created: Mon Apr 30 09:57:36 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTLELOCALWINDOW_H
#define UI_BATTLELOCALWINDOW_H

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

class Ui_battleLocalWindow
{
public:
    QPushButton *RandomButton;
    QPushButton *FireButton;
    QWidget *layoutWidget;
    QVBoxLayout *PlayerWin;
    QLabel *PlayerBoardLabel;
    QTextBrowser *PlayerGameBoard;
    QWidget *layoutWidget_2;
    QVBoxLayout *EnemyWin;
    QLabel *EnemyBoardLabel;
    QTextBrowser *OpponentGameBoard;
    QPushButton *CustomButton;
    QLabel *GameLogo;
    QLabel *PlayerGoing;
    QSplitter *Coordinates;
    QLabel *XLabel;
    QLineEdit *FireRowText;
    QLabel *YLabel;
    QLineEdit *FireColText;

    void setupUi(QDialog *battleLocalWindow)
    {
        if (battleLocalWindow->objectName().isEmpty())
            battleLocalWindow->setObjectName(QString::fromUtf8("battleLocalWindow"));
        battleLocalWindow->resize(585, 406);
        RandomButton = new QPushButton(battleLocalWindow);
        RandomButton->setObjectName(QString::fromUtf8("RandomButton"));
        RandomButton->setGeometry(QRect(360, 330, 121, 27));
        FireButton = new QPushButton(battleLocalWindow);
        FireButton->setObjectName(QString::fromUtf8("FireButton"));
        FireButton->setGeometry(QRect(50, 360, 150, 27));
        layoutWidget = new QWidget(battleLocalWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(290, 80, 251, 241));
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

        layoutWidget_2 = new QWidget(battleLocalWindow);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(31, 80, 258, 241));
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

        CustomButton = new QPushButton(battleLocalWindow);
        CustomButton->setObjectName(QString::fromUtf8("CustomButton"));
        CustomButton->setGeometry(QRect(360, 360, 121, 27));
        GameLogo = new QLabel(battleLocalWindow);
        GameLogo->setObjectName(QString::fromUtf8("GameLogo"));
        GameLogo->setGeometry(QRect(200, 0, 191, 51));
        QFont font;
        font.setPointSize(28);
        GameLogo->setFont(font);
        PlayerGoing = new QLabel(battleLocalWindow);
        PlayerGoing->setObjectName(QString::fromUtf8("PlayerGoing"));
        PlayerGoing->setGeometry(QRect(210, 50, 171, 20));
        PlayerGoing->setAlignment(Qt::AlignCenter);
        Coordinates = new QSplitter(battleLocalWindow);
        Coordinates->setObjectName(QString::fromUtf8("Coordinates"));
        Coordinates->setEnabled(true);
        Coordinates->setGeometry(QRect(50, 330, 150, 27));
        Coordinates->setOrientation(Qt::Horizontal);
        XLabel = new QLabel(Coordinates);
        XLabel->setObjectName(QString::fromUtf8("XLabel"));
        XLabel->setEnabled(true);
        Coordinates->addWidget(XLabel);
        FireRowText = new QLineEdit(Coordinates);
        FireRowText->setObjectName(QString::fromUtf8("FireRowText"));
        Coordinates->addWidget(FireRowText);
        YLabel = new QLabel(Coordinates);
        YLabel->setObjectName(QString::fromUtf8("YLabel"));
        Coordinates->addWidget(YLabel);
        FireColText = new QLineEdit(Coordinates);
        FireColText->setObjectName(QString::fromUtf8("FireColText"));
        FireColText->setEnabled(true);
        Coordinates->addWidget(FireColText);

        retranslateUi(battleLocalWindow);

        QMetaObject::connectSlotsByName(battleLocalWindow);
    } // setupUi

    void retranslateUi(QDialog *battleLocalWindow)
    {
        battleLocalWindow->setWindowTitle(QApplication::translate("battleLocalWindow", "Dialog", 0, QApplication::UnicodeUTF8));
        RandomButton->setText(QApplication::translate("battleLocalWindow", "Random Board", 0, QApplication::UnicodeUTF8));
        FireButton->setText(QApplication::translate("battleLocalWindow", "Fire", 0, QApplication::UnicodeUTF8));
        PlayerBoardLabel->setText(QApplication::translate("battleLocalWindow", "Your Board", 0, QApplication::UnicodeUTF8));
        EnemyBoardLabel->setText(QApplication::translate("battleLocalWindow", "Opponent's Board", 0, QApplication::UnicodeUTF8));
        CustomButton->setText(QApplication::translate("battleLocalWindow", "Custom Board", 0, QApplication::UnicodeUTF8));
        GameLogo->setText(QApplication::translate("battleLocalWindow", "BattleShip", 0, QApplication::UnicodeUTF8));
        PlayerGoing->setText(QApplication::translate("battleLocalWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        XLabel->setText(QApplication::translate("battleLocalWindow", "X:", 0, QApplication::UnicodeUTF8));
        YLabel->setText(QApplication::translate("battleLocalWindow", "Y:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class battleLocalWindow: public Ui_battleLocalWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLELOCALWINDOW_H
