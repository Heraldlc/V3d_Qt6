#ifndef MYMAINWINODW_H
#define MYMAINWINODW_H

#include <QMainWindow>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QOpenGLExtraFunctions>

#include <GL/gl.h>
#include <GL/glu.h>


class MyMainWinodw : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT
public:
    explicit MyMainWinodw(QWidget *parent = nullptr);

    //重写三大函数
    void initializeGL() ;
    void resizeGL(int w, int h) ;
    void paintGL() ;

signals:



public slots:


private:


};

#endif // MYMAINWINODW_H
