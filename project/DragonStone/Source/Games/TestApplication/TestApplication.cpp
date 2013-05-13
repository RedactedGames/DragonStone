//
//  TestApplication.cpp
//  DragonStone
//
//  Created by Joseph Stuhr on 5/12/13.
//  Copyright (c) 2013 Redacted Games. All rights reserved.
//

#include "TestApplication.h"

TestApplication::TestApplication(void)
{
	
}

TestApplication::TestApplication(const TestApplication& _ref)
{
	
}

TestApplication& TestApplication::operator=(const TestApplication& _ref)
{
	return *this;
}

TestApplication::~TestApplication(void)
{
	
}

const bool TestApplication::Initalize(GameWindow& _gameWindow)
{
	this->gameWindow = &_gameWindow;
	
	this->gameWindow->setTitle("Test Application");
	
	return true;
}

const bool TestApplication::Shutdown(void)
{
	return true;
}

const bool TestApplication::pollEvent(sf::Event& _event)
{
	return true;
}

const bool TestApplication::Execute(const double _deltaTime)
{	
	this->Input(_deltaTime);
	
	this->Update(_deltaTime);
	
	this->Render(_deltaTime);
	return true;
}

const std::string TestApplication::toString(void) const
{
	return "Test Application";
}

const bool TestApplication::Input(const double _deltaTime)
{
	return true;
}

const bool TestApplication::Update(const double _deltaTime)
{
	return true;
}

const bool TestApplication::Render(const double _deltaTime)
{
	return true;
}