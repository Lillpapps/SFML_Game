#ifndef INGAME_MENU_STATE_H
#define INGAME_MENU_STATE_H

#include "GameState.h"

class IngameMenuState : public GameState
{
public:
	IngameMenuState(GameStateManager* manager, sf::RenderWindow* target);
	~IngameMenuState();

	void Update(float delta);
	void Draw();

	void Enter();
	void Exit();

private:
	sf::RenderWindow*	m_pxWindow;
	sf::Font			m_Font;
	sf::String			m_String;
};

#endif