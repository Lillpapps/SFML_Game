#ifndef GAME_PLAY_STATE_H
#define GAME_PLAY_STATE_H

#include "GameState.h"

class GamePlayState : public GameState
{
public:
	GamePlayState(GameStateManager* manager);
	~GamePlayState();

	void Update(float delta);
	void Draw(sf::RenderWindow* target);

	void Enter();
	void Exit();

private:
	sf::Font		m_Font;
	sf::String		m_String;
};

#endif