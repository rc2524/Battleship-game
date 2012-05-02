/********************************************************************************
** Form generated from reading UI file 'battlenetworkwindow.ui'
**
** Created: Mon Apr 30 09:57:37 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTLENETWORKWINDOW_H
#define UI_BATTLENETWORKWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BattleNetworkWindow
{
public:
    QPushButton *PlayWithButton;
    QPushButton *ReturnToButton;
    QListWidget *NetworkPlayersList;

    void setupUi(QWidget *BattleNetworkWindow)
    {
        if (BattleNetworkWindow->objectName().isEmpty())
            BattleNetworkWindow->setObjectName(QString::fromUtf8("BattleNetworkWindow"));
        BattleNetworkWindow->resize(453, 217);
        PlayWithButton = new QPushButton(BattleNetworkWindow);
        PlayWithButton->setObjectName(QString::fromUtf8("PlayWithButton"));
        PlayWithButton->setGeometry(QRect(320, 80, 111, 27));
        ReturnToButton = new QPushButton(BattleNetworkWindow);
        ReturnToButton->setObjectName(QString::fromUtf8("ReturnToButton"));
        ReturnToButton->setGeometry(QRect(320, 120, 111, 27));
        NetworkPlayersList = new QListWidget(BattleNetworkWindow);
        NetworkPlayersList->setObjectName(QString::fromUtf8("NetworkPlayersList"));
        NetworkPlayersList->setGeometry(QRect(0, 10, 301, 191));

        retranslateUi(BattleNetworkWindow);

        QMetaObject::connectSlotsByName(BattleNetworkWindow);
    } // setupUi

    void retranslateUi(QWidget *BattleNetworkWindow)
    {
        BattleNetworkWindow->setWindowTitle(QApplication::translate("BattleNetworkWindow", "BattleShip Network Player Lobby", 0, QApplication::UnicodeUTF8));
        PlayWithButton->setText(QApplication::translate("BattleNetworkWindow", "Start Game", 0, QApplication::UnicodeUTF8));
        ReturnToButton->setText(QApplication::translate("BattleNetworkWindow", "Return To Menu", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BattleNetworkWindow: public Ui_BattleNetworkWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLENETWORKWINDOW_H
