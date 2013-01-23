#include "MenuState.h"

MenuState::MenuState(GameStateManager* manager):
GameState(manager, "MenuState")
{

}

MenuState::~MenuState()
{
}

void MenuState::Update(float delta)
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

void MenuState::Draw(sf::RenderWindow* target)
{
	target->Draw(m_String);
}

void MenuState::Enter()
{
	m_Font.LoadFromFile("arial.ttf", 30);
	m_String.SetText("Menu State");
	m_String.SetFont(m_Font);
	m_String.SetSize(50);
	m_String.SetColor(sf::Color(255,255,255));
	m_String.SetPosition(500, 500);
}

void MenuState::Exit()
{
	
}