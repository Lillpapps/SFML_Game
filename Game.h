#pragma once
#include "IntroState.h"
#include "MenuState.h"
#include "GamePlayState.h"

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

