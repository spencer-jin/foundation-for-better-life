#include "Gas.h"
#include "Player.h"

Gas::~Gas(){}
void Gas::influencePlayer(Player &player) {
    player.setGas(player.getGas() + ADD_TO_GAS);
}

