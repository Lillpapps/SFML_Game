#pragma once
#include "Missile.h"

class Player
{
private:
sf::RenderWindow*		m_renderWindow;
sf::Image*				m_playerImage;
sf::Sprite*				m_playerSprite;

public:
					Player();
					~Player();
void				Initialize(sf::RenderWindow* window);
void				Update();
void				Cleanup();
void				Move(float xDir, float yDir);
void				Shoot();
sf::Vector2f		GetPosition();
};

