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

	m_pxplayerImage = new sf::Image();
	m_pxplayerImage->LoadFromFile("Assets/GraphicalAssets/PlayerPlane.png");

	m_pxplayerSprite = new sf::Sprite();
	m_pxplayerSprite->SetImage(*m_pxplayerImage);
	m_pxplayerSprite->SetPosition(m_pxWindow->GetWidth() / 2 - m_pxplayerSprite->GetSize().x / 2, m_pxWindow->GetHeight() - m_pxplayerSprite->GetSize().y);
}

void Player::Update()
{
	m_pxWindow->Draw(*m_pxplayerSprite);	
}

void Player::Cleanup()
{
	if (m_pxplayerSprite != nullptr)
	{
		delete m_pxplayerSprite;
		m_pxplayerSprite = NULL;
	}

	if (m_pxplayerImage != nullptr)
	{
		delete m_pxplayerImage;
		m_pxplayerImage = NULL;
	}
}

void Player::Move(float xDir, float yDir)
{
	float speedX = xDir * 300.f * m_pxWindow->GetFrameTime();
	float speedY = yDir * 300.f * m_pxWindow->GetFrameTime();
	
	m_pxplayerSprite->Move(speedX, speedY);
}
#pragma endregion