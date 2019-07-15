#ifndef MYSCENE_H
#define MYSCENE_H

#include <QObject>
#include <QGraphicsScene>
#include "myitem.h"
#include <QTimer>
#include <QKeyEvent>

class myScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit myScene(QObject *parent = nullptr);
    void KeyPressEvent(QKeyEvent *e);

signals:

public slots:
    void AIMove();

private:
    myItem item[14][14];
    QTimer *qtimer;
};

#endif // MYSCENE_H
