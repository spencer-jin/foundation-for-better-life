//
// Created by John Paul Dillard on 9/16/19.
//

#include "Car.h"
#include "Player.h"

virtual void Car::influencePlayer(Player &player) {
    player.setHealth(-2);
}