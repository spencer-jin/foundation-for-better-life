#ifndef BOARD_H
#define BOARD_H

#include <vector> 
#include <iterator> 
#include "GameObjectGenerator.h"
#include "Player.h"
#include "GameObject.h"

class Board { 
public:
    Board();
    ~Board();
    void drawBoard();
    void update();
    bool checkStatus();
    int getPlayerPosition() const;
    int getScore () const;
    int getDistance () const;
    const std::vector<std::vector<GameObject*> >& getLanes() const;
    void setPlayerPosition(int pos);
private: 
    std::vector<std::vector<GameObject*> > m_lanes; //should keep the pointer to the lanes, not the lane itself. Make sure to deallocte.
    GameObjectGenerator m_gameObjectGenerator; //Also change the gameobject* to gameobject smartpointer
    Player m_player; 
    int m_playerPosition; 
    int m_score;
    int m_distance;
    int m_level;
};

#endif //BOARD_H
