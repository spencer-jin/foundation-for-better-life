#include "Alcohol.h"
#include "Player.h"

virtual void Alcohol::influencePlayer(Player &player) {
    player.setDrunkState(true);
}