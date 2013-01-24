#include "Game.h"
#include <iostream>

int main()
{
	std::cout << "Lasse" << std::endl;
	Game game;
	game.Initialize();
	game.Update();
	game.Cleanup();

	return 0;
}