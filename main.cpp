
#include <iostream>

#include "game.h"

int main () {

    Game *game = new Game( 8 );
    game->initializeRandomly();

    delete game;

    return 0;

}
