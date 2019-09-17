#include "Alcohol.h"
#include "Player.h"

void Alcohol::influencePlayer(Player &player) {
	player.setDrunkState(true);
}


void Alcohol::draw(int x_pos, int y_pos) {}