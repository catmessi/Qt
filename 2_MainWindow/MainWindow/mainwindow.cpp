#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //************************************************************************************************
    QMenuBar *menubar1 = this->menuBar();
    QMenu * filemenu = menubar1->addMenu("文件");
    QMenu * fileedit = menubar1->addMenu("编辑");

    QAction *openaction = filemenu->addAction("打开");
    //filemenu->addSeparator();//添加分割线
    QAction *saveaction = filemenu->addAction("保存");
    QAction *act1 = new QAction("新建文件或项目", this);
    fileedit->addAction(act1);

    //************************************************************************************************
    QToolBar *toolbar = this->addToolBar("");
    toolbar->addAction(openaction);
    toolbar->addAction(saveaction);
    toolbar->addAction(act1);
    QAction *act3=toolbar->addAction("欢迎");
    toolbar->addAction(act3);

    //************************************************************************************************
    QStatusBar *statusbar = new QStatusBar(this);
    //添加状态栏
    this->setStatusBar(statusbar);
    QLabel *label1 = new QLabel("左边信息", this);
    statusbar->addWidget(label1);
    QLabel *label2 = new QLabel("右边信息", this);
    statusbar->addPermanentWidget(label2);
    QPushButton *button = new QPushButton("设置", this);
    statusbar->addWidget(button);
    QDockWidget *dockwidget = new QDockWidget("这是一个铆接部件", this);
    this->addDockWidget(Qt::TopDockWidgetArea, dockwidget);
    QTextEdit *edit = new QTextEdit("文本编辑器", this);
    this->setCentralWidget(edit);




}

MainWindow::~MainWindow()
{
    delete ui;
}
