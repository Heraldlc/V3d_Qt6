#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mymainwinodw.h"

#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    //, ui(new Ui::MainWindow)
{
    //ui->setupUi(this);
    QPushButton *btn = new QPushButton("show image", this);
    btn->move(30,50);

    connect(btn, &QPushButton::clicked ,this, &MainWindow::on_showBtn_clicked);
}

MainWindow::~MainWindow()
{
    //delete ui;
}


void MainWindow::on_showBtn_clicked()
{
    //点击后即可弹出一个新窗口，显示opengl渲染结果
    qDebug()<<"槽函数被调用了";
    QMainWindow *newQMain = new QMainWindow(this);
    MyMainWinodw* myWin = new MyMainWinodw(newQMain);
    myWin->resize(500, 500);
    myWin->show();


}

