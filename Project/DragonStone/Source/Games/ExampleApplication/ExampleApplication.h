#ifndef  DRAGONSTONE_EXAMPLEAPPLICATION_H_		// Check to see if this .h is defined
#define  DRAGONSTONE_EXAMPLEAPPLICATION_H_		//  if not, define it

#include "../../Interfaces/IGame.h"

class ExampleApplication : public DragonStone::IGame
{
	public:
		ExampleApplication(void);
		ExampleApplication(const ExampleApplication& _ref);
		ExampleApplication& operator=(const ExampleApplication& _ref);
		~ExampleApplication(void);
		
		const bool Initalize(GameWindow& _gameWindow);
		const bool Shutdown(void);
		const bool pollInput(const DragonStone::InputEvent& _inputEvent);
		const bool Execute(const double _deltaTime);
		const std::string toString(void) const;
		
		const bool Update(const double _deltaTime);
		const bool Render(const double _deltaTime);
};

#endif //DRAGONSTONE_EXAMPLEAPPLICATION_H_