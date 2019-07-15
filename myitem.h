#ifndef MYITEM_H
#define MYITEM_H

#include <QGraphicsPixmapItem>

class myItem : public QGraphicsPixmapItem
{
public:
    myItem();
    void setPic(QString path);
};

#endif // MYITEM_H
