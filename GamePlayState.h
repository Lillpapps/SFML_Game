#ifndef GAME_PLAY_STATE_H
#define GAME_PLAY_STATE_H

#include "GameState.h"

class GamePlayState : public GameState
{
public:
	GamePlayState(GameStateManager* manager, sf::RenderWindow* target);
	~GamePlayState();

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