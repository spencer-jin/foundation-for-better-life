#ifndef BOMB_H
#define BOMB_H
#include "GameObject.h"


class Bomb: public GameObject {
public:
    virtual void influencePlayer(Player& player);
    virtual ~Bomb(){};

};

#endif // BOMB_H
