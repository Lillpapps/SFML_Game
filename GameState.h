#pragma once

#include "GameStateManager.h"

class GameState
{
public:
	GameState(GameStateManager* manager, const std::string& name):manager(manager), m_name(name) {}
	virtual ~GameState() {}

	const std::string& name() const { return m_name; }

	virtual void Update(float delta) = 0;
	virtual void Draw(sf::RenderWindow* target) = 0;

	virtual void Enter() {}
	virtual void Exit() {}

protected:
	GameStateManager* manager;

private:
	std::string m_name;

};