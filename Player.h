#ifndef PLAYER_H
#define PLAYER_H

#include <SFML\Graphics.hpp>

class Player
{
private:
sf::RenderWindow*		m_pxWindow;
sf::Image*				m_pxPlayerImage;
sf::Sprite*				m_pxPlayerSprite;
unsigned int			m_uScreenHeight;
unsigned int			m_uScreenWidth;
unsigned int			m_uSpriteHeight;
unsigned int			m_uSpriteWidth;

public:
					Player();
					~Player();
void				Initialize(sf::RenderWindow* window);
void				Update();
void				Cleanup();
void				Move(float xDir, float yDir);
void				Shoot();
};

#endif