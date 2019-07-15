#ifndef AI_H
#define AI_H

#include <QString>

class AI
{
private:
    int posX,posY;
    bool dizzy;
    QString faceDirection;
public:
    AI();
    void turn();
    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();
    int getX();
    int getY();
    bool isDizzy();
    QString getFaceDirection();
};

#endif // AI_H
