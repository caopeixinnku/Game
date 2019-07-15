#ifndef LITTLEMONSTER_H
#define LITTLEMONSTER_H

#include <QString>


class LittleMonster
{
private:
    int posX,posY;
    bool dead;
    bool withStone;
    QString faceDirection;
public:
    LittleMonster();
    void turn();
    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();
    void spitOut();
    int getX();
    int getY();
    bool isDead();
    bool isWithStone();
    QString getFaceDirection();
};

#endif // LITTLEMONSTER_H
