#ifndef STONE_H
#define STONE_H


class Stone
{
private:
    int posX,posY;
    bool moving;
public:
    Stone();
    int getX();
    int getY();
    bool isMoving();
    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();
};

#endif // STONE_H
