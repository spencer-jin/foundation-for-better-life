#include "Bomb.h"
#include "Player.h"


void Bomb::influencePlayer(Player &player) {
    player.setHealth(player.getHealth()-3);
}