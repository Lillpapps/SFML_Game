#ifndef INTRO_STATE_H
#define INTRO_STATE_H

#include "GameState.h"

class IntroState : public GameState
{
public:
	IntroState(GameStateManager* manager, sf::RenderWindow* target);
	~IntroState();

	void Update(float delta);
	void Draw();

	void Enter();
	void Exit();

private:
	sf::RenderWindow*	m_pxWindow;
	sf::Font			m_Font;
	sf::String			m_String;
	float				m_introDuration;
	float				m_introCurrentTime;
};

#endif