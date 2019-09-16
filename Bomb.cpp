#include "Bomb.h"
#include "Player.h"


virtual void Bomb::InfluencePlayer(Player &player) {
    player.setDrunkState(-3);
}