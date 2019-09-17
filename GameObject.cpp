#include "GameObject.h"
#include "Player.h"
#include <SFML/Graphics.hpp>
GameObject::~GameObject(){}

// do nothing since this is base's class virtual function
void GameObject::influencePlayer(Player &p) {
	return;
}

void GameObject::draw(int xPos, int yPos, sf::RenderWindow &window) {
	sf::RectangleShape blankSpace(sf::Vector2f(X_LENGTH_RATIO, Y_LENGTH_RATIO));
	blankSpace.setPosition(xPos * X_LENGTH_RATIO, yPos * Y_LENGTH_RATIO);
	while (window.isOpen())
	{
		window.draw(blankSpace);
	}
}