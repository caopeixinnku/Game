#include "myscene.h"
#include <QKeyEvent>
#include <QDebug>

myScene::myScene(QObject *parent) : QGraphicsScene(parent)
{
    for(int i=0;i<14;i++)
        for (int j=0;j<14;j++) {
            item[i][j].setPos(i*item[i][j].boundingRect().width(),j*item[i][j].boundingRect().height());
            this->addItem(&item[i][j]);
        }
    this->qtimer = new QTimer;
    connect(this->qtimer, SIGNAL(timeout()),this,SLOT(AIMove()));
}

void myScene::KeyPressEvent(QKeyEvent *e)
{
    if(e->key()==49){
//        this->item[1][1].setPic(":/bg/pic/zuo1.png");
    }
}


void myScene::AIMove()
{

}
