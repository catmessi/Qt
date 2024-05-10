#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSoundEffect>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //主场景的基本设置
    this->setWindowTitle("昊哥带你翻金币");
    this->setFixedSize(320,588);

    //创建选择管卡页面
    chooseScene = new ChooseLevelScene;

    // connect(chooseScene,&ChooseLevelScene::chooseSceneBack,[=](){
    //     chooseScene->hide();
    //     this->show();
    // });
    //音效
    QSoundEffect *startSound = new QSoundEffect(this);
    startSound->setSource(QUrl::fromLocalFile(":/res/TapButtonSound.wav"));

    //开始按钮
    MyPushButton *startBtn = new MyPushButton(":/res/MenuSceneStartButton.png");
    startBtn->move(100,400);
    startBtn->setParent(this);

    connect(chooseScene,&ChooseLevelScene::chooseSceneBack,[=](){
        this->setGeometry(chooseScene->geometry());
        chooseScene->hide();
        this->show();
    });


    connect(startBtn,&MyPushButton::clicked,[=](){
        startSound->play();
        startBtn->zoom1();
        startBtn->zoom2();
        //延时进入新页面
        QTimer::singleShot(500,this,[=](){
            this->hide();
            chooseScene->setGeometry(this->geometry());
            chooseScene->show();
        });
    }
    );



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_exit_triggered()
{
    this->close();
}

//利用绘图事件绘制背景
void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix(":/res/PlayLevelSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);

    pix.load(":/res/Title.png");
    pix = pix.scaled(pix.width()*0.5,pix.height()*0.5);
    painter.drawPixmap(10,30,pix.width(),pix.height(),pix);


}























