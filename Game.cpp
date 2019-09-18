#include "Game.h"
#include "utilities.h"
#include <iostream>
#include <windows.h> 

void Game::play() {
    bool playerDead = false; 
    bool playerDrunk = false;
    int drunkCounter = 0;
    char key;
    while (!playerDead) {
        board.drawBoard();

        if (playerDrunk) {
            int num = randInt(10);
                if (num < 5)
                    key = 'a';
                else
                    key = 'd';
            if(drunkCounter == 20) {
                drunkCounter = 0; 
                playerDrunk = false; 
                board.setPlayerStatus(playerDrunk);
            }
            drunkCounter++;
        }
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)|| sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
		{
			if (board.getPlayerPosition() <= 0)
			{
			}
			else if (board.getPlayerPosition() <= 1) // case: car in second lane
				board.setPlayerPosition(0);
			else if (board.getPlayerPosition() <= 2) // case: car in third lane
				board.setPlayerPosition(1);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)|| sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
		{
			if (board.getPlayerPosition() >= 2) // case: car in third lane
			{
			}
			else if (board.getPlayerPosition() >= 1) // case: car in second lane
				board.setPlayerPosition(2);
			else if (board.getPlayerPosition() >= 0) // case: car in first lane
				board.setPlayerPosition(1);
		}
        board.update();
        if (board.checkStatus() == "Player Dead")
            playerDead = true; 
        if (board.checkStatus() == "Player Drunk")
            playerDrunk = true;

		//delay time 
		if (board.checkStatus() != "Player Drunk")
			Sleep(300);
    }

    gameOver();

}

void Game::gameOver() {
    board.gameOver();
}