#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>

#ifdef SFML_DEBUG
	#define DS_DEBUG
#elif
	#define DS_RELEASE
#endif

#ifdef SFML_SYSTEM_WINDOWS
	#include "Platform_Windows/ResourcePath.h"
#endif

#ifdef SFML_SYSTEM_MACOS
	#include "Platform_OSX/ResourcePath.hpp"
#endif

#ifdef SFML_SYSTEM_LINUX
	#include "Platform_LINUX/ResourcePath.h"
#endif

#include "DS_Result.h"
#include "Window/GameWindow.h"

std::string gameName()
{
	return "DragonStone";
}

int main(int argc, char *argv[])
{
	//Load engine config file.
	//#TODO load engine config file.

	//Parse command line parameters.
	//#TODO parse command line parameters.

	GameWindow gameWindow;

	//Initalize the window with the default variables.
	gameWindow.initialize();

	//Create game variable, pass in window.
	//IGame game = new YourGameName(gameWindow);

	//Set game icon.
	//gameWindow.setIcon(game.getIconPath());

	//Store a pointer to the gameWindow to cut down function calls.
	sf::RenderWindow* window = gameWindow.getWindow();

	//Game Loop
	while(window->isOpen())
    {
		// Process events
        sf::Event event;
        while (window->pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed)
			{
                window->close();
            }

			//Send event to game.
			//game->pollEvent(event);
        }

		//Check for input.
		//game->Input(_deltaTime);

		//Update the game objects.
		//game->Update(_deltaTime);

		//Render the game.
		//{
        //	Clear screen
			window->clear();

			//game->Render(_deltaTime);

        //	Update the window
			window->display();
		//}
	}

	/*
	sf::RenderWindow* window = gameWindow.getWindow();

    // Set the Icon
    sf::Image icon;
    if (!icon.loadFromFile(resourcePath() + "Icons/icon.png")) {
        return EXIT_FAILURE;
    }
    window->setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());

    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile(resourcePath() + "Textures/cute_image.jpg")) {
        return EXIT_FAILURE;
    }
    sf::Sprite sprite(texture);

    // Create a graphical text to display
    sf::Font font;
    if (!font.loadFromFile(resourcePath() + "Fonts/sansation.ttf")) {
        return EXIT_FAILURE;
    }
    sf::Text text("This is text!", font, 50);
    text.setColor(sf::Color::Black);

    // Load a music to play
    sf::Music music;
    if (!music.openFromFile(resourcePath() + "Audio/nice_music.ogg")) {
        return EXIT_FAILURE;
    }

    // Play the music
    music.play();

    // Start the game loop
    while (window->isOpen())
    {
        // Process events
        sf::Event event;
        while (window->pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed) {
                window->close();
            }

            // Espace pressed : exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window->close();
            }
        }

        // Clear screen
        window->clear();

        // Draw the sprite
        window->draw(sprite);

        // Draw the string
        window->draw(text);

        // Update the window
        window->display();
    }

	*/
    
    return DS_OK;
}