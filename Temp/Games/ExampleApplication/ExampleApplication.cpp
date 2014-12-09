//
//  TestApplication.cpp
//  DragonStone
//
//  Created by Joseph Stuhr on 5/12/13.
//  Copyright (c) 2013 [Redacted] Games. All rights reserved.
//

#include "ExampleApplication.h"

ExampleApplication::ExampleApplication(void)
{
	
}

ExampleApplication::ExampleApplication(const ExampleApplication& _ref)
{
	
}

ExampleApplication& ExampleApplication::operator=(const ExampleApplication& _ref)
{
	return *this;
}

ExampleApplication::~ExampleApplication(void)
{
	
}

const bool ExampleApplication::Initalize(GameWindow* _gameWindow)
{
	this->gameWindow = _gameWindow;
	this->gameWindow->setTitle("Test Application");
	
	return true;
}

const bool ExampleApplication::Shutdown(void)
{
	return true;
}

const bool ExampleApplication::Execute(const double _deltaTime)
{	
	this->Update(_deltaTime);
	
	this->Render(_deltaTime);
	return true;
}

const std::string ExampleApplication::toString(void) const
{
	return "Test Application";
}

const bool ExampleApplication::Update(const double _deltaTime)
{
	return true;
}

const bool ExampleApplication::Render(const double _deltaTime)
{
	return true;
}