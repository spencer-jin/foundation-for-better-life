#include "Alcohol.h"
#include "Player.h"

void Alcohol::influencePlayer(Player &player) {
	player.setDrunkState(true);
}