#include "IntroState.h"

#pragma region Base
IntroState::IntroState(GameStateManager* manager):
GameState(manager, "IntroState")
{
	m_introDuration = 5.0f;
	m_introCurrentTime = 0.0f;
}

IntroState::~IntroState()
{
}
#pragma endregion

#pragma region Publics
void IntroState::Update(float delta)
{
	m_introCurrentTime += delta;

	if ( m_introCurrentTime > m_introDuration )
	{
		manager->ChangeTo("MenuState");
	}

	/*if ((evt->Type == sf::Event::KeyPressed) && (evt->Key.Code == sf::Key::Escape) )
	{
		manager->ChangeTo("MenuState");
	}*/

	// HANDLE INPUT CLASS
}

void IntroState::Draw(sf::RenderWindow* target)
{
	target->Draw(m_String);
}

void IntroState::Enter()
{
	m_Font.LoadFromFile("arial.ttf", 30);
	m_String.SetText("Intro State");
	m_String.SetFont(m_Font);
	m_String.SetSize(50);
	m_String.SetColor(sf::Color(255,255,255));
	m_String.SetPosition(500, 500);
}

void IntroState::Exit()
{
	
}
#pragma endregion