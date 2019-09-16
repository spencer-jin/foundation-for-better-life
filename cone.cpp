#include "cone.h"
#include "Player.h"

virtual void Cone::influencePlayer(Player &player) {
    player.setHealth(-1);
}