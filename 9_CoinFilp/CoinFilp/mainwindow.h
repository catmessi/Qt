#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QMessageBox>
#include <mypushbutton.h>
#include <QTimer>
#include "chooselevelscene.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //利用绘图事件绘制背景
    void paintEvent(QPaintEvent *);

    //创建选择关卡的指针
    ChooseLevelScene *chooseScene;



private slots:
    void on_exit_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
