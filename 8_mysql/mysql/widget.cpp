#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //连接数据库
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName("qt");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("130464");

    if(db.open())
    {
        QMessageBox::information(this,"连接提示","连接成功");
    }
    else
    {
        QMessageBox::warning(this,"连接提示","连接失败");
    }


}

Widget::~Widget()
{
    delete ui;
}
