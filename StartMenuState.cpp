#include "StartMenuState.h"

#pragma region Base
StartMenuState::StartMenuState(GameStateManager* manager, sf::RenderWindow* target):
GameState(manager, "StartMenuState")
{
	m_pxWindow = target;
}


StartMenuState::~StartMenuState()
{
}
#pragma endregion

#pragma region Publics
void StartMenuState::Update(float delta)
{
	if (m_pxWindow->GetInput().IsKeyDown(sf::Key::Space))
	{
		manager->ChangeTo("GamePlayState");
	}

	/*if (m_pxWindow->GetInput().IsKeyDown(sf::Key::Escape))
	{
		manager->ChangeTo("IngameMenuState");
	}*/

	// HANDLE INPUT CLASS
}

void StartMenuState::Draw()
{
	m_pxWindow->Draw(m_String);
}

void StartMenuState::Enter()
{
	m_Font.LoadFromFile("arial.ttf", 30);
	m_String.SetText("Start Menu State");
	m_String.SetFont(m_Font);
	m_String.SetSize(50);
	m_String.SetColor(sf::Color(255,255,255));
	m_String.SetPosition(500, 500);
}

void StartMenuState::Exit()
{
	
}
#pragma endregion