#include "chooselevelscene.h"
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QPainter>
#include "mypushbutton.h"
#include <QTimer>
#include <QDebug>
#include <QLabel>

ChooseLevelScene::ChooseLevelScene(QWidget *parent)
    : QMainWindow{parent}
{
    //菜单栏
    QMenuBar *bar = menuBar();
    QMenu *startMenu = bar->addMenu("开始");
    QAction *quitAction = startMenu->addAction("退出");
    connect(quitAction,&QAction::triggered,[=](){
        this->close();
    });
    //窗口大小
    this->setWindowTitle("选择关卡");
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
            emit this->chooseSceneBack();
        });
    });
    playScene = NULL;
    //20个小按钮选关
    for(int i=0;i<20;i++)
    {
        MyPushButton *menuBtn = new MyPushButton(":/res/LevelIcon.png");
        menuBtn->setParent(this);
        menuBtn->move(25+(i%4)*70,130+(i/4)*70);
        //menuBtn->setText(QString::number(i+1));//丑
        connect(menuBtn,&MyPushButton::clicked,[=](){
            qDebug()<<i+1;
            playScene = new PlayScene(i+1);
            playScene->setGeometry(this->geometry());
            this->hide();
            playScene->show();



            //监听游戏场景返回信号
            connect(this->playScene,&PlayScene::SceneBack,[=](){
                qDebug()<<"123";
                this->setGeometry(playScene->geometry());
                delete this->playScene;
                this->playScene = NULL;

                this->show();

            });


        });
        // //监听游戏场景返回信号
        // connect(this->playScene,&PlayScene::SceneBack,[=](){
        //     qDebug()<<"123";
        //     delete this->playScene;
        //     this->playScene = NULL;
        //     this->show();

        // });
        //创建选择具体关卡号的Qlable
        QLabel *label = new QLabel;
        label->setParent(this);
        label->setFixedSize(menuBtn->width(),menuBtn->height());
        label->setText(QString::number(i+1));
        label->move(25+(i%4)*70,130+(i/4)*70);
        label->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        //设置鼠标穿透
        label->setAttribute(Qt::WA_TransparentForMouseEvents);
    }
}

//利用绘图事件绘制背景
void ChooseLevelScene::paintEvent(QPaintEvent *)
{

    QPainter painter(this);
    QPixmap pix(":/res/PlayLevelSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);

    pix.load(":/res/Title.png");
    //pix = pix.scaled(pix.width()*0.5,pix.height()*0.5);
    painter.drawPixmap(10,30,pix.width(),pix.height(),pix);



}
