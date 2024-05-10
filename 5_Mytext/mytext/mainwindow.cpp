#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_newAction_triggered()
{
    ui->textEdit->clear();
    this->setWindowTitle("新建文本文档");
}


void MainWindow::on_openAction_triggered()
{
    QString filename=QFileDialog::getOpenFileName(this,"打开",QCoreApplication::applicationFilePath());
    if(filename.isEmpty())
    {
        QMessageBox::warning(this,"警告","请选择一个文件");
    }
    else
    {
        QFile file(filename);
        file.open(QIODevice::ReadOnly);
        QByteArray ba = file.readAll();
        ui->textEdit->setText(QString(ba));
        file.close();
    }
}


void MainWindow::on_saveAction_triggered()
{
    QString filename=QFileDialog::getSaveFileName(this,"打开",QCoreApplication::applicationFilePath());
    if(filename.isEmpty())
    {
        QMessageBox::warning(this,"警告","请选择一个文件");
    }
    else
    {
        QFile file(filename);
        file.open(QIODevice::WriteOnly);
        QByteArray ba;

        //ba.append(ui->textEdit->toPlainText());
        ba.append(qPrintable(ui->textEdit->toPlainText()));

        file.write(ba);
        file.close();
    }
}

