//
// Created by John Paul Dillard on 9/16/19.
//

#include "Wrench.h"
#include "Player.h"
#include "GameObject.h"
#include <SFML/Graphics.hpp>

void Wrench::influencePlayer(Player& p) {
	p.setHealth(p.getHealth() + ADD_TO_HEALTH); // add health to the current HP
}

void Wrench::draw(int x_pos, int y_pos, sf::RenderWindow& window) {
	sf::RectangleShape wrench(sf::Vector2f(X_LENGTH_RATIO, Y_LENGTH_RATIO));
	wrench.setPosition(x_pos * X_LENGTH_RATIO, y_pos * Y_LENGTH_RATIO);
	sf::Texture wrenchTexture;
	wrenchTexture.loadFromFile("wrench.png");
	wrench.setTexture(&wrenchTexture);
	while (window.isOpen())
	{
		window.draw(wrench);
	}
}