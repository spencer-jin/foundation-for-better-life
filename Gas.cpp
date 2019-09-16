#include "Gas.h"
#include "Player.h"

void Gas::influencePlayer(Player &player) {
    player.setGas(player.getGas()+3);
}