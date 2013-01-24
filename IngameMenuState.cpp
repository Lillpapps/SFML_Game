#include "IngameMenuState.h"

#pragma region Base
IngameMenuState::IngameMenuState(GameStateManager* manager):
GameState(manager, "IngameMenuState")
{

}

IngameMenuState::~IngameMenuState()
{
}
#pragma endregion

#pragma region Publics
void IngameMenuState::Update(float delta)
{
	/*if ( is_keydown_first(SDLK_p) )
	{
		manager->change_to("GamePlayState");
	}

	if ( is_keydown_first(SDLK_ESCAPE) )
	{
		keep_playing() = false;
	}*/

	// HANDLE INPUT CLASS
}

void IngameMenuState::Draw(sf::RenderWindow* target)
{
	target->Draw(m_String);
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