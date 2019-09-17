#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "Player.h"

class GameObject {
public:
	virtual ~GameObject(); // destructor
	virtual void influencePlayer(Player &p); // virtual function
	virtual void draw();
};
#endif // GAMEOBJECT_H
