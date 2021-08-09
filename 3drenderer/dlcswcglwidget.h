#ifndef DLCSWCGLWIDGET_H
#define DLCSWCGLWIDGET_H

// this cpp file used for every demo!
#include <QOpenGLWidget>
#include <QOpenGLShaderProgram>
#include <QOpenGLFunctions>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLBuffer>
#include <QOpenGLTexture>

#include "camera.h"

class dlcSwcGLWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT
public:
    dlcSwcGLWidget(QWidget *parent = nullptr);
    ~dlcSwcGLWidget();

    virtual void initializeGL() override;
    virtual void resizeGL(int w, int h) override;
    virtual void paintGL() override;

    void keyPressEvent(QKeyEvent *event) override;
    void keyReleaseEvent(QKeyEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void wheelEvent(QWheelEvent *event) override;


private:
    QOpenGLShaderProgram shaderProgram;
    QOpenGLBuffer vbo;
    QOpenGLVertexArrayObject vao;
    QOpenGLTexture *texture1 = nullptr;
    QOpenGLTexture *texture2 = nullptr;

    QTimer* m_pTimer = nullptr;
    int m_nTimeValue = 0;

    // camera
    std::unique_ptr<Camera> camera;
    bool m_bLeftPressed;
    QPoint m_lastPos;


};

#endif // DLCSWCGLWIDGET_H
