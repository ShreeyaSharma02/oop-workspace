#include<iostream>
#include "Game.h"
int main(){
    Game game;
    game.initGame(3, 2, 10, 10);
    game.gameLoop(5, 1.0);
    return 0;
}