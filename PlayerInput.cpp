#include "PlayerInput.h"

#pragma region Base
PlayerInput::PlayerInput()
{
}


PlayerInput::~PlayerInput()
{
}
#pragma endregion

#pragma region Publics
void PlayerInput::Initialize(sf::RenderWindow* window, Player* player)
{
	m_pxWindow = window;
	m_pxplayer = player;
}

void PlayerInput::Update()
{
	float xDir = 0;
	float yDir = 0;
	if (IsKeyDown(sf::Key::Up))
	{
		yDir = -1;
	}
	if (IsKeyDown(sf::Key::Down))
	{
		yDir = 1;
	}
	if (IsKeyDown(sf::Key::Left))
	{
		xDir = -1;
	}
	if (IsKeyDown(sf::Key::Right))
	{
		xDir = 1;
	}
	if (IsKeyDown(sf::Key::Space))
	{
	}

	m_pxplayer->Move(xDir, yDir);
}

void PlayerInput::Cleanup()
{

}
#pragma endregion

#pragma region Privates
bool PlayerInput::IsKeyDown(sf::Key::Code key)
{
	return m_pxWindow->GetInput().IsKeyDown(key);
}
#pragma endregion