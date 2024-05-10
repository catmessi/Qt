#ifndef MYCOIN_H
#define MYCOIN_H

#include <QPushButton>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QPainter>
#include "mypushbutton.h"
#include <QTimer>
#include <QDebug>
#include <QLabel>
#include <QMouseEvent>

class MyCoin : public QPushButton
{
    Q_OBJECT
public:
    //explicit MyCoin(QWidget *parent = nullptr);
    MyCoin(QString imgPath);
    //x坐标
    int posX;
    //y坐标
    int posY;
    //正反标志
    bool flag;

    void changeFlag();//执行翻转
    QTimer *timer1;//正->反
    QTimer *timer2;//反->正
    int min = 1;//jin
    int max = 8;//yin

    bool isAnimation = false;//动画正在执行的标志

    //重写鼠标按下事件
    void mousePressEvent(QMouseEvent *e);

    bool isWin = false;





signals:
};

#endif // MYCOIN_H
