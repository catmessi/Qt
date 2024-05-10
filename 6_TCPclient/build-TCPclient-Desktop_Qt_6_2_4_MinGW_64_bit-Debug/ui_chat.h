/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chat
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *clearButton;
    QPushButton *sendButton;

    void setupUi(QWidget *chat)
    {
        if (chat->objectName().isEmpty())
            chat->setObjectName(QString::fromUtf8("chat"));
        chat->resize(399, 232);
        label = new QLabel(chat);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 81, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(16);
        label->setFont(font);
        lineEdit = new QLineEdit(chat);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 60, 200, 30));
        lineEdit->setMinimumSize(QSize(200, 30));
        lineEdit->setMaximumSize(QSize(200, 30));
        clearButton = new QPushButton(chat);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(70, 170, 100, 20));
        clearButton->setMinimumSize(QSize(100, 20));
        clearButton->setMaximumSize(QSize(100, 20));
        sendButton = new QPushButton(chat);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(200, 170, 100, 20));
        sendButton->setMinimumSize(QSize(100, 20));
        sendButton->setMaximumSize(QSize(100, 20));

        retranslateUi(chat);

        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QWidget *chat)
    {
        chat->setWindowTitle(QCoreApplication::translate("chat", "Form", nullptr));
        label->setText(QCoreApplication::translate("chat", "\350\276\223\345\205\245\344\277\241\346\201\257\357\274\232", nullptr));
        clearButton->setText(QCoreApplication::translate("chat", "\346\270\205\347\251\272", nullptr));
        sendButton->setText(QCoreApplication::translate("chat", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
