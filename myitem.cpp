#include "myitem.h"
#include <QPixmap>

myItem::myItem()
{
    this->setPixmap(QPixmap(":/bg/pic/bg.png"));
}

void myItem::setPic(QString path)
{
    this->setPixmap(QPixmap(path));
}
