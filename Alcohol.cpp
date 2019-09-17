#include "Alcohol.h"
#include "Player.h"

Alcohol::~Alcohol(){}


void Alcohol::influencePlayer(Player &player) {
	player.setDrunkState(true);
}

void Alcohol::draw(int x_pos, int y_pos)
{
    // TO BE IMPLEMENTED
}
