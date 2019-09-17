//
// Created by John Paul Dillard on 9/16/19.
//

#ifndef FOUNDATION_FOR_BETTER_LIFE_WRENCH_H
#define FOUNDATION_FOR_BETTER_LIFE_WRENCH_H

#include "Player.h"
#include "GameObject.h"
#include <SFML/Graphics.hpp>

class Wrench : public GameObject{
private:
	const int ADD_TO_HEALTH = 1;
public:
    virtual ~Wrench();
	virtual void influencePlayer(Player&);
	virtual void draw(int x_pos, int y_pos, sf::RenderWindow&);
};

#endif //FOUNDATION_FOR_BETTER_LIFE_WRENCH_H
