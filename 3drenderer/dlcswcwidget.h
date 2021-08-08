#ifndef DLCSWCWIDGET_H
#define DLCSWCWIDGET_H

#include <QWidget>

#include "xformwidget.h"

class dlcSWCWidget : public QWidget
{
    Q_OBJECT
public:
    explicit dlcSWCWidget(iDrawExternalParameter* idep);

signals:

};

#endif // DLCSWCWIDGET_H
