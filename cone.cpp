#include "cone.h"
#include "Player.h"
#include <SFML/Graphics.hpp>

void Cone::influencePlayer(Player &player) {
    player.setHealth(player.getHealth()-1);
}
void Cone::draw(int x_pos, int y_pos, sf::RenderWindow& window) {
	sf::RectangleShape cone(sf::Vector2f(X_LENGTH_RATIO, Y_LENGTH_RATIO));
	cone.setPosition(x_pos * X_LENGTH_RATIO, y_pos * Y_LENGTH_RATIO);
	sf::Texture coneTexture;
	coneTexture.loadFromFile("cone.png");
	cone.setTexture(&coneTexture);
	while (window.isOpen())
	{
		window.draw(cone);
	}
}
