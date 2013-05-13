#include "GameWindow.h"

GameWindow::GameWindow(void) : window(sf::VideoMode(800, 600), "Temp", sf::Style::Titlebar | sf::Style::Close)
{
	this->x = 0;
	this->y = 0;
	this->width = 800;
	this->height = 600;
	this->vsync = true;
	this->focus = true;
	this->framerateLimit = 60;
	this->title = "DragonStone";
}

GameWindow::~GameWindow(void)
{

}

void GameWindow::initialize(void)
{
	this->window.setPosition(sf::Vector2i(this->x, this->y));
	this->window.setSize(sf::Vector2u(this->width, this->height));
	this->window.setTitle(this->title);
	this->window.setVerticalSyncEnabled(this->vsync);
	this->window.setFramerateLimit(this->framerateLimit);
}

//Setters
const DragonStone::RESULT GameWindow::setIcon(const std::string _iconPath)
{
	sf::Image icon;
    if (!icon.loadFromFile(_iconPath)) {
        return DragonStone::ERROR_FAILEDTOLOADRESOURCE_ICON;
    }
	else
	{
		this->window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
		return DragonStone::OK;
	}
}