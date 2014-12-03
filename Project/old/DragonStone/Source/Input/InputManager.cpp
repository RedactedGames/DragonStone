#include "InputManager.h"

DragonStone::InputManager::InputManager(void)
{
	
}

DragonStone::InputManager::InputManager(const DragonStone::InputManager& _ref)
{
	
}

DragonStone::InputManager& DragonStone::InputManager::operator=(const DragonStone::InputManager& _ref)
{
	return *this;
}

DragonStone::InputManager::~InputManager(void)
{
	
}

void DragonStone::InputManager::Initalize(GameWindow* _gameWindow)
{
	this->gameWindow = _gameWindow;
}

/* 0===========================================================================0
 * | Mouse                                                                     |
 * 0===========================================================================0
 */
const bool DragonStone::InputManager::isMouseButtonPressed(DragonStone::MouseButton _button) const
{
	return sf::Mouse::isButtonPressed((sf::Mouse::Button)_button);
}

const sf::Vector2i DragonStone::InputManager::getMouseGlobalPosition(void) const
{
	return sf::Mouse::getPosition();
}

const sf::Vector2i DragonStone::InputManager::getMouseLocalPosition(void) const
{
	return sf::Mouse::getPosition(*this->gameWindow->getWindow());
}

void DragonStone::InputManager::setMouseGlobalPosition(const sf::Vector2i& _position)
{
	sf::Mouse::setPosition(_position);
}

void DragonStone::InputManager::setMouseLocalPosition(const sf::Vector2i& _position)
{
	sf::Mouse::setPosition(_position, *this->gameWindow->getWindow());
}

/* 0===========================================================================0
 * | Keyboard                                                                  |
 * 0===========================================================================0
 */
const bool DragonStone::InputManager::isKeyboardButtonPressed(DragonStone::KeyboardKey _key) const
{
	if(this->gameWindow->hasFocus())
	{
		return sf::Keyboard::isKeyPressed((sf::Keyboard::Key)_key);
	}
	else
	{
		return false;
	}
}