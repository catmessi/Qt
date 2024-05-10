#ifndef SONWIDGET_H
#define SONWIDGET_H

#include <QWidget>
#include <QPushButton>

class SonWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SonWidget(QWidget *parent = nullptr);
    QPushButton *button2;

signals: //定义信号
    //信号没有返回值 可以有参数 信号函数不需要定义 只需要声明
    void show_hide_signal(int a);
public slots:
    void emit_mysignal();
};

#endif // SONWIDGET_H
