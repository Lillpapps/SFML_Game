#ifndef START_MENU_STATE_H
#define START_MENU_STATE_H

#include "GameState.h"

class StartMenuState : public GameState
{
public:
	StartMenuState(GameStateManager* manager, sf::RenderWindow* target);
	~StartMenuState();

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