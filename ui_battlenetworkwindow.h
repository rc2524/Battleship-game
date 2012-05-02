/********************************************************************************
** Form generated from reading UI file 'battlenetworkwindow.ui'
**
** Created: Wed May 2 14:34:16 2012
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BattleNetworkWindow
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QListWidget *NetworkPlayersList;
    QVBoxLayout *verticalLayout;
    QPushButton *PlayWithButton;
    QPushButton *ReturnToButton;
    QLabel *GameLogo;

    void setupUi(QWidget *BattleNetworkWindow)
    {
        if (BattleNetworkWindow->objectName().isEmpty())
            BattleNetworkWindow->setObjectName(QString::fromUtf8("BattleNetworkWindow"));
        BattleNetworkWindow->resize(550, 400);
        layoutWidget = new QWidget(BattleNetworkWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 120, 389, 194));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        NetworkPlayersList = new QListWidget(layoutWidget);
        NetworkPlayersList->setObjectName(QString::fromUtf8("NetworkPlayersList"));

        horizontalLayout->addWidget(NetworkPlayersList);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        PlayWithButton = new QPushButton(layoutWidget);
        PlayWithButton->setObjectName(QString::fromUtf8("PlayWithButton"));

        verticalLayout->addWidget(PlayWithButton);

        ReturnToButton = new QPushButton(layoutWidget);
        ReturnToButton->setObjectName(QString::fromUtf8("ReturnToButton"));

        verticalLayout->addWidget(ReturnToButton);


        horizontalLayout->addLayout(verticalLayout);

        GameLogo = new QLabel(BattleNetworkWindow);
        GameLogo->setObjectName(QString::fromUtf8("GameLogo"));
        GameLogo->setGeometry(QRect(170, 20, 191, 41));
        QFont font;
        font.setPointSize(28);
        GameLogo->setFont(font);

        retranslateUi(BattleNetworkWindow);

        QMetaObject::connectSlotsByName(BattleNetworkWindow);
    } // setupUi

    void retranslateUi(QWidget *BattleNetworkWindow)
    {
        BattleNetworkWindow->setWindowTitle(QApplication::translate("BattleNetworkWindow", "BattleShip Network Player Lobby", 0, QApplication::UnicodeUTF8));
        PlayWithButton->setText(QApplication::translate("BattleNetworkWindow", "Start Game", 0, QApplication::UnicodeUTF8));
        ReturnToButton->setText(QApplication::translate("BattleNetworkWindow", "Return To Menu", 0, QApplication::UnicodeUTF8));
        GameLogo->setText(QApplication::translate("BattleNetworkWindow", "BattleShip", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BattleNetworkWindow: public Ui_BattleNetworkWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLENETWORKWINDOW_H
