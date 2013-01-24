#include "Game.h"
#include <iostream>

int main()
{
	Game game;
	game.Initialize();
	game.Update();
	game.Cleanup();

	return 0;
}