#ifndef GAME_STATE_MANAGER_H
#define GAME_STATE_MANAGER_H

#include <vector>
#include <string>
#include <SFML\Graphics.hpp>

class GameState;

class GameStateManager
{
public:
	GameStateManager();
	~GameStateManager();

	void AddState(GameState* state);
	void ChangeTo(const std::string& state);

	void Update(float delta);
	void Render();

private:
	std::vector<GameState*>	m_states;
	GameState*				m_currentState;
	GameState*				m_nextState;
};

#endif