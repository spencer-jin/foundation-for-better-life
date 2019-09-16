#ifndef BOARD_H
#define BOARD_H

#include <list> 
#include <iterator> 
#include "GameObjectGenerator.h"
#include "Player.h"
#include "GameObject.h"

class Board { 
public:
    void drawBoard();
    void update();
    bool checkStatus();

private: 
    std::list<std::list<GameObject>> m_lanes;
    GameObjectGenerator m_gameObjectGenerator; 
    Player m_player; 
    int m_playerPosition; 
    int m_score;

};

#endif //BOARD_H
