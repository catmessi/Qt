#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setWindowTitle("客户端");

    socket=new QTcpSocket;



}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_cancelButton_clicked()
{
    this->close();
}


void Widget::on_connectButton_clicked()
{
    QString IP = ui->iplineEdit->text();
    QString port = ui->portlineEdit->text();

    socket->connectToHost(QHostAddress(IP),port.toShort());

    connect(socket,&QTcpSocket::connected,[this]()
    {
        QMessageBox::information(this,"连接提示","服务器连接成功");
        this->hide();
        chat *c = new chat(socket);
        c->show();
    });

    connect(socket,&QTcpSocket::disconnected,[this]()
    {
        QMessageBox::warning(this,"警告","服务器断开连接");
    });
}

