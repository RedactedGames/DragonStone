#include "IGame.h"

DragonStone::IGame::IGame(void)
{
	gameWindow = NULL;
}

DragonStone::IGame::IGame(const IGame& _ref)
{
	gameWindow = _ref.gameWindow;
}

DragonStone::IGame& DragonStone::IGame::operator=(const IGame& _ref)
{
	gameWindow = _ref.gameWindow;
	return *this;
}

DragonStone::IGame::~IGame(void)
{
	gameWindow = NULL;
}

const bool DragonStone::IGame::Initalize(GameWindow& _gameWindow)
{
	return false;
}

const bool DragonStone::IGame::Shutdown(void)
{
	return false;
}

const bool DragonStone::IGame::pollInput(const DragonStone::InputEvent& _inputEvent)
{
	return false;
}

const bool DragonStone::IGame::Execute(const double _deltaTime)
{
	return false;
}

const std::string DragonStone::IGame::toString(void) const
{
	return "IGame";
}