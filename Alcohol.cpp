#include "Alcohol.h"
#include "Player.h"
#include <SFML/Graphics.hpp>

Alcohol::~Alcohol(){}


void Alcohol::influencePlayer(Player &player) {
	player.setDrunkState(true);
}



void Alcohol::draw(int x_pos, int y_pos, sf::RenderWindow& window) {
	sf::RectangleShape alcohol(sf::Vector2f(X_LENGTH_RATIO, Y_LENGTH_RATIO));
	alcohol.setPosition(x_pos * X_LENGTH_RATIO, y_pos * Y_LENGTH_RATIO);
	sf::Texture alcoholTexture;
	alcoholTexture.loadFromFile("alcohol.png");
	alcohol.setTexture(&alcoholTexture);
	window.draw(alcohol);

}

