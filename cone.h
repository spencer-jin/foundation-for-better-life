#ifndef CONE_H
#define CONE_H
#include "GameObject.h"
#include "Player.h"
#include <SFML/Graphics.hpp>
class GameObject;
class Cone : public GameObject {
public:
    virtual ~Cone();
    virtual void influencePlayer(Player& player); // decreases player health -1
    virtual void draw(int x_pos, int y_pos, sf::RenderWindow&);
};
#endif // CONE_H







