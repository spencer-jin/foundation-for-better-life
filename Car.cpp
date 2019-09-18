//
// Created by John Paul Dillard on 9/16/19.
//

#include "Car.h"
#include "Player.h"
#include <SFML/Graphics.hpp>

Car::~Car(){}

void Car::influencePlayer(Player &player) {
    player.setHealth(player.getHealth()-2);
}



void Car::draw(int x_pos, int y_pos, sf::RenderWindow& window) {
	sf::RectangleShape car(sf::Vector2f(X_LENGTH_RATIO, Y_LENGTH_RATIO));
	car.setPosition(x_pos * X_LENGTH_RATIO, y_pos * Y_LENGTH_RATIO);
	sf::Texture carTexture;
	carTexture.loadFromFile("car.png");
	car.setTexture(&carTexture);
		window.draw(car);
}
