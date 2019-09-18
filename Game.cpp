#include "Game.h"
#include "utilities.h"

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
        key = getCharacter();
        board.update();
        if (board.checkStatus() == "Player Dead")
            playerDead = true; 
        if (board.checkStatus() == "Player Drunk")
            playerDrunk = true; 
    }

    gameOver();

}

void Game::gameOver() {
    board.gameOver();
}