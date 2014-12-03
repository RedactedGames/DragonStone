#include "GameWindow.h"

GameWindow::GameWindow(void)
{
	this->window = NULL;
	this->x = 0;
	this->y = 0;
	this->width = 800;
	this->height = 600;
	this->vsync = true;
	this->focus = true;
	this->framerateLimit = 60;
	this->title = "DragonStone";
}

GameWindow::GameWindow(const GameWindow& _ref)
{
	this->window = _ref.window;
	this->x = _ref.x;
	this->y = _ref.y;
	this->width = _ref.width;
	this->height = _ref.height;
	this->vsync = _ref.vsync;
	this->focus = _ref.focus;
	this->framerateLimit = _ref.framerateLimit;
	this->title = _ref.title;
}

GameWindow& GameWindow::operator=(const GameWindow& _ref)
{
	this->window = _ref.window;
	this->x = _ref.x;
	this->y = _ref.y;
	this->width = _ref.width;
	this->height = _ref.height;
	this->vsync = _ref.vsync;
	this->focus = _ref.focus;
	this->framerateLimit = _ref.framerateLimit;
	this->title = _ref.title;
	
	return *this;
}

GameWindow::~GameWindow(void)
{
	if(this->window)
	{
		this->window->close();
		delete this->window;
		this->window = NULL;
	}
}

void GameWindow::initialize(void)
{
	if(!this->window)
	{
		this->window = new sf::RenderWindow(sf::VideoMode(this->width, this->height),
			this->title, sf::Style::Titlebar | sf::Style::Close);
			
		this->window->setPosition(sf::Vector2i(this->x, this->y));
		this->window->setVerticalSyncEnabled(this->vsync);
		this->window->setFramerateLimit(this->framerateLimit);
	}
	else
	{
		//#TODO: Some error or something...
	}
}

void GameWindow::clear(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	this->window->clear();
}

void GameWindow::display(void)
{
	this->window->display();
}

bool GameWindow::pollEvent(sf::Event& _event)
{
	return this->window->pollEvent(_event);
}

/*
 * 0===========================================================================0
 * | Getters                                                                   |
 * 0===========================================================================0
 */
 
const int GameWindow::getX(void) const
{
	return this->x;
}

const int GameWindow::getY(void) const
{
	return this->y;
}

const sf::Vector2i GameWindow::getPosition(void) const
{
	return this->window->getPosition();
}

const unsigned int GameWindow::getWidth(void) const
{
	return this->width;
}

const unsigned int GameWindow::getHeight(void) const
{
	return this->height;
}

const sf::Vector2u GameWindow::getSize() const
{
	return this->window->getSize();
}

const int GameWindow::getFramerateLimit(void) const
{
	return this->framerateLimit;
}

const bool GameWindow::hasFocus(void) const
{
	return this->focus;
}

const bool GameWindow::isVsync(void) const
{
	return this->vsync;
}

const std::string GameWindow::getTitle(void) const
{
	return this->title;
}

const bool GameWindow::isOpen(void) const
{
	return this->window->isOpen();
}

const sf::RenderWindow* GameWindow::getWindow(void) const
{
	return this->window;
}

/*
 * 0===========================================================================0
 * | Setters                                                                   |
 * 0===========================================================================0
 */
const DragonStone::RESULT GameWindow::setIcon(const std::string _iconPath)
{
	sf::Image icon;
    if (!icon.loadFromFile(_iconPath)) {
        return DragonStone::ERROR_FAILEDTOLOADRESOURCE_ICON;
    }
	else
	{
		this->window->setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
		return DragonStone::OK;
	}
}

void GameWindow::setX(const int _x)
{
	this->x = _x;
	this->window->setPosition(sf::Vector2i(this->x, this->y));
}

void GameWindow::setY(const int _y)
{
	this->y = _y;
	this->window->setPosition(sf::Vector2i(this->x, this->y));
}

void GameWindow::setPosition(const sf::Vector2i _position)
{
	this->x = _position.x;
	this->y = _position.y;
	this->window->setPosition(_position);
}

void GameWindow::setWidth(const unsigned int _width)
{
	this->width = _width;
	this->window->setSize(sf::Vector2u(this->width, this->height));
}

void GameWindow::setHeight(const unsigned int _height)
{
	this->height = _height;
	this->window->setSize(sf::Vector2u(this->width, this->height));
}

void GameWindow::setSize(const sf::Vector2u _size)
{
	this->width = _size.x;
	this->height = _size.y;
	this->window->setSize(_size);
}

void GameWindow::setFramerateLimit(const int _framerate)
{
	this->framerateLimit = _framerate;
	this->window->setFramerateLimit(this->framerateLimit);
}

void GameWindow::setFocus(const bool _focus)
{
	this->focus = _focus;
}

void GameWindow::setVsync(const bool _vsync)
{
	this->vsync = _vsync;
	this->window->setVerticalSyncEnabled(this->vsync);
}

void GameWindow::setTitle(const std::string _title)
{
	this->title = _title;
	this->window->setTitle(_title);
}

void GameWindow::setVisible(const bool _visible)
{
	this->window->setVisible(_visible);
}

void GameWindow::setMouseCursorVisible(const bool _visible)
{
	this->window->setMouseCursorVisible(_visible);
}

void GameWindow::setActive(const bool _active)
{
	this->window->setActive(_active);
}