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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *mainlineEdit;
    QGridLayout *gridLayout;
    QPushButton *cleanbutton;
    QPushButton *addbutton;
    QPushButton *subtractbutton;
    QPushButton *delbutton;
    QPushButton *sevenbutton;
    QPushButton *eightbutton;
    QPushButton *ninebutton;
    QPushButton *multbutton;
    QPushButton *fourbutton;
    QPushButton *fivebutton;
    QPushButton *sixbutton;
    QPushButton *dividebutton;
    QPushButton *onebutton;
    QPushButton *twobutton;
    QPushButton *threebutton;
    QPushButton *equalbutton;
    QPushButton *leftbutton;
    QPushButton *zerobutton;
    QPushButton *rightbutton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(233, 296);
        Widget->setMinimumSize(QSize(233, 296));
        Widget->setMaximumSize(QSize(233, 296));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(24, 20, 191, 261));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainlineEdit = new QLineEdit(widget);
        mainlineEdit->setObjectName(QString::fromUtf8("mainlineEdit"));
        mainlineEdit->setMinimumSize(QSize(0, 30));
        mainlineEdit->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(14);
        mainlineEdit->setFont(font);

        verticalLayout->addWidget(mainlineEdit);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cleanbutton = new QPushButton(widget);
        cleanbutton->setObjectName(QString::fromUtf8("cleanbutton"));
        cleanbutton->setMinimumSize(QSize(40, 40));
        cleanbutton->setMaximumSize(QSize(40, 40));
        cleanbutton->setFont(font);

        gridLayout->addWidget(cleanbutton, 0, 0, 1, 1);

        addbutton = new QPushButton(widget);
        addbutton->setObjectName(QString::fromUtf8("addbutton"));
        addbutton->setMinimumSize(QSize(40, 40));
        addbutton->setMaximumSize(QSize(40, 40));
        addbutton->setFont(font);

        gridLayout->addWidget(addbutton, 0, 1, 1, 1);

        subtractbutton = new QPushButton(widget);
        subtractbutton->setObjectName(QString::fromUtf8("subtractbutton"));
        subtractbutton->setMinimumSize(QSize(40, 40));
        subtractbutton->setMaximumSize(QSize(40, 40));
        subtractbutton->setFont(font);

        gridLayout->addWidget(subtractbutton, 0, 2, 1, 1);

        delbutton = new QPushButton(widget);
        delbutton->setObjectName(QString::fromUtf8("delbutton"));
        delbutton->setMinimumSize(QSize(40, 40));
        delbutton->setMaximumSize(QSize(40, 40));
        delbutton->setFont(font);
        delbutton->setIconSize(QSize(36, 36));

        gridLayout->addWidget(delbutton, 0, 3, 1, 1);

        sevenbutton = new QPushButton(widget);
        sevenbutton->setObjectName(QString::fromUtf8("sevenbutton"));
        sevenbutton->setMinimumSize(QSize(40, 40));
        sevenbutton->setMaximumSize(QSize(40, 40));
        sevenbutton->setFont(font);

        gridLayout->addWidget(sevenbutton, 1, 0, 1, 1);

        eightbutton = new QPushButton(widget);
        eightbutton->setObjectName(QString::fromUtf8("eightbutton"));
        eightbutton->setMinimumSize(QSize(40, 40));
        eightbutton->setMaximumSize(QSize(40, 40));
        eightbutton->setFont(font);

        gridLayout->addWidget(eightbutton, 1, 1, 1, 1);

        ninebutton = new QPushButton(widget);
        ninebutton->setObjectName(QString::fromUtf8("ninebutton"));
        ninebutton->setMinimumSize(QSize(40, 40));
        ninebutton->setMaximumSize(QSize(40, 40));
        ninebutton->setFont(font);

        gridLayout->addWidget(ninebutton, 1, 2, 1, 1);

        multbutton = new QPushButton(widget);
        multbutton->setObjectName(QString::fromUtf8("multbutton"));
        multbutton->setMinimumSize(QSize(40, 40));
        multbutton->setMaximumSize(QSize(40, 40));
        multbutton->setFont(font);

        gridLayout->addWidget(multbutton, 1, 3, 1, 1);

        fourbutton = new QPushButton(widget);
        fourbutton->setObjectName(QString::fromUtf8("fourbutton"));
        fourbutton->setMinimumSize(QSize(40, 40));
        fourbutton->setMaximumSize(QSize(40, 40));
        fourbutton->setFont(font);

        gridLayout->addWidget(fourbutton, 2, 0, 1, 1);

        fivebutton = new QPushButton(widget);
        fivebutton->setObjectName(QString::fromUtf8("fivebutton"));
        fivebutton->setMinimumSize(QSize(40, 40));
        fivebutton->setMaximumSize(QSize(40, 40));
        fivebutton->setFont(font);

        gridLayout->addWidget(fivebutton, 2, 1, 1, 1);

        sixbutton = new QPushButton(widget);
        sixbutton->setObjectName(QString::fromUtf8("sixbutton"));
        sixbutton->setMinimumSize(QSize(40, 40));
        sixbutton->setMaximumSize(QSize(40, 40));
        sixbutton->setFont(font);

        gridLayout->addWidget(sixbutton, 2, 2, 1, 1);

        dividebutton = new QPushButton(widget);
        dividebutton->setObjectName(QString::fromUtf8("dividebutton"));
        dividebutton->setMinimumSize(QSize(40, 40));
        dividebutton->setMaximumSize(QSize(40, 40));
        dividebutton->setFont(font);

        gridLayout->addWidget(dividebutton, 2, 3, 1, 1);

        onebutton = new QPushButton(widget);
        onebutton->setObjectName(QString::fromUtf8("onebutton"));
        onebutton->setMinimumSize(QSize(40, 40));
        onebutton->setMaximumSize(QSize(40, 40));
        onebutton->setFont(font);

        gridLayout->addWidget(onebutton, 3, 0, 1, 1);

        twobutton = new QPushButton(widget);
        twobutton->setObjectName(QString::fromUtf8("twobutton"));
        twobutton->setMinimumSize(QSize(40, 40));
        twobutton->setMaximumSize(QSize(40, 40));
        twobutton->setFont(font);

        gridLayout->addWidget(twobutton, 3, 1, 1, 1);

        threebutton = new QPushButton(widget);
        threebutton->setObjectName(QString::fromUtf8("threebutton"));
        threebutton->setMinimumSize(QSize(40, 40));
        threebutton->setMaximumSize(QSize(40, 40));
        threebutton->setFont(font);

        gridLayout->addWidget(threebutton, 3, 2, 1, 1);

        equalbutton = new QPushButton(widget);
        equalbutton->setObjectName(QString::fromUtf8("equalbutton"));
        equalbutton->setMinimumSize(QSize(40, 40));
        equalbutton->setMaximumSize(QSize(40, 90));
        equalbutton->setFont(font);
        equalbutton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        gridLayout->addWidget(equalbutton, 3, 3, 2, 1);

        leftbutton = new QPushButton(widget);
        leftbutton->setObjectName(QString::fromUtf8("leftbutton"));
        leftbutton->setMinimumSize(QSize(40, 40));
        leftbutton->setMaximumSize(QSize(40, 40));
        leftbutton->setFont(font);

        gridLayout->addWidget(leftbutton, 4, 0, 1, 1);

        zerobutton = new QPushButton(widget);
        zerobutton->setObjectName(QString::fromUtf8("zerobutton"));
        zerobutton->setMinimumSize(QSize(40, 40));
        zerobutton->setMaximumSize(QSize(40, 40));
        zerobutton->setFont(font);

        gridLayout->addWidget(zerobutton, 4, 1, 1, 1);

        rightbutton = new QPushButton(widget);
        rightbutton->setObjectName(QString::fromUtf8("rightbutton"));
        rightbutton->setMinimumSize(QSize(40, 40));
        rightbutton->setMaximumSize(QSize(40, 40));
        rightbutton->setFont(font);

        gridLayout->addWidget(rightbutton, 4, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        cleanbutton->setText(QCoreApplication::translate("Widget", "C", nullptr));
        addbutton->setText(QCoreApplication::translate("Widget", "+", nullptr));
        subtractbutton->setText(QCoreApplication::translate("Widget", "-", nullptr));
        delbutton->setText(QString());
        sevenbutton->setText(QCoreApplication::translate("Widget", "7", nullptr));
        eightbutton->setText(QCoreApplication::translate("Widget", "8", nullptr));
        ninebutton->setText(QCoreApplication::translate("Widget", "9", nullptr));
        multbutton->setText(QCoreApplication::translate("Widget", "*", nullptr));
        fourbutton->setText(QCoreApplication::translate("Widget", "4", nullptr));
        fivebutton->setText(QCoreApplication::translate("Widget", "5", nullptr));
        sixbutton->setText(QCoreApplication::translate("Widget", "6", nullptr));
        dividebutton->setText(QCoreApplication::translate("Widget", "/", nullptr));
        onebutton->setText(QCoreApplication::translate("Widget", "1", nullptr));
        twobutton->setText(QCoreApplication::translate("Widget", "2", nullptr));
        threebutton->setText(QCoreApplication::translate("Widget", "3", nullptr));
        equalbutton->setText(QCoreApplication::translate("Widget", "=", nullptr));
        leftbutton->setText(QCoreApplication::translate("Widget", "(", nullptr));
        zerobutton->setText(QCoreApplication::translate("Widget", "0", nullptr));
        rightbutton->setText(QCoreApplication::translate("Widget", ")", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
