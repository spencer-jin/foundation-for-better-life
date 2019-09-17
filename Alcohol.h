#ifndef ALCOHOL_H
#define ALCOHOL_H
#include "GameObject.h"
#include "Player.h"
#include <SFML/Graphics.hpp>


class Alcohol : public GameObject {
public:
    virtual ~Alcohol();

    virtual void influencePlayer(Player &player); //sets player status as drunk

    virtual void draw(int x_pos, int y_pos, sf::RenderWindow&);
};

#endif // ALCOHOL_H
