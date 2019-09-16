//
// Created by John Paul Dillard on 9/16/19.
//

#include "Wrench.h"
#include "Player.h"
#include "global.h"
void Wrench::influencePlayer(Player& p) {
	// if health is already full, ignore
	if (p.getHealth() >= MAX_HEALTH_LIMIT)
		return;
	// else
	p.setHealth(p.getHealth() + ADD_TO_HEALTH); // add health to the current HP
}