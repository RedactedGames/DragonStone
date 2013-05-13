#ifndef  DRAGONSTONE_GAMEWINDOW_H_		// Check to see if this .h is defined
#define  DRAGONSTONE_GAMEWINDOW_H_		//  if not, define it

#include <SFML/Graphics.hpp>
#include <string>
#include "../Result.h"

class GameWindow
{
	private:
		sf::RenderWindow window;

	protected:
		int x;
		int y;
		unsigned int width;
		unsigned int height;
		int framerateLimit;
		bool focus;
		bool vsync;
		std::string title;

	public:
		GameWindow(void);
		~GameWindow(void);

		void initialize(void);	//#TODO: add params
		
		const bool isOpen(void) const { return this->window.isOpen(); }
		void close(void) { return this->window.close(); }
		void clear(void) { return this->window.clear(); }
		void display(void) { return this->window.display(); }
		bool pollEvent(sf::Event& _event) { return this->window.pollEvent(_event); }

		//Getters
		sf::RenderWindow* getWindow() { return &this->window; };
		const sf::Vector2u getSize() const { return this->window.getSize(); }
		
		const bool getFocus(void) const { return this->focus; }

		//Setters
		const DragonStone::RESULT setIcon(const std::string _iconPath);
		void setTitle(const std::string _title) { this->window.setTitle(_title); }
		
		void setFocus(const bool _focus) { this->focus = _focus; };
};

#endif //DRAGONSTONE_GAMEWINDOW_H_