/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *findPushButton;
    QPushButton *insertPushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *idLabel;
    QLineEdit *idLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *birthLabel;
    QLineEdit *birthLineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(438, 284);
        findPushButton = new QPushButton(Widget);
        findPushButton->setObjectName(QString::fromUtf8("findPushButton"));
        findPushButton->setGeometry(QRect(100, 190, 80, 30));
        findPushButton->setMinimumSize(QSize(0, 30));
        findPushButton->setMaximumSize(QSize(16777215, 30));
        insertPushButton = new QPushButton(Widget);
        insertPushButton->setObjectName(QString::fromUtf8("insertPushButton"));
        insertPushButton->setGeometry(QRect(270, 190, 80, 30));
        insertPushButton->setMinimumSize(QSize(0, 30));
        insertPushButton->setMaximumSize(QSize(16777215, 30));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 30, 235, 91));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        idLabel = new QLabel(widget);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));

        horizontalLayout->addWidget(idLabel);

        idLineEdit = new QLineEdit(widget);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));
        idLineEdit->setMinimumSize(QSize(200, 0));
        idLineEdit->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(idLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        nameLabel = new QLabel(widget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        horizontalLayout_2->addWidget(nameLabel);

        nameLineEdit = new QLineEdit(widget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setMinimumSize(QSize(200, 0));
        nameLineEdit->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(nameLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        birthLabel = new QLabel(widget);
        birthLabel->setObjectName(QString::fromUtf8("birthLabel"));

        horizontalLayout_3->addWidget(birthLabel);

        birthLineEdit = new QLineEdit(widget);
        birthLineEdit->setObjectName(QString::fromUtf8("birthLineEdit"));
        birthLineEdit->setMinimumSize(QSize(200, 0));
        birthLineEdit->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_3->addWidget(birthLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        findPushButton->setText(QCoreApplication::translate("Widget", "\346\237\245\350\257\242", nullptr));
        insertPushButton->setText(QCoreApplication::translate("Widget", "\346\217\222\345\205\245", nullptr));
        idLabel->setText(QCoreApplication::translate("Widget", "\345\255\246\345\217\267", nullptr));
        nameLabel->setText(QCoreApplication::translate("Widget", "\345\247\223\345\220\215", nullptr));
        birthLabel->setText(QCoreApplication::translate("Widget", "\347\224\237\346\227\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
