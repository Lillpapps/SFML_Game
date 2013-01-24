#include "GamePlayState.h"

#pragma region Base
GamePlayState::GamePlayState(GameStateManager* manager, sf::RenderWindow* target):
GameState(manager, "GamePlayState")
{
	m_pxWindow = target;
}

GamePlayState::~GamePlayState()
{
	
}
#pragma endregion

#pragma region Publics
void GamePlayState::Update(float delta)
{
	/*if (m_pxWindow->GetInput().IsKeyDown(sf::Key::Space))
	{
		manager->ChangeTo("GamePlayState");
	}*/

	if (m_pxWindow->GetInput().IsKeyDown(sf::Key::Escape))
	{
		manager->ChangeTo("IngameMenuState");
	}

	// HANDLE INPUT CLASS
}

void GamePlayState::Draw()
{
	m_pxWindow->Draw(m_String);
}

void GamePlayState::Enter()
{
	m_Font.LoadFromFile("arial.ttf", 30);
	m_String.SetText("GamePlay State");
	m_String.SetFont(m_Font);
	m_String.SetSize(50);
	m_String.SetColor(sf::Color(255,255,255));
	m_String.SetPosition(500, 500);
}

void GamePlayState::Exit()
{
	
}
#pragma endregion