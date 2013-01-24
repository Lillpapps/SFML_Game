#ifndef GAME_H
#define GAME_H

#include "IntroState.h"
#include "IngameMenuState.h"
#include "GamePlayState.h"
#include "StartMenuState.h"

class Game
{
public:
					Game();
					~Game();
void				Initialize();
void				Update();
void				Cleanup();

private:
sf::RenderWindow*	m_pxWindow;
GameStateManager*	m_pxGameStateManager;
void				CheckForEvents();

};

#endif