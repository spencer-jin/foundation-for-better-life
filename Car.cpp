//
// Created by John Paul Dillard on 9/16/19.
//

#include "Car.h"
#include "Player.h"

Car::~Car(){}

void Car::influencePlayer(Player &player) {
    player.setHealth(player.getHealth()-2);
}

void Car::draw(int x_pos, int y_pos)
{
    // TO BE IMPLEMENTED
}
