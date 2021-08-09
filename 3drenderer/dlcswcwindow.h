#ifndef DLCSWCWINDOW_H
#define DLCSWCWINDOW_H

// layout include
#include <QMenuBar>
#include <QOpenGLWidget>
#include <QStatusBar>
#include <QWidget>
#include <QMainWindow>

#include "xformwidget.h"
#include "dlcswcglwidget.h"

class dlcSWCWindow : public QMainWindow
{
    Q_OBJECT
public:
    QAction *actionOpen;
    QWidget *centralwidget;  // crtical!
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    //QOpenGLWidget *openGLWidget; //need to be replaced
    dlcSwcGLWidget *openGLWidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

public:
    explicit dlcSWCWindow(iDrawExternalParameter* idep);

    // layout function
    void doLayout();
    void displayText();

signals:

};

#endif // DLCSWCWINDOW_H
