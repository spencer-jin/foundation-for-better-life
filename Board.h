#ifndef BOARD_H
#define BOARD_H

#include <list> 
#include <iterator> 
#include "GameObjectGenerator.h"
#include "Player.h"
#include "GameObject.h"

class Board { 
public:
std::list<std::list<GameObject>> lanes;
GameObjectGenerator gameObjectGenerator; 
Player player; 


private: 

};

#endif //BOARD_H
