#include "Gas.h"
#include "Player.h"
#include <SFML/Graphics.hpp>

Gas::~Gas(){}

void Gas::influencePlayer(Player &player) {
    player.setGas(player.getGas() + ADD_TO_GAS);
}

	void Gas::draw(int x_pos, int y_pos, sf::RenderWindow& window) {
	sf::RectangleShape gas(sf::Vector2f(X_LENGTH_RATIO, Y_LENGTH_RATIO));
	gas.setPosition(x_pos * X_LENGTH_RATIO, y_pos * Y_LENGTH_RATIO);
	sf::Texture gasTexture;
	gasTexture.loadFromFile("gas.png");
	gas.setTexture(&gasTexture);
		window.draw(gas);
}