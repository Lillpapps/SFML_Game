#include "GamePlayState.h"

#pragma region Base
GamePlayState::GamePlayState(GameStateManager* manager):
GameState(manager, "GamePlayState")
{
}

GamePlayState::~GamePlayState()
{
}
#pragma endregion

#pragma region Publics
void GamePlayState::Update(float delta)
{
	/*if ( is_keydown_first(SDLK_ESCAPE) )
	{
		manager->ChangeTo("MenuState");
	}*/

	// HANDLE INPUT CLASS
}

void GamePlayState::Draw(sf::RenderWindow* target)
{
	target->Draw(m_String);
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