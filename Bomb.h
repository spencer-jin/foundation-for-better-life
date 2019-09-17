#ifndef BOMB_H
#define BOMB_H
#include "GameObject.h"
#include <SFML/Graphics.hpp>

class GameObject;
class Bomb: public GameObject {
public:
    virtual ~Bomb();
    virtual void influencePlayer(Player& player);
    virtual void draw(int x_pos, int y_pos, sf::RenderWindow&);

};

#endif // BOMB_H
