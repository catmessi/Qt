#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("服务器");

    server = new QTcpServer;

    server->listen(QHostAddress::AnyIPv4,8000);

    connect(server,&QTcpServer::newConnection,this,&Widget::newClientHandler);

}

void Widget::newClientHandler()
{
    QTcpSocket *socket = server->nextPendingConnection();

    //socket->peerAddress();
    //socket->peerPort();
    //connect(socket,&QTcpSocket::readyRead,this,&Widget::clientInfoSlot);
    //多线程
    myThread *t = new myThread(socket);
    t->start();

    connect(t,&myThread::sendToWidget,this,&Widget::clientInfoSlot);



}

void Widget::clientInfoSlot(QByteArray b)
{
    //QTcpSocket *s = (QTcpSocket *)sender();
    ui->lineEdit->setText(QString(b));
}



Widget::~Widget()
{
    delete ui;
}
