#include "InputEventManager.h"

DragonStone::InputEventManager::InputEventManager(void)
{
	
}

DragonStone::InputEventManager::InputEventManager(const InputEventManager& _ref)
{
	
}

DragonStone::InputEventManager& DragonStone::InputEventManager::operator=(const InputEventManager& _ref)
{
	return *this;
}

DragonStone::InputEventManager::~InputEventManager(void)
{
	
}

void DragonStone::InputEventManager::initialize(void)
{
	
}

const bool DragonStone::InputEventManager::pollEvent(const sf::Event& _sfEvent, InputEvent& _inputEvent)
{
	switch(_sfEvent.type)
	{
		case sf::Event::TextEntered:
		{
			return true;
			break;
		}
			
		case sf::Event::KeyPressed:
		{
			return true;
			break;
		}
			
		case sf::Event::KeyReleased:
		{
			return true;
			break;
		}
			
		case sf::Event::MouseWheelMoved:
		{
			return true;
			break;
		}
		
		case sf::Event::MouseButtonPressed:
		{
			return true;
			break;
		}
		
		case sf::Event::MouseButtonReleased:
		{
			return true;
			break;
		}
		
		case sf::Event::MouseMoved:
		{
			printf("Mouse X: %d - Mouse Y: %d\n", _sfEvent.mouseMove.x, _sfEvent.mouseMove.y);
		
			return true;
			break;
		}
		
		case sf::Event::MouseEntered:
		{
			printf("The mouse has entered the window.\n");
			return true;
			break;
		}
		
		case sf::Event::MouseLeft:
		{
			printf("The mouse has left the window.\n");
			return true;
			break;
		}
		
		case sf::Event::JoystickButtonPressed:
		{
			printf("Joystick [%d] - Button Pressed: %d\n", _sfEvent.joystickConnect.joystickId, _sfEvent.joystickButton.button);
			return true;
			break;
		}
		
		case sf::Event::JoystickButtonReleased:
		{
			printf("Joystick [%d] - Button Released: %d\n", _sfEvent.joystickConnect.joystickId, _sfEvent.joystickButton.button);
			return true;
			break;
		}
		
		case sf::Event::JoystickMoved:
		{
		
			if(_sfEvent.joystickMove.axis == sf::Joystick::X)
			{
				printf("Joystick [%d] - X position: %f\n", _sfEvent.joystickMove.joystickId, _sfEvent.joystickMove.position);
			}
			
			if(_sfEvent.joystickMove.axis == sf::Joystick::Y)
			{
				printf("Joystick [%d] - Y position: %f\n", _sfEvent.joystickMove.joystickId, _sfEvent.joystickMove.position);
			}
			
			if(_sfEvent.joystickMove.axis == sf::Joystick::Z)
			{
				printf("Joystick [%d] - Z position: %f\n", _sfEvent.joystickMove.joystickId, _sfEvent.joystickMove.position);
			}
			
			if(_sfEvent.joystickMove.axis == sf::Joystick::R)
			{
				printf("Joystick [%d] - R position: %f\n", _sfEvent.joystickMove.joystickId, _sfEvent.joystickMove.position);
			}
			
			if(_sfEvent.joystickMove.axis == sf::Joystick::U)
			{
				printf("Joystick [%d] - U position: %f\n", _sfEvent.joystickMove.joystickId, _sfEvent.joystickMove.position);
			}
			
			if(_sfEvent.joystickMove.axis == sf::Joystick::V)
			{
				printf("Joystick [%d] - V position: %f\n", _sfEvent.joystickMove.joystickId, _sfEvent.joystickMove.position);
			}
			
			if(_sfEvent.joystickMove.axis == sf::Joystick::PovX)
			{
				printf("Joystick [%d] - PovX position: %f\n", _sfEvent.joystickMove.joystickId, _sfEvent.joystickMove.position);
			}
			
			if(_sfEvent.joystickMove.axis == sf::Joystick::PovY)
			{
				printf("Joystick [%d] - PovY position: %f\n", _sfEvent.joystickMove.joystickId, _sfEvent.joystickMove.position);
			}
		
			return true;
			break;
		}
		
		case sf::Event::JoystickConnected:
		{
			printf("Joystick connected: %d\n", _sfEvent.joystickConnect.joystickId);
			return true;
			break;
		}
		
		case sf::Event::JoystickDisconnected:
		{
			printf("Joystick disconnected: %d\n", _sfEvent.joystickConnect.joystickId);
			return true;
			break;
		}
			
		case sf::Event::Closed:
		case sf::Event::Resized:
		case sf::Event::LostFocus:
		case sf::Event::GainedFocus:
		default:
		{
			return false;
			break;
		}
	}
}