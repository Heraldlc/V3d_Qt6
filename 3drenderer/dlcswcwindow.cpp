#include "dlcswcwindow.h"

dlcSWCWindow::dlcSWCWindow(iDrawExternalParameter *idep)
{
    doLayout();
    displayText();
}

void dlcSWCWindow::doLayout()
{
    if (this->objectName().isEmpty())
        this->setObjectName(QString::fromUtf8("DLC MainWindow"));
    this->resize(800,600);
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(this->sizePolicy().hasHeightForWidth());
    this->setSizePolicy(sizePolicy);

    actionOpen = new QAction(this);
    actionOpen->setObjectName(QString::fromUtf8("actionOpen"));

    centralwidget = new QWidget(this);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));

    gridLayout = new QGridLayout(centralwidget);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

    pushButton = new QPushButton(centralwidget);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));
    pushButton->setMaximumSize(QSize(100, 20));
    gridLayout->addWidget(pushButton, 0, 1, 1, 1);

    pushButton_2 = new QPushButton(centralwidget);
    pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
    pushButton_2->setMaximumSize(QSize(100, 20));
    gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

    // openglwidget, need to be replaced by a new OpenGL widget
    openGLWidget = new dlcSwcGLWidget(centralwidget);
    openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
    openGLWidget->setMinimumSize(QSize(500, 600));
    gridLayout->addWidget(openGLWidget, 0, 0, 2,1);

    this->setCentralWidget(centralwidget);

    menubar = new QMenuBar(this);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 698, 22));
    menuFile = new QMenu(menubar);
    menuFile->setObjectName(QString::fromUtf8("menuFile"));
    this->setMenuBar(menubar);
    statusbar = new QStatusBar(this);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    this->setStatusBar(statusbar);

    menubar->addAction(menuFile->menuAction());
    menuFile->addAction(actionOpen);


}

void dlcSWCWindow::displayText()
{
    this->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
    pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
}
