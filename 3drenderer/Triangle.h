#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class Triangle; }
QT_END_NAMESPACE

class Triangle : public QMainWindow
{
    Q_OBJECT

public:
    Triangle(QWidget *parent = nullptr);
    ~Triangle();

private slots:
    void on_showBtn_clicked();

private:
    Ui::Triangle *ui;
};


#endif // TRIANGLE_H



