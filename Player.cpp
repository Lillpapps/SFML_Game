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
	m_pxWindow = window;

	m_uScreenHeight = m_pxWindow->GetHeight();
	m_uScreenWidth = m_pxWindow->GetWidth();
	m_uSpriteHeight = m_pxPlayerSprite->GetSize().y;
	m_uSpriteWidth = m_pxPlayerSprite->GetSize().x;

	m_pxPlayerImage = new sf::Image();
	m_pxPlayerImage->LoadFromFile("Assets/GraphicalAssets/PlayerPlane.png");

	m_pxPlayerSprite = new sf::Sprite();
	m_pxPlayerSprite->SetImage(*m_pxPlayerImage);
	m_pxPlayerSprite->SetPosition(m_uScreenWidth / 2 - m_uSpriteWidth / 2, m_uScreenHeight - m_uSpriteHeight);
}

void Player::Update()
{
	m_pxWindow->Draw(*m_pxPlayerSprite);	
}

void Player::Cleanup()
{
	if (m_pxPlayerSprite != nullptr)
	{
		delete m_pxPlayerSprite;
		m_pxPlayerSprite = NULL;
	}

	if (m_pxPlayerImage != nullptr)
	{
		delete m_pxPlayerImage;
		m_pxPlayerImage = NULL;
	}
}

void Player::Move(float xDir, float yDir)
{
	float speedX = xDir * 300.f * m_pxWindow->GetFrameTime();
	float speedY = yDir * 300.f * m_pxWindow->GetFrameTime();
	
	m_pxPlayerSprite->Move(speedX, speedY);
}
#pragma endregion