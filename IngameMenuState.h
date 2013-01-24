#ifndef INGAME_MENU_STATE_H
#define INGAME_MENU_STATE_H

#include "GameState.h"

class IngameMenuState : public GameState
{
public:
	IngameMenuState(GameStateManager* manager);
	~IngameMenuState();

	void Update(float delta);
	void Draw(sf::RenderWindow* target);

	void Enter();
	void Exit();

private:
	sf::Font		m_Font;
	sf::String		m_String;
};

#endif