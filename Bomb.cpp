#include "Bomb.h"
#include "Player.h"


void Bomb::InfluencePlayer(Player &player) {
    player.setHealth(player.getHealth()-3);
}