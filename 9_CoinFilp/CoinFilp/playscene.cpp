#include "playscene.h"
#include "chooselevelscene.h"
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QPainter>
#include "mypushbutton.h"
#include <QTimer>
#include <QDebug>
#include <QLabel>
#include "mycoin.h"
#include "dataconfig.h"
#include <QThread>
#include <QPropertyAnimation>

// PlayScene::PlayScene(QWidget *parent)
//     : QMainWindow{parent}
// {}


PlayScene::PlayScene(int levalIndex)
{
    this->levalIndex = levalIndex;
    //菜单栏
    QMenuBar *bar = menuBar();
    QMenu *startMenu = bar->addMenu("开始");
    QAction *quitAction = startMenu->addAction("退出");
    connect(quitAction,&QAction::triggered,[=](){
        this->close();
    });
    //窗口大小
    this->setWindowTitle("游戏场景");
    this->setFixedSize(320,588);
    this->setWindowIcon(QPixmap(":/res/Coin0001.png"));

    //返回按钮
    MyPushButton *backButton = new MyPushButton(":/res/BackButton.png",":/res/BackButtonSelected.png");
    backButton->setParent(this);
    backButton->move(this->width()-backButton->width(),this->height()-backButton->height());

    connect(backButton,&MyPushButton::clicked,[=](){
        //emit this->chooseSceneBack();
        //延时发送
        QTimer::singleShot(500,this,[=](){
            emit this->SceneBack();
            qDebug()<<"321";
        });
    });

    QLabel *label = new QLabel;
    label->setText(QString::number(levalIndex));
    label->setParent(this);
    label->setGeometry(0,0,70,70);
    label->move(30,500);
    QFont font;
    font.setPointSize(20);
    label->setFont(font);

    //初始化游戏二维数组
    dataconfig config;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            this->gameArray[i][j] = config.mData[this->levalIndex][i][j];
        }

    }
    //
    QLabel *winLabel = new QLabel;
    QPixmap winPix;
    winPix.load(":/res/LevelCompletedDialogBg.png");
    winLabel->setGeometry(0,0,winPix.width(),winPix.height());
    winLabel->setPixmap(winPix);
    winLabel->setParent(this);
    winLabel->move((this->width()-winPix.width())*0.5,-winPix.height());




    //创建金币背景图片
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
        //Qlabel显示图片
        QLabel *label = new QLabel;
        label->setGeometry(0,0,50,50);
        QPixmap pix;
        //pix.load(QPixmap(":/res/BoardNode.png"));
        label->setPixmap(pix);
        label->setParent(this);
        label->move(57+i*50,200+j*50);

        //创建金币按钮
        QString str;
        if(this->gameArray[i][j]==1)
        {
            str=":/res/Coin0001.png";//金币
        }
        else
        {
            str=":/res/Coin0008.png";//银币
        }

        MyCoin *coin = new MyCoin(str);
        coin->setParent(this);
        coin->move(59+i*50,204+j*50);

        coin->posX=i;
        coin->posY=j;
        coin->flag=this->gameArray[i][j];//1->金币2->银币

        coinBtn[i][j] = coin;


        connect(coin,&MyCoin::clicked,[=](){

            for(int i=0;i<4;i++)
            {
                for(int j=0;j<4;j++)
                {
                    coinBtn[i][j]->isWin = true;
                }
            }





            coin->changeFlag();

            //翻转周围硬币
            //qDebug()<<"翻转";
            QTimer::singleShot(300,this,[=](){
                if(coin->posX+1<=3)//翻转右侧
                {
                    coinBtn[coin->posX+1][coin->posY]->changeFlag();
                }
                if(coin->posX-1>=0)
                {
                    coinBtn[coin->posX-1][coin->posY]->changeFlag();
                }
                if(coin->posY+1<=3)//翻下侧
                {
                    coinBtn[coin->posX][coin->posY+1]->changeFlag();
                }
                if(coin->posY-1>=0)//翻上侧
                {
                    coinBtn[coin->posX][coin->posY-1]->changeFlag();
                }

                for(int i=0;i<4;i++)
                {
                    for(int j=0;j<4;j++)
                    {
                        coinBtn[i][j]->isWin = false;
                    }
                }


                //检测是否胜利
                isWin = true;
                for(int i=0;i<4;i++)
                {
                    for(int j=0;j<4;j++)
                    {
                        if(coinBtn[i][j]->flag == false)
                        {
                            isWin = false;
                            break;
                        }
                    }
                }

                if(isWin)
                {
                    qDebug()<<"success";
                    for(int i=0;i<4;i++)
                    {
                        for(int j=0;j<4;j++)
                        {
                            coinBtn[i][j]->isWin = true;
                        }
                    }
                    QPropertyAnimation *animation = new QPropertyAnimation(winLabel,"geometry");
                    animation->setDuration(1000);
                    animation->setStartValue(QRect(winLabel->x(),winLabel->y(),winLabel->width(),winLabel->height()));
                    animation->setEndValue(QRect(winLabel->x(),winLabel->y()+114,winLabel->width(),winLabel->height()));
                    animation->setEasingCurve(QEasingCurve::OutBounce);
                    animation->start(QAbstractAnimation::DeleteWhenStopped);


                }


            });

        });

        }
    }





}

//利用绘图事件绘制背景
void PlayScene::paintEvent(QPaintEvent *)
{

    QPainter painter(this);
    QPixmap pix(":/res/PlayLevelSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);

    pix.load(":/res/Title.png");
    //pix = pix.scaled(pix.width()*0.5,pix.height()*0.5);
    painter.drawPixmap(10,30,pix.width(),pix.height(),pix);

}





















