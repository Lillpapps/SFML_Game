#pragma once

#include "GameState.h"

class IntroState : public GameState
{
public:
	IntroState(GameStateManager* manager);
	~IntroState();

	void Update(float delta);
	void Draw(sf::RenderWindow* target);

	void Enter();
	void Exit();

private:
	sf::Font		m_Font;
	sf::String		m_String;
	float			m_introDuration;
	float			m_introCurrentTime;
};