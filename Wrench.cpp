//
// Created by John Paul Dillard on 9/16/19.
//

#include "Wrench.h"
#include "Player.h"
#include "global.h"
void Wrench::influencePlayer(Player& p) {
	p.setHealth(p.getHealth() + ADD_TO_HEALTH); // add health to the current HP
}