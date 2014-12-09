/*
 * 0===========================================================================0
 * | IGame.cpp                                                                 |
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

const bool DragonStone::IGame::Initalize(GameWindow* _gameWindow)
{
	return false;
}

const bool DragonStone::IGame::Shutdown(void)
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