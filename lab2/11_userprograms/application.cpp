// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "application.hpp"

#include <iostream>

/*****************************************************************************/


Application::Application ()
{
	// TODO - any required initialization...
}


/*****************************************************************************/


Application::~Application ()
{
	// TODO - destroy the model...
}


/*****************************************************************************/


void
Application::generateTestModel ()
{
	// TODO - Generate test model objects here and attach them to application...
}


/*****************************************************************************/
	

void 
Application::printUsersPreferringBrowser ( const char * _browserName ) const
{
	std::cout << "1. Users preferring selected browser" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
	

void 
Application::printUsersCountWithBrowserAndOffice ( const char * _browserName, const char* _officeName ) const
{
	std::cout << "2. Users preferring selected browser and selected office program" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
	

void 
Application::printUsersPreferringOlderOfficeVersion () const
{
	std::cout << "3. Users preferring older office version" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}

	
/*****************************************************************************/
	

void 
Application::printProgramsWithoutPreferences () const
{
	std::cout << "4. Programs that nobody likes" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
	