#include "Player.h"

#pragma region Base
Player::Player()
{
}


Player::~Player()
{
}
#pragma endregion

#pragma region Publics
void Player::Initialize(sf::RenderWindow* window)
{
	m_renderWindow = window;

	m_playerImage = new sf::Image();
	m_playerImage->LoadFromFile("Assets/GraphicalAssets/PlayerPlane.png");

	m_playerSprite = new sf::Sprite();
	m_playerSprite->SetImage(*m_playerImage);
	m_playerSprite->SetPosition(m_renderWindow->GetWidth() / 2 - m_playerSprite->GetSize().x / 2, m_renderWindow->GetHeight() - m_playerSprite->GetSize().y);
}

void Player::Update()
{
	m_renderWindow->Draw(*m_playerSprite);	
}

void Player::Cleanup()
{
	delete m_playerSprite;
	delete m_playerImage;
}

void Player::Move(float xDir, float yDir)
{
	float speedX = xDir * 300.f * m_renderWindow->GetFrameTime();
	float speedY = yDir * 300.f * m_renderWindow->GetFrameTime();
	
	m_playerSprite->Move(speedX, speedY);
}

sf::Vector2f Player::GetPosition()
{
	sf::Vector2f vector2;
	vector2.x = m_playerSprite->GetPosition().x + m_playerSprite->GetSize().x / 2;
	vector2.y = m_playerSprite->GetPosition().y;
	return vector2;
}
#pragma endregion

#pragma region Privates
#pragma endregion
