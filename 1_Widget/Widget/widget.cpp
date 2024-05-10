#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("父窗口");//设置窗口的标题
    this->resize(400, 200);//设置窗口大小，设置完毕后窗口还可以拉伸
    //this->setFixedSize(800, 400);//设置固定大小，设置完毕后窗口大小无法再改变
    //****************创建按钮并设置按钮的属性**********
    //创建一个按钮
    this->sonwindow = new SonWidget;
    //sonwindow->show();
    button1 = new QPushButton("隐藏父窗口，显示子窗口",this);
    button1->move(0,30);
    connect(button1,&QPushButton::clicked,this,&Widget::button_cb);
    connect(sonwindow,&SonWidget::show_hide_signal,this,&Widget::signal_cb);

    //注意：QT 中类实例化对象时，一般都要在堆区开辟空间
    button = new QPushButton("打印",this);
    connect(button,&QPushButton::pressed,this,&Widget::print);

    QPushButton * quitBtn = new QPushButton("关闭窗口",this);
    connect(quitBtn,&QPushButton::clicked,this,&Widget::close);
    //设置按钮的父对象为当前窗口，如果不设置，则无法再当前窗口显示
    //quitBtn->setParent(this);
    //设置按钮的大小
    quitBtn->setFixedSize(100, 80);
    //将按钮移动到指定位置
    quitBtn->move(100, 50);
    //设置按钮的名字
    //button->setText("登录");
    //button->show();

    //*********************************************************************************
    //新功能
    QPushButton *button4 = new QPushButton("对话框",this);
    button4->setParent(this);
    button4->move(0,60);
    //connect(button4,&QPushButton::clicked,this,[](){ QStringList str = QFileDialog::getOpenFileNames();qDebug()<<str;});
    //connect(button4,&QPushButton::clicked,this,[](){
    //定义一个对话框
    //QDialog dialog;
    //dialog.setWindowTitle(tr("Hello, dialog!"));//设置对话框标题
    //dialog.exec();//阻塞对话框
    //});

    connect(button4,&QPushButton::clicked,this,[](){
        QDialog * dialog = new QDialog;
        dialog->setAttribute(Qt::WA_DeleteOnClose);//关闭窗口自动释放 dialog‐>setWindowTitle(tr("非模态, dialog!"));
        dialog->setWindowTitle(tr("Hello, dialog!"));
        dialog->show();
        });


















}
void Widget::print()
{
    qDebug()<<"AVLgx";
}

void Widget::signal_cb(int a)
 {
    qDebug()<<a;
    this->show();
    this->sonwindow->hide();
}
 void Widget::button_cb()
{
    this->hide();
    this->sonwindow->show();
}



Widget::~Widget()
{
    delete ui;
}
