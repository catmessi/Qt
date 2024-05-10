#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>
#include <QPropertyAnimation>
#include <QMouseEvent>
// #include <QMouseEvent>

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    //explicit MyPushButton(QWidget *parent = nullptr);
     MyPushButton(QString normalImg,QString pressImg = "");

    QString normalImgPath;
    QString pressImgPath;

    //向下弹起
    void zoom1();
    //向上弹起
    void zoom2();

    //重写鼠标按下
    void mousePressEvent(QMouseEvent *e);
    //重写鼠标释放
    void mouseReleaseEvent(QMouseEvent *e);

signals:
};

#endif // MYPUSHBUTTON_H
