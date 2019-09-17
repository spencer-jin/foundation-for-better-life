#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(300, 700), "SFML Test", sf::Style::Close | sf::Style::Resize);
	sf::RectangleShape player(sf::Vector2f(100.0f, 150.0f));
	player.setPosition(100.0f, 500.0f);
	sf::Texture playerTexture;
	playerTexture.loadFromFile("racecar.png");
	player.setTexture(&playerTexture);

	while (window.isOpen())
	{
		sf::Event evnt;
		while (window.pollEvent(evnt))
		{
			switch (evnt.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			}
		}
		//------------------------------------
		//---- USE NUM 1,2,3 To Move
		//------------------------------------
		/*if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
		{
			if (player.getPosition().x <= 0)
			{
			}
			else
			player.move(-50.0f, 0.0f);
			
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
		{
			if (player.getPosition().x >= 200)
			{
			}
			else
			player.move(50.0f, 0.0f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
		{
			player.move(0.0f, -0.1f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
		{
			player.move(0.0f, 0.1f);
		}*/
		//------------Alternative--------------------//
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Num1))
		{
			player.setPosition(0.0f, player.getPosition().y);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Num2))
		{
			player.setPosition(100.0f, player.getPosition().y);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Num3))
		{
			player.setPosition(200.0f, player.getPosition().y);
		}
		window.clear();
		window.draw(player);
		window.display();
	}

	return 0;
}