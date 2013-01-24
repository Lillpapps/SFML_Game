#include "GameStateManager.h"
#include "GameState.h"

#pragma region Base
GameStateManager::GameStateManager()
{
	m_currentState = nullptr;
	m_nextState = nullptr;
}

GameStateManager::~GameStateManager()
{
	for ( unsigned int i = 0; i < m_states.size(); i++ )
	{
		m_states[i]->Exit();
		delete m_states[i];
	}
}
#pragma endregion

#pragma region Publics
void GameStateManager::AddState(GameState* state)
{
	m_states.push_back(state);
}

void GameStateManager::ChangeTo(const std::string& state)
{
	for ( unsigned int i = 0; i < m_states.size(); i++ )
	{
		if ( m_states[i]->name() == state )
		{
			m_nextState = m_states[i];
		}
	}
}

void GameStateManager::Update(float delta)
{
	if ( m_nextState )
	{
		if ( m_currentState )
			m_currentState->Exit();

		m_currentState = m_nextState;
		m_currentState->Enter();
		m_nextState = nullptr;
	}

	if ( m_currentState )
		m_currentState->Update(delta);
}

void GameStateManager::Render()
{
	if ( m_currentState )
		m_currentState->Draw();
}
#pragma endregion