#include "showtriangle.h"
#include <QOpenGLFunctions>
#include <GL/glu.h>
#include <QKeyEvent>
#include <QTimer>

showTriangle::showTriangle(QWidget *parent)
    : QOpenGLWidget(parent)
{
    fullScreen = false;

    m_rTri = 0.0f;
    m_rQuad = 0.0f;

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(10);

}

void showTriangle::initializeGL()
{
    initializeOpenGLFunctions();
    glClearColor(0.0, 0.0, 0.0, 0.0);                   //黑色背景
    glShadeModel(GL_SMOOTH);                            //启用阴影平滑,什么是阴影平滑？使色彩和光照更加精细

    glClearDepth(1.0);                                  //设置深度缓存，深度缓存决定了哪些物体先排
    glEnable(GL_DEPTH_TEST);                            //启用深度测试
    glDepthFunc(GL_LEQUAL);                             //所作深度测试的类型
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);  //告诉系统对透视进行修正，使得透视图看起来好一些



}

void showTriangle::resizeGL(int w, int h)
{
    glViewport(0, 0, (GLint)w, (GLint)h);               //重置当前的视口
    glMatrixMode(GL_PROJECTION);                         //重置当前的视口
    glLoadIdentity();                                   //重置投影矩阵
    //设置视口的大小
    gluPerspective(45.0, (GLfloat)w/(GLfloat)h, 0.1, 100.0);
    glMatrixMode(GL_MODELVIEW);                         //选择模型观察矩阵
    glLoadIdentity();                                   //重置模型观察矩阵
}

void showTriangle::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //清除屏幕和深度缓存
    glLoadIdentity();                                   //重置当前的模型观察矩阵

    glTranslatef(-1.5f, 0.0f, -6.0f); //左移1.5单位，并移入屏幕6.0单位
    //控制旋转
    glRotatef(m_rTri, 0.0f, 1.0f, 0.0f);                //绕 y轴 旋转三角形
    glBegin(GL_TRIANGLES);
    //前侧面
        glColor3f(1.0f, 0.0f, 0.0f); //设置该点为红色
        glVertex3f(0.0f, 1.0f, 0.0f); //上顶点，z轴暂时都不管
        glColor3f(0.0f, 1.0f, 0.0f); //设置该点为绿色
        glVertex3f(-1.0f, -1.0f, 1.0f); //左下点
        glColor3f(0.0f, 0.0f, 1.0f); //设置该点为蓝色
        glVertex3f(1.0f, -1.0f, 1.0f); //右下角

    //右侧面
        glColor3f(0.5f, 0.5f, 0.5f);
        glVertex3f(0.0f, 1.0f, 0.0f); //上顶点
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3f(1.0f, -1.0f, 1.0f); //左下 连接正面右下
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(1.0f, -1.0f, -1.0f); //右下

    //后侧面
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(0.0f, 1.0f, 0.0f);  //上
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(1.0f, -1.0f, -1.0f);  //左下
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3f(-1.0f, -1.0f, -1.0f);  //右下


    //左侧面
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(0.0f, 1.0f, 0.0f); //上
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3f(-1.0f, -1.0f, -1.0f); //左下
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(-1.0f, -1.0f, 1.0f); //右下

    glEnd(); //三角形绘制结束

    glLoadIdentity(); //重置，因为坐标轴已经旋转
    glTranslatef(1.5f, 0.0f, -6.0f); //右移1.5单位 注意！有更改，因为重置后中心点为屏幕中心
    glRotatef(m_rQuad, 1.0f, 0.0f, 0.0f); //绕 x轴进行旋转
    //glColor3f(0.5f, 0.5f, 1.0f);                        //一次性将当前色设置为蓝色
    glBegin(GL_QUADS);
    glVertex3f(1.0f, 1.0f, -1.0f);                  //右上(顶面)
    glVertex3f(-1.0f, 1.0f, -1.0f);                 //左上(顶面)
    glVertex3f(-1.0f, 1.0f, 1.0f);                  //左下(顶面)
    glVertex3f(1.0f, 1.0f, 1.0f);                   //右下(顶面)

    glColor3f(1.0f, 0.5f, 0.0f);                    //橙色
    glVertex3f(1.0f, -1.0f, 1.0f);                  //右上(底面)
    glVertex3f(-1.0f, -1.0f, 1.0f);                 //左上(底面)
    glVertex3f(-1.0f, -1.0f, -1.0f);                //左下(底面)
    glVertex3f(1.0f, -1.0f, -1.0f);                 //右下(底面)

    glColor3f(1.0f, 0.0f, 0.0f);                    //红色
    glVertex3f(1.0f, 1.0f, 1.0f);                   //右上(前面)
    glVertex3f(-1.0f, 1.0f, 1.0f);                  //左上(前面)
    glVertex3f(-1.0f, -1.0f, 1.0f);                 //左下(前面)
    glVertex3f(1.0f, -1.0f, 1.0f);                  //右下(前面)

    glColor3f(1.0f, 1.0f, 0.0f);                    //黄色
    glVertex3f(1.0f, -1.0f, -1.0f);                 //右上(后面)
    glVertex3f(-1.0f, -1.0f, -1.0f);                //左上(后面)
    glVertex3f(-1.0f, 1.0f, -1.0f);                 //左下(后面)
    glVertex3f(1.0f, 1.0f, -1.0f);                  //右下(后面)

    glColor3f(0.0f, 0.0f, 1.0f);                    //蓝色
    glVertex3f(-1.0f, 1.0f, 1.0f);                  //右上(左面)
    glVertex3f(-1.0f, 1.0f, -1.0f);                 //左上(左面)
    glVertex3f(-1.0f, -1.0f, -1.0f);                //左下(左面)
    glVertex3f(-1.0f, -1.0f, 1.0f);                 //右下(左面)

    glColor3f(1.0f, 0.0f, 1.0f);                    //紫色
    glVertex3f(1.0f, 1.0f, -1.0f);                  //右上(右面)
    glVertex3f(1.0f, 1.0f, 1.0f);                   //左上(右面)
    glVertex3f(1.0f, -1.0f, 1.0f);                  //左下(右面)
    glVertex3f(1.0f, -1.0f, -1.0f);                 //右下(右面
    glEnd(); //四边形绘制结束

    m_rTri += 0.2f;  //增加三角形旋转变量
    m_rQuad -= 0.7f; //减少四边形的选装变量
}

void showTriangle::keyPressEvent(QKeyEvent *event)
{
    switch (event->key())
    {
      //F1为全屏和普通屏的切换键
      case Qt::Key_F1:
      fullScreen = !fullScreen;
      if (fullScreen)
      {
        showFullScreen();
      }
      else
      {
        showNormal();
      }
        update();
      break;
      //ESC为退出键
      case Qt::Key_Escape:
          close();
      }
}
