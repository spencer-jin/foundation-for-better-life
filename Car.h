//
// Created by John Paul Dillard on 9/16/19.
//

#ifndef FOUNDATION_FOR_BETTER_LIFE_CAR_H
#define FOUNDATION_FOR_BETTER_LIFE_CAR_H
#include "GameObject.h"
#include "Player.h"

class Car :public GameObject{
public:
    virtual void influencePlayer(Player&); // decreases player’s health by -2
    virtual ~Car(){};
};


#endif //FOUNDATION_FOR_BETTER_LIFE_CAR_H
