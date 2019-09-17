#include "Bomb.h"
#include "Player.h"


void Bomb::influencePlayer(Player &player) {
    player.setHealth(player.getHealth()-3);
}

void Bomb::draw(int x_pos, int y_pos)
{
    // TO BE IMPLEMENTED
}
