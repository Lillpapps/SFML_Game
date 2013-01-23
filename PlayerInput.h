#ifndef PLAYER_INPUT_H
#define PLAYER_INPUT_H

#include "Player.h"

class PlayerInput
{
private:
sf::RenderWindow*		m_pxWindow;
Player*					m_pxPlayer;
bool					IsKeyDown(sf::Key::Code key);

public:
						PlayerInput();
						~PlayerInput();
void					Initialize(sf::RenderWindow* window, Player* player);
void					Update();
void					Cleanup();
};

#endif