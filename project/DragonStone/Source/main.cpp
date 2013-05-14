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

int main(int argc, char *argv[])
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
	
	// Load a music to play
    sf::Music music;
    if (!music.openFromFile(resourcePath() + "Audio/nice_music.ogg")) {
        return EXIT_FAILURE;
    }
	
    // Play the music
    music.play();
	
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
    
    return DragonStone::OK;
}