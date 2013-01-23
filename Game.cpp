#include "Game.h"


Game::Game()
{
}


Game::~Game()
{
}

void Game::Initialize()
{
	unsigned int ScreenCenterX = sf::VideoMode::GetDesktopMode().Width / 2;
	m_pxWindow = new sf::RenderWindow(sf::VideoMode::GetMode(2), "SFML Window");
	m_pxWindow->SetPosition(ScreenCenterX - m_pxWindow->GetWidth() / 2, 0);
	m_pxGameStateManager = new GameStateManager;
	m_pxGameStateManager->AddState(new IntroState(m_pxGameStateManager));
	m_pxGameStateManager->AddState(new MenuState(m_pxGameStateManager));
	m_pxGameStateManager->AddState(new GamePlayState(m_pxGameStateManager));

	m_pxGameStateManager->ChangeTo("IntroState");
}

void Game::Update()
{
	while (m_pxWindow->IsOpened())
	{
		CheckForEvents();
		
		m_pxGameStateManager->Update(m_pxWindow->GetFrameTime());
		
		m_pxWindow->Clear();		
		m_pxGameStateManager->Render(m_pxWindow);
		m_pxWindow->Display();
	}
}

void Game::Cleanup()
{
	delete m_pxWindow;
	delete m_pxGameStateManager;
}

void Game::CheckForEvents()
{
	sf::Event evt;
	while (m_pxWindow->GetEvent(evt))
	{
		if (evt.Type == sf::Event::Closed)
		{
			m_pxWindow->Close();
		}
		if ((evt.Type == sf::Event::KeyPressed) && (evt.Key.Code == sf::Key::Escape))
		{
			m_pxWindow->Close();
		}
	}
}