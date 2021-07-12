#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_showBtn_clicked();


};
#endif // MAINWINDOW_H
