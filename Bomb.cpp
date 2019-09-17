#include "Bomb.h"
#include "Player.h"
#include <SFML/Graphics.hpp>

Bomb::~Bomb(){}

void Bomb::influencePlayer(Player &player) {
    player.setHealth(player.getHealth()-3);
}
void Bomb::draw(int x_pos, int y_pos, sf::RenderWindow& window) {
	sf::RectangleShape bomb(sf::Vector2f(X_LENGTH_RATIO, Y_LENGTH_RATIO));
	bomb.setPosition(x_pos * X_LENGTH_RATIO, y_pos * Y_LENGTH_RATIO);
	sf::Texture bombTexture;
	bombTexture.loadFromFile("bomb.png");
	bomb.setTexture(&bombTexture);
	while (window.isOpen())
	{
		window.draw(bomb);
	}
}