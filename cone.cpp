#include "cone.h"
#include "Player.h"
void Cone::influencePlayer(Player &player) {
    player.setHealth(player.getHealth()-1);
}