#ifndef SHOWTRIANGLE_H
#define SHOWTRIANGLE_H

#include <QMainWindow>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QOpenGLExtraFunctions>

#include <GL/gl.h>
#include <GL/glu.h>

class showTriangle : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT
public:
    explicit showTriangle(QWidget *parent = nullptr);

    //重写三大函数
        void initializeGL() override;
        void resizeGL(int w, int h) override;
        void paintGL() override;

        void keyPressEvent(QKeyEvent *event);           //处理键盘按下事件

private:
    bool fullScreen;

    GLfloat m_rTri; //控制三角形
    GLfloat m_rQuad; //控制四边形
};

#endif // SHOWTRIANGLE_H
