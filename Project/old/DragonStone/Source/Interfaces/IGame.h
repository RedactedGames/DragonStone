/*
 * 0===========================================================================0
 * | IGame.h                                                                   |
 * |  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |
 * |   Author        : Joseph Stuhr                                            |
 * |   E-mail        : JpDeathBlade@gmail.com                                  |
 * 0=====0===============================================================0=====0
 *       |                                                               |
 * 0=====0===============================================================0=====0
 * | Code Description:                                                         |
 * |  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |
 * |   Interface for a Game object.                                            |
 * 0=====0===============================================================0=====0
 *       |                                                               |
 * 0=====0===============================================================0=====0
 * | License:                                                                  |
 * |  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |
 * | DragonStone - Copyright (c) 2013 [Redacted] Games. All rights reserved.   |
 * |                                                                           |
 * | This software is provided 'as-is', without any express or implied warranty|
 * | In no event will the authors be held liable for any damages arising from  |
 * | the use of this software.                                                 |
 * |                                                                           |
 * | Permission is granted to anyone to use this software for any purpose,     |
 * | including commercial applications, and to alter it and redistribute it    |
 * | freely, subject to the following restrictions:                            |
 * |                                                                           |
 * | 1. The origin of this software must not be misrepresented; you must not   |
 * |  claim that you wrote the original software. If you use this software in  |
 * |  a product, an acknowledgment in the product documentation would be       |
 * |  appreciated but is not required.                                         |
 * |                                                                           |
 * | 2. Altered source versions must be plainly marked as such, and must not   |
 * |  be misrepresented as being the original software.                        |
 * |                                                                           |
 * | 3. This notice may not be removed or altered from any source distribution.|
 * 0===========================================================================0
 */

#ifndef  DRAGONSTONE_IGAME_H_		// Check to see if this .h is defined
#define  DRAGONSTONE_IGAME_H_		//  if not, define it

/* 0===========================================================================0
 * | Includes                                                                  |
 * 0===========================================================================0
 */
#include "../Window/GameWindow.h"

/* 0===========================================================================0
 * | Namespace                                                                 |
 * 0===========================================================================0
 */
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
			
			virtual const bool Initalize(GameWindow* _gameWindow);
			virtual const bool Shutdown(void);
			virtual const bool Execute(const double _deltaTime);
			virtual const std::string toString(void) const;
	};
}

#endif //DRAGONSTONE_IGAME_H_