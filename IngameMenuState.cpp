#include "IngameMenuState.h"

#pragma region Base
IngameMenuState::IngameMenuState(GameStateManager* manager, sf::RenderWindow* target):
GameState(manager, "IngameMenuState")
{
	m_pxWindow = target;
}

IngameMenuState::~IngameMenuState()
{
}
#pragma endregion

#pragma region Publics
void IngameMenuState::Update(float delta)
{
	/*if (m_pxWindow->GetInput().IsKeyDown(sf::Key::Space))
	{
		manager->ChangeTo("GamePlayState");
	}*/

	if (m_pxWindow->GetInput().IsKeyDown(sf::Key::Escape))
	{
		manager->ChangeTo("GamePlayState");
	}

	// HANDLE INPUT CLASS
}

void IngameMenuState::Draw()
{
	m_pxWindow->Draw(m_String);
}

void IngameMenuState::Enter()
{
	m_Font.LoadFromFile("arial.ttf", 30);
	m_String.SetText("Ingame Menu State");
	m_String.SetFont(m_Font);
	m_String.SetSize(50);
	m_String.SetColor(sf::Color(255,255,255));
	m_String.SetPosition(500, 500);
}

void IngameMenuState::Exit()
{
	
}
#pragma endregion