/********************************************************************************
** Form generated from reading UI file 'chatdialog.ui'
**
** Created: Sat Apr 28 20:32:01 2012
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATDIALOG_H
#define UI_CHATDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChatDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QTextEdit *textEdit;
    QListWidget *listWidget;
    QHBoxLayout *hboxLayout1;
    QPushButton *MenuButton;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *ChatDialog)
    {
        if (ChatDialog->objectName().isEmpty())
            ChatDialog->setObjectName(QString::fromUtf8("ChatDialog"));
        ChatDialog->resize(515, 293);
        vboxLayout = new QVBoxLayout(ChatDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textEdit = new QTextEdit(ChatDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setFocusPolicy(Qt::NoFocus);
        textEdit->setReadOnly(true);

        hboxLayout->addWidget(textEdit);

        listWidget = new QListWidget(ChatDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMaximumSize(QSize(180, 16777215));
        listWidget->setFocusPolicy(Qt::NoFocus);

        hboxLayout->addWidget(listWidget);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        MenuButton = new QPushButton(ChatDialog);
        MenuButton->setObjectName(QString::fromUtf8("MenuButton"));

        hboxLayout1->addWidget(MenuButton);

        label = new QLabel(ChatDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        hboxLayout1->addWidget(label);

        lineEdit = new QLineEdit(ChatDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);

        hboxLayout1->addWidget(lineEdit);


        vboxLayout->addLayout(hboxLayout1);


        retranslateUi(ChatDialog);

        QMetaObject::connectSlotsByName(ChatDialog);
    } // setupUi

    void retranslateUi(QDialog *ChatDialog)
    {
        ChatDialog->setWindowTitle(QApplication::translate("ChatDialog", "Chat", 0, QApplication::UnicodeUTF8));
        MenuButton->setText(QApplication::translate("ChatDialog", "Menu", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ChatDialog", "Message:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ChatDialog: public Ui_ChatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATDIALOG_H
