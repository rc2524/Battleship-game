/********************************************************************************
** Form generated from reading UI file 'battlelocalwindow.ui'
**
** Created: Wed May 2 16:00:24 2012
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
#include <QtGui/QFrame>
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
    QFrame *frame;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *battleLocalWindow)
    {
        if (battleLocalWindow->objectName().isEmpty())
            battleLocalWindow->setObjectName(QString::fromUtf8("battleLocalWindow"));
        battleLocalWindow->resize(550, 400);
        RandomButton = new QPushButton(battleLocalWindow);
        RandomButton->setObjectName(QString::fromUtf8("RandomButton"));
        RandomButton->setGeometry(QRect(380, 330, 121, 27));
        FireButton = new QPushButton(battleLocalWindow);
        FireButton->setObjectName(QString::fromUtf8("FireButton"));
        FireButton->setGeometry(QRect(50, 360, 150, 27));
        layoutWidget = new QWidget(battleLocalWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(280, 90, 221, 241));
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
        layoutWidget_2->setGeometry(QRect(48, 90, 231, 241));
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
        CustomButton->setGeometry(QRect(380, 360, 121, 27));
        GameLogo = new QLabel(battleLocalWindow);
        GameLogo->setObjectName(QString::fromUtf8("GameLogo"));
        GameLogo->setGeometry(QRect(200, 0, 191, 51));
        QFont font;
        font.setPointSize(28);
        GameLogo->setFont(font);
        PlayerGoing = new QLabel(battleLocalWindow);
        PlayerGoing->setObjectName(QString::fromUtf8("PlayerGoing"));
        PlayerGoing->setGeometry(QRect(190, 50, 171, 20));
        QFont font1;
        font1.setPointSize(18);
        PlayerGoing->setFont(font1);
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
        frame = new QFrame(battleLocalWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 591, 411));
        frame->setMaximumSize(QSize(591, 411));
        frame->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.495238 rgba(0, 80, 255, 147), stop:1 rgba(0, 169, 255, 147));"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 102, 104));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_4);

        frame->raise();
        RandomButton->raise();
        FireButton->raise();
        layoutWidget->raise();
        layoutWidget_2->raise();
        CustomButton->raise();
        GameLogo->raise();
        PlayerGoing->raise();
        Coordinates->raise();

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
        label->setText(QApplication::translate("battleLocalWindow", "1 or E = Water", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("battleLocalWindow", "2 or S = Ship", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("battleLocalWindow", "3 or 0 = Miss", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("battleLocalWindow", "4 or X = Hit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class battleLocalWindow: public Ui_battleLocalWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLELOCALWINDOW_H
