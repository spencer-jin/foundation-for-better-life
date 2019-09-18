#ifndef BOARD_H
#define BOARD_H

#include <deque>
#include <iterator> 
#include "GameObjectGenerator.h"
#include "Player.h"
#include "GameObject.h"

class Board { 
public:
    Board();
    ~Board();
    void gameOver();
    void drawBoard();
    void update();
    std::string checkStatus();
    void setPlayerPosition(int pos);
    void setPlayerStatus(bool drunk);
    int getPlayerPosition() const;
    int getScore () const;
    int getDistance () const;
    const std::deque<std::deque<std::shared_ptr<GameObject > > >& getLanes() const;
    void setPlayerPosition(int pos);
private: 
    std::deque<std::deque<std::shared_ptr<GameObject > > > m_lanes; //should keep the pointer to the lanes, not the lane itself. Make sure to deallocte.
    GameObjectGenerator m_gameObjectGenerator; //Also change the gameobject* to gameobject smartpointer
    Player m_player; 
    int m_playerPosition; 
    int m_score;
    int m_distance;
    int m_level;
	sf::RenderWindow m_window;
};

#endif //BOARD_H
