#ifndef ALCOHOL_H
#define ALCOHOL_H
#include "GameObject.h"
#include "Player.h"

class Alcohol : public GameObject {
public:
    virtual void influencePlayer(Player &player); //sets player status as drunk
}

class Alcohol : public GameObject {
public:
	void influencePlayer(Player&);
};

#endif // ALCOHOL_H
