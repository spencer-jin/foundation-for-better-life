#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "Player.h"
#include <SFML/Graphics.hpp>
class GameObject {
public:
	virtual ~GameObject(); // destructor
	virtual void influencePlayer(Player &p); // virtual function
	virtual void draw(int, int, sf::RenderWindow&);
protected:
	const int X_LENGTH_RATIO = 100;
	const int Y_LENGTH_RATIO = 125;
};
#endif // GAMEOBJECT_H
