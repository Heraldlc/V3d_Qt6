#ifndef DLCSWCGLWIDGET_H
#define DLCSWCGLWIDGET_H

#include <QOpenGLWindow>
#include <QOpenGLExtraFunctions>
#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLShader>
#include <QOpenGLShaderProgram>
#include <QOpenGLWidget>

class dlcSwcGLWidget : public QOpenGLWidget, protected QOpenGLFunctions_3_3_Core
{
    Q_OBJECT
public:
    dlcSwcGLWidget(QWidget *parent = nullptr);
    ~dlcSwcGLWidget();

    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;


private:
    QOpenGLShaderProgram shaderProgram;

};

#endif // DLCSWCGLWIDGET_H
