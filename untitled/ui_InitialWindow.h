/********************************************************************************
** Form generated from reading UI file 'InitialWindow.ui'
**
** Created: Mon Apr 30 09:57:37 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITIALWINDOW_H
#define UI_INITIALWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InitialWindow
{
public:
    QPushButton *Network;
    QPushButton *Computer;
    QPushButton *Local2;
    QLabel *GameLogo;
    QPushButton *ExitButton;

    void setupUi(QDialog *InitialWindow)
    {
        if (InitialWindow->objectName().isEmpty())
            InitialWindow->setObjectName(QString::fromUtf8("InitialWindow"));
        InitialWindow->resize(400, 300);
        Network = new QPushButton(InitialWindow);
        Network->setObjectName(QString::fromUtf8("Network"));
        Network->setGeometry(QRect(140, 80, 111, 27));
        Computer = new QPushButton(InitialWindow);
        Computer->setObjectName(QString::fromUtf8("Computer"));
        Computer->setGeometry(QRect(140, 130, 111, 27));
        Local2 = new QPushButton(InitialWindow);
        Local2->setObjectName(QString::fromUtf8("Local2"));
        Local2->setGeometry(QRect(140, 180, 111, 27));
        GameLogo = new QLabel(InitialWindow);
        GameLogo->setObjectName(QString::fromUtf8("GameLogo"));
        GameLogo->setGeometry(QRect(110, 10, 171, 31));
        QFont font;
        font.setPointSize(26);
        GameLogo->setFont(font);
        ExitButton = new QPushButton(InitialWindow);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setGeometry(QRect(140, 230, 111, 27));

        retranslateUi(InitialWindow);

        QMetaObject::connectSlotsByName(InitialWindow);
    } // setupUi

    void retranslateUi(QDialog *InitialWindow)
    {
        InitialWindow->setWindowTitle(QApplication::translate("InitialWindow", "BattleShip Game Lobby", 0, QApplication::UnicodeUTF8));
        Network->setText(QApplication::translate("InitialWindow", "Network Play", 0, QApplication::UnicodeUTF8));
        Computer->setText(QApplication::translate("InitialWindow", "Computer Play", 0, QApplication::UnicodeUTF8));
        Local2->setText(QApplication::translate("InitialWindow", "Local 2v2 Play", 0, QApplication::UnicodeUTF8));
        GameLogo->setText(QApplication::translate("InitialWindow", "Battleship", 0, QApplication::UnicodeUTF8));
        ExitButton->setText(QApplication::translate("InitialWindow", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InitialWindow: public Ui_InitialWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITIALWINDOW_H
