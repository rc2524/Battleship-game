/********************************************************************************
** Form generated from reading UI file 'InitialWindow.ui'
**
** Created: Wed May 2 14:34:16 2012
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
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InitialWindow
{
public:
    QSplitter *splitter;
    QLabel *GameLogo;
    QWidget *layoutWidget;
    QVBoxLayout *ButtonSplit;
    QPushButton *Network;
    QPushButton *Computer;
    QPushButton *Local2;
    QPushButton *ExitButton;
    QFrame *frame;

    void setupUi(QDialog *InitialWindow)
    {
        if (InitialWindow->objectName().isEmpty())
            InitialWindow->setObjectName(QString::fromUtf8("InitialWindow"));
        InitialWindow->resize(400, 300);
        splitter = new QSplitter(InitialWindow);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setEnabled(true);
        splitter->setGeometry(QRect(120, 20, 160, 211));
        splitter->setOrientation(Qt::Vertical);
        splitter->setOpaqueResize(false);
        GameLogo = new QLabel(splitter);
        GameLogo->setObjectName(QString::fromUtf8("GameLogo"));
        QFont font;
        font.setPointSize(26);
        GameLogo->setFont(font);
        splitter->addWidget(GameLogo);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        ButtonSplit = new QVBoxLayout(layoutWidget);
        ButtonSplit->setObjectName(QString::fromUtf8("ButtonSplit"));
        ButtonSplit->setContentsMargins(0, 0, 0, 0);
        Network = new QPushButton(layoutWidget);
        Network->setObjectName(QString::fromUtf8("Network"));

        ButtonSplit->addWidget(Network);

        Computer = new QPushButton(layoutWidget);
        Computer->setObjectName(QString::fromUtf8("Computer"));

        ButtonSplit->addWidget(Computer);

        Local2 = new QPushButton(layoutWidget);
        Local2->setObjectName(QString::fromUtf8("Local2"));

        ButtonSplit->addWidget(Local2);

        ExitButton = new QPushButton(layoutWidget);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));

        ButtonSplit->addWidget(ExitButton);

        splitter->addWidget(layoutWidget);
        frame = new QFrame(InitialWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 401, 301));
        frame->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        splitter->raise();

        retranslateUi(InitialWindow);

        QMetaObject::connectSlotsByName(InitialWindow);
    } // setupUi

    void retranslateUi(QDialog *InitialWindow)
    {
        InitialWindow->setWindowTitle(QApplication::translate("InitialWindow", "BattleShip Game Lobby", 0, QApplication::UnicodeUTF8));
        GameLogo->setText(QApplication::translate("InitialWindow", "Battleship", 0, QApplication::UnicodeUTF8));
        Network->setText(QApplication::translate("InitialWindow", "Network Play", 0, QApplication::UnicodeUTF8));
        Computer->setText(QApplication::translate("InitialWindow", "Computer Play", 0, QApplication::UnicodeUTF8));
        Local2->setText(QApplication::translate("InitialWindow", "Local 2v2 Play", 0, QApplication::UnicodeUTF8));
        ExitButton->setText(QApplication::translate("InitialWindow", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InitialWindow: public Ui_InitialWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITIALWINDOW_H
