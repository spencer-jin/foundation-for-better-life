//
// Created by John Paul Dillard on 9/16/19.
//

#include "Wrench.h"
#include "Player.h"

void Wrench::influencePlayer(Player& p) {
	// some function to check max_health
	// if health is already full, ignore
	//----------------

	//----------------
	// else
	p.setHealth(p.getHealth() + addHealth); // add health to the current HP
}