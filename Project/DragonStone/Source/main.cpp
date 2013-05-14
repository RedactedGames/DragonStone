/*
 * 0===========================================================================0
 * | main.cpp                                                                  |
 * |  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |
 * |   Author        : Joseph Stuhr                                            |
 * |   E-mail        : JpDeathBlade@gmail.com                                  |
 * 0=====0===============================================================0=====0
 *       |                                                               |
 * 0=====0===============================================================0=====0
 * | Code Description:                                                         |
 * |  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |
 * |   The main entry point of the application.                                |
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
 
/* 0===========================================================================0
 * | Includes                                                                  |
 * 0===========================================================================0
 */
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include "Config.h"
#include "Result.h"
#include "Window/GameWindow.h"
#include "Games/TestApplication/TestApplication.h"

#ifdef DS_PLATFORM_WINDOWS
	#include "Platform_Windows/ResourcePath.h"
#endif
#ifdef DS_PLATFORM_MACOS
	#include "Platform_OSX/ResourcePath.hpp"
#endif
#ifdef DS_PLATFORM_LINUX
	#include "Platform_LINUX/ResourcePath.h"
#endif


int main(int _argc, char* _argv[])
{
	//Load engine config file.
	//#TODO load engine config file.

	//Parse command line parameters.
	//#TODO parse command line parameters.

	//Create the game window.
	GameWindow gameWindow;

	//Initalize the window with the default variables.
	gameWindow.initialize();

	//Create game variable.
	IGame* game = new TestApplication();
	
	//Initalize game, pass in window.
	game->Initalize(gameWindow);

	double deltaTime = 0.0;
	
	//Game Loop
	bool running = true;
	while(running)
	{
		gameWindow.clear();
		
		// Process events
		sf::Event event;
		while (gameWindow.pollEvent(event))
		{
			switch(event.type)
			{
				case sf::Event::Closed:
				{
					game->Shutdown();
					running = false;
					break;
				}
				
				case sf::Event::Resized:
				{
					//event.size.width;
					//event.size.height;
					break;
				}
				
				case sf::Event::LostFocus:
				{
					gameWindow.setFocus(false);
					break;
				}
				
				case sf::Event::GainedFocus:
				{
					gameWindow.setFocus(true);
					break;
				}
				
				default:
				{
					//#TODO: Input Manager
					game->pollEvent(event);
					break;
				}
			}
		}
		
		game->Execute(deltaTime);
		gameWindow.display();
	}
    
    return DragonStone::OK;
}