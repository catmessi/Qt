#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <qpushbutton>
#include <QDebug>
#include "sonwidget.h"
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QPushButton *button;
    SonWidget *sonwindow;
    QPushButton *button1;
public slots:
    void print();//槽函数
    void button_cb();
    void signal_cb(int a);


private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
