#include "cone.h"
#include "Player.h"

void Cone::influencePlayer(Player &player) {
    player.setHealth(player.getHealth()-1);
}

void Cone::draw(int x_pos, int y_pos)
{
    // TO BE IMPLEMENTED
}
