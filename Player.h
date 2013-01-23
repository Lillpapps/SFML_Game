#ifndef PLAYER_H
#define PLAYER_H

#include <SFML\Graphics.hpp>

class Player
{
private:
sf::RenderWindow*		m_pxWindow;
sf::Image*				m_pxplayerImage;
sf::Sprite*				m_pxplayerSprite;

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