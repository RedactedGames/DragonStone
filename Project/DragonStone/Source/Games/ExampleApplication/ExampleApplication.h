#ifndef  DRAGONSTONE_EXAMPLEAPPLICATION_H_		// Check to see if this .h is defined
#define  DRAGONSTONE_EXAMPLEAPPLICATION_H_		//  if not, define it

#include <string>
#include "../../Interfaces/IGame.h"

class ExampleApplication : public IGame
{
	public:
		ExampleApplication(void);
		ExampleApplication(const ExampleApplication& _ref);
		ExampleApplication& operator=(const ExampleApplication& _ref);
		~ExampleApplication(void);
		
		const bool Initalize(GameWindow& _gameWindow);
		const bool Shutdown(void);
		const bool pollEvent(sf::Event& _event);
		const bool Execute(const double _deltaTime);
		const std::string toString(void) const;
		
		const bool Input(const double _deltaTime);
		const bool Update(const double _deltaTime);
		const bool Render(const double _deltaTime);
};

#endif //DRAGONSTONE_EXAMPLEAPPLICATION_H_