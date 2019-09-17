#ifndef ALCOHOL_H
#define ALCOHOL_H
#include "GameObject.h"
#include "Player.h"


class Alcohol : public GameObject {
public:
    virtual ~Alcohol();

    virtual void influencePlayer(Player &player); //sets player status as drunk

    virtual void draw();
};

#endif // ALCOHOL_H
