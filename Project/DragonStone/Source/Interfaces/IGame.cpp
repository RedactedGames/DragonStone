#include "IGame.h"

IGame::IGame(void)
{
	gameWindow = NULL;
}

IGame::IGame(const IGame& _ref)
{
	gameWindow = _ref.gameWindow;
}

IGame& IGame::operator=(const IGame& _ref)
{
	gameWindow = _ref.gameWindow;
	return *this;
}

IGame::~IGame(void)
{
	gameWindow = NULL;
}

const bool IGame::Initalize(GameWindow& _gameWindow)
{
	return false;
}

const bool IGame::Shutdown(void)
{
	return false;
}

const bool IGame::pollEvent(sf::Event& _event)
{
	return false;
}

const bool IGame::Execute(const double _deltaTime)
{
	return false;
}

const std::string IGame::toString(void) const
{
	return "IGame";
}