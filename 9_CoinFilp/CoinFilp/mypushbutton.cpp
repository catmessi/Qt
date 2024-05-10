#include "mypushbutton.h"

// MyPushButton::MyPushButton(QWidget *parent)
//     : QWidget{parent}
// {}
 MyPushButton::MyPushButton(QString normalImg,QString pressImg)
{
    this->normalImgPath=normalImg;
    this->pressImgPath=pressImg;

    QPixmap pix;
    pix.load(normalImgPath);

    //设置图片大小
    this->setFixedSize(pix.width(),pix.height());
    //设置不规则图片样式
    this->setStyleSheet("QPushButton{border:0px;}");
    //设置图标
    this->setIcon(pix);
    //设置图标大小
    this->setIconSize(QSize(pix.width(),pix.height()));

 }

 void MyPushButton::zoom1()
 {
    QPropertyAnimation *animation = new QPropertyAnimation(this,"geometry");
    //设置动画时间间隔
    animation->setDuration(200);
    //设置起始位置
    animation->setStartValue(QRect(this->x(),this->y(),this->width(),this->height()));
    //设置结束位置
    animation->setEndValue(QRect(this->x(),this->y()+10,this->width(),this->height()));
    //设置弹起效果
    animation->setEasingCurve(QEasingCurve::OutBounce);
    //让动画执行
    animation->start(QAbstractAnimation::DeleteWhenStopped);
 }

 void MyPushButton::zoom2()
 {

     QPropertyAnimation *animation = new QPropertyAnimation(this,"geometry");
     //设置动画时间间隔
     animation->setDuration(200);
     //设置起始位置
     animation->setStartValue(QRect(this->x(),this->y()+10,this->width(),this->height()));
     //设置结束位置
     animation->setEndValue(QRect(this->x(),this->y(),this->width(),this->height()));
     //设置弹起效果
     animation->setEasingCurve(QEasingCurve::OutBounce);
     //让动画执行
     animation->start(QAbstractAnimation::DeleteWhenStopped);
 }

 //重写鼠标按下
 void MyPushButton::mousePressEvent(QMouseEvent *e)
 {
     if(this->pressImgPath !="")
     {
         QPixmap pix;
         bool ret = pix.load(this->pressImgPath);
         if (!ret){
             qDebug() <<"图片加载失败";
             return;
         }
         //设置图片大小
         this->setFixedSize(pix.width(),pix.height());
         //设置不规则图片样式
         this->setStyleSheet("QPushButton{border:0px;}");
         //设置图标
         this->setIcon(pix);
         //设置图标大小
         this->setIconSize(QSize(pix.width(),pix.height()));
     }
     qDebug()<<"QPushButton::mousePressEvent(e)";
     return QPushButton::mousePressEvent(e);
 }

 //重写鼠标释放
 void MyPushButton::mouseReleaseEvent(QMouseEvent *e)
 {
     if(this->pressImgPath !="")
     {
         QPixmap pix;
         bool ret = pix.load(this->normalImgPath);
         if (!ret){
             qDebug() <<"图片加载失败";
             return;
         }
         //设置图片大小
         this->setFixedSize(pix.width(),pix.height());
         //设置不规则图片样式
         this->setStyleSheet("QPushButton{border:0px;}");
         //设置图标
         this->setIcon(pix);
         //设置图标大小
         this->setIconSize(QSize(pix.width(),pix.height()));

     }
     qDebug()<<"QPushButton::mouseReleaseEvent(e)";
     return QPushButton::mouseReleaseEvent(e);
 }
























