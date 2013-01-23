#pragma once

#include "GameState.h"

class MenuState : public GameState
{
public:
	MenuState(GameStateManager* manager);
	~MenuState();

	void Update(float delta);
	void Draw(sf::RenderWindow* target);

	void Enter();
	void Exit();

private:
	sf::Font		m_Font;
	sf::String		m_String;
};