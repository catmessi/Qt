#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("计算器");
    QIcon con("C:\\Users\\16325\\QT\\4_calculator\\calculator\\picture\\delete");
    ui->delbutton->setIcon(con);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_onebutton_clicked()
{
    expression += "1";
    ui->mainlineEdit->setText(expression);
}


void Widget::on_twobutton_clicked()
{
    expression += "2";
    ui->mainlineEdit->setText(expression);
}


void Widget::on_threebutton_clicked()
{
    expression += "3";
    ui->mainlineEdit->setText(expression);
}


void Widget::on_fourbutton_clicked()
{
    expression += "4";
    ui->mainlineEdit->setText(expression);
}


void Widget::on_fivebutton_clicked()
{
    expression += "5";
    ui->mainlineEdit->setText(expression);
}


void Widget::on_sixbutton_clicked()
{
    expression += "6";
    ui->mainlineEdit->setText(expression);
}


void Widget::on_sevenbutton_clicked()
{
    expression += "7";
    ui->mainlineEdit->setText(expression);
}


void Widget::on_eightbutton_clicked()
{
    expression += "8";
    ui->mainlineEdit->setText(expression);
}


void Widget::on_ninebutton_clicked()
{
    expression += "9";
    ui->mainlineEdit->setText(expression);
}


void Widget::on_zerobutton_clicked()
{
    expression += "0";
    ui->mainlineEdit->setText(expression);
}


void Widget::on_leftbutton_clicked()
{
    expression += "(";
    ui->mainlineEdit->setText(expression);
}


void Widget::on_rightbutton_clicked()
{
    expression += ")";
    ui->mainlineEdit->setText(expression);
}


void Widget::on_addbutton_clicked()
{
    expression += "+";
    ui->mainlineEdit->setText(expression);
}


void Widget::on_subtractbutton_clicked()
{
    expression += "-";
    ui->mainlineEdit->setText(expression);
}


void Widget::on_multbutton_clicked()
{
    expression += "*";
    ui->mainlineEdit->setText(expression);
}


void Widget::on_dividebutton_clicked()
{
    expression += "/";
    ui->mainlineEdit->setText(expression);
}


void Widget::on_equalbutton_clicked()
{

}


void Widget::on_cleanbutton_clicked()
{
    expression.clear();
    ui->mainlineEdit->clear();
}


void Widget::on_delbutton_clicked()
{
    expression.chop(1);
    ui->mainlineEdit->setText(expression);
}

