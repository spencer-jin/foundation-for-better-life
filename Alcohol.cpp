#include "Alcohol.h"
#include "Player.h"

void Alcohol::influencePlayer(Player &p) {
	p.setDrunkState(true);// sets player's drunk status to true
}