#include "mycoin.h"
#include <QTimer>

// MyCoin::MyCoin(QWidget *parent)
//     : QWidget{parent}
// {}
MyCoin::MyCoin(QString imgPath)
{
    QPixmap pix;
    bool ret = pix.load(imgPath);
    if(!ret)
    {
        qDebug()<<"图片加载失败"<<imgPath;
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
    //先创建定时器
    timer1 = new QTimer(this);
    timer2 = new QTimer(this);

    //jin-yin
    connect(timer1,&QTimer::timeout,[=](){
        QPixmap pix;
        QString str = QString(":/res/Coin000%1").arg(this->min++);
        bool ret = pix.load(str);
        if(!ret)
        {
            qDebug()<<"图片加载失败"<<imgPath;
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
        if(this->min>this->max)
        {
            this->min=1;
            this->isAnimation = false;
            timer1->stop();
        }

    });
        //yin-jin
        connect(timer2,&QTimer::timeout,[=](){
            QPixmap pix;
            QString str = QString(":/res/Coin000%1").arg(this->max--);
            bool ret = pix.load(str);
            if(!ret)
            {
                qDebug()<<"图片加载失败"<<imgPath;
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
            if(this->max<this->min)
            {
                this->max=8;
                this->isAnimation = false;
                timer2->stop();
            }

        });
}
//翻转



void MyCoin::changeFlag()
{
    if(this->flag)
    {
        timer1->start(30);
        this->isAnimation = true;
        this->flag=false;//jin-yin

    }
    else
    {
        timer2->start(30);
        this->isAnimation = true;
        this->flag=true;//yin-jin

    }
}

void MyCoin::mousePressEvent(QMouseEvent *e)
{
    if(this->isAnimation ||this->isWin)
    {
        return;
    }
    else
    {
        QPushButton::mousePressEvent(e);
    }
}

























