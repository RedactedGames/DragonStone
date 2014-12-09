/*
 * 0===========================================================================0
 * | Window.h                                                                  |
 * |  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |
 * |   Author        : Joseph Stuhr                                            |
 * |   E-mail        : JpDeathBlade@gmail.com                                  |
 * 0=====0===============================================================0=====0
 *       |                                                               |
 * 0=====0===============================================================0=====0
 * | Code Description:                                                         |
 * |  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |
 * |   Wrapper that controls the application window.                           |
 * 0=====0===============================================================0=====0
 *       |                                                               |
 * 0=====0===============================================================0=====0
 * | License:                                                                  |
 * |  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |
 * | DragonStone - Copyright (c) 2015 [Redacted] Games. All rights reserved.   |
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

#ifndef  DRAGONSTONE_WINDOW_H_		// Check to see if this .h is defined
#define  DRAGONSTONE_WINDOW_H_		//  if not, define it

#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include "../../Result.h"

class Window
{
	private:
		sf::RenderWindow* window;
		int x;
		int y;
		unsigned int width;
		unsigned int height;
		int framerateLimit;
		bool focus;
		bool vsync;
		std::string title;

	public:
		Window(void);
		Window(const Window& _ref);
		Window& operator=(const Window& _ref);
		~Window(void);

		void initialize(void);	//#TODO: add params
		void clear(void);
		void display(void);
		bool pollEvent(sf::Event& _event);

/*
 *      0======================================================================0
 *      | Getters                                                              |
 *      0======================================================================0
 */
		const int getX(void) const;
		const int getY(void) const;
		const sf::Vector2i getPosition(void) const;
		const unsigned int getWidth(void) const;
		const unsigned int getHeight(void) const;
		const sf::Vector2u getSize(void) const;
		const int getFramerateLimit(void) const;
		const bool hasFocus(void) const;
		const bool isVsync(void) const;
		const std::string getTitle(void) const;
		const bool isOpen(void) const;
		
		const sf::RenderWindow* getRenderWindow(void) const;

/*
 *      0======================================================================0
 *      | Setters                                                              |
 *      0======================================================================0
 */
		const DragonStone::RESULT setIcon(const std::string _iconPath);
		void setX(const int _x);
		void setY(const int _y);
		void setPosition(const sf::Vector2i _position);
		void setWidth(const unsigned int _width);
		void setHeight(const unsigned int _height);
		void setSize(const sf::Vector2u _size);
		void setFramerateLimit(const int _framerate);
		void setFocus(const bool _focus);
		void setVsync(const bool _vsync);
		void setTitle(const std::string _title);
		void setVisible(const bool _visible);
		void setMouseCursorVisible(const bool _visible);
		void setActive(const bool _active);
};

#endif //DRAGONSTONE_WINDOW_H_