#ifndef  DRAGONSTONE_TESTAPPLICATION_H_		// Check to see if this .h is defined
#define  DRAGONSTONE_TESTAPPLICATION_H_		//  if not, define it

#include <string>
#include "../../Interfaces/IGame.h"

class TestApplication : public IGame
{
	public:
		TestApplication(void);
		TestApplication(const TestApplication& _ref);
		TestApplication& operator=(const TestApplication& _ref);
		~TestApplication(void);
		
		const bool Initalize(GameWindow& _gameWindow);
		const bool Shutdown(void);
		const bool pollEvent(sf::Event& _event);
		const bool Execute(const double _deltaTime);
		const std::string toString(void) const;
		
		const bool Input(const double _deltaTime);
		const bool Update(const double _deltaTime);
		const bool Render(const double _deltaTime);
};

#endif //DRAGONSTONE_TESTAPPLICATION_H_