#ifndef  DRAGONSTONE_GAMEWINDOW_H_		// Check to see if this .h is defined
#define  DRAGONSTONE_GAMEWINDOW_H_		//  if not, define it

#include <SFML/Graphics.hpp>
#include <string>
#include "../DS_Result.h"

class GameWindow
{
	private:
		sf::RenderWindow window;

	protected:
		sf::Int32 x;
		sf::Int32 y;
		sf::Uint32 width;
		sf::Uint32 height;
		sf::Int32 framerateLimit;
		bool vsync;
		std::string title;

	public:
		GameWindow(void);
		~GameWindow(void);

		void initialize(void);	//#TODO: add params

		//Getters
		sf::RenderWindow* getWindow() { return &this->window; };

		//Setters
		const DS_RESULT setIcon(const std::string _iconPath);	//#TODO: Return DS_RESULT
};

#endif //DRAGONSTONE_GAMEWINDOW_H_