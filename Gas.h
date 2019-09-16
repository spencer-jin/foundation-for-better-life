
#ifndef FOUNDATION_FOR_BETTER_LIFE_GAS_H
#define FOUNDATION_FOR_BETTER_LIFE_GAS_H
#include "GameObject.h"

class Gas: public GameObject {
public:
    virtual void InfluencePlayer(Player& player); //adds gas +1
}




#endif