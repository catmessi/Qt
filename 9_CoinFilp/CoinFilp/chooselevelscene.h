#ifndef CHOOSELEVELSCENE_H
#define CHOOSELEVELSCENE_H
#include "playscene.h"

#include <QMainWindow>

class ChooseLevelScene : public QMainWindow
{
    Q_OBJECT
public:
    explicit ChooseLevelScene(QWidget *parent = nullptr);

    //利用绘图事件绘制背景
    void paintEvent(QPaintEvent *);

    PlayScene *playScene;

signals:
    void chooseSceneBack();
};

#endif // CHOOSELEVELSCENE_H
