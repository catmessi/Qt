#ifndef PLAYSCENE_H
#define PLAYSCENE_H

#include <QMainWindow>
#include "mycoin.h"

class PlayScene : public QMainWindow
{
    Q_OBJECT
public:
    //explicit PlayScene(QWidget *parent = nullptr);
    PlayScene(int levalIndex);
    int levalIndex;
    //利用绘图事件绘制背景
    void paintEvent(QPaintEvent *);

    int gameArray[4][4];

    MyCoin *coinBtn[4][4];

    //胜利标志
    bool isWin = true;


signals:
    void SceneBack();


};

#endif // PLAYSCENE_H
