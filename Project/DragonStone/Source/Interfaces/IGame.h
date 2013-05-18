#ifndef  DRAGONSTONE_IGAME_H_		// Check to see if this .h is defined
#define  DRAGONSTONE_IGAME_H_		//  if not, define it

#include "../Input/InputEvent.h"
#include "../Window/GameWindow.h"

namespace DragonStone
{
	class IGame
	{
		protected:
			GameWindow* gameWindow;

		public:
			IGame(void);
			IGame(const IGame& _ref);
			virtual IGame& operator=(const IGame& _ref);
			virtual ~IGame(void) = 0;
			
			virtual const bool Initalize(GameWindow& _gameWindow);
			virtual const bool Shutdown(void);
			virtual const bool pollInput(const DragonStone::InputEvent& _inputEvent);
			virtual const bool Execute(const double _deltaTime);
			virtual const std::string toString(void) const;
	};
}

#endif //DRAGONSTONE_IGAME_H_