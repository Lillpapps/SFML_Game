#ifndef START_MENU_STATE_H
#define START_MENU_STATE_H

#include "GameState.h"

class StartMenuState : public GameState
{
public:
	StartMenuState(GameStateManager* manager);
	~StartMenuState();

	void Update(float delta);
	void Draw(sf::RenderWindow* target);

	void Enter();
	void Exit();

	private:
	sf::Font		m_Font;
	sf::String		m_String;
};

#endif