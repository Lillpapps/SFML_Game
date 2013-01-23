#pragma once
#include "Player.h"
#include "Missile.h"

class PlayerInput
{
private:
sf::RenderWindow*		m_renderWindow;
Player*					m_player;
Missile*				m_missile;
bool					IsKeyDown(sf::Key::Code key);

public:
						PlayerInput();
						~PlayerInput();
void					Initialize(sf::RenderWindow* window, Player* player);
void					Update();
void					Cleanup();
};

