#ifndef BOMB_H
#define BOMB_H
#include "GameObject.h"

class GameObject;
class Bomb: public GameObject {
public:
    virtual ~Bomb();
    virtual void influencePlayer(Player& player);


};

#endif // BOMB_H
