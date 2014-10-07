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
Application::printAllSportPrograms () const
{
	std::cout << "1. Sport programs" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/


void
Application::printChannelWithHighestAverageRating () const
{
	std::cout << "2. Channel with highest rating" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/


void
Application::printLongestProgram () const
{
	std::cout << "3. Longest program" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/


void
Application::printBestProgramChoiceFor ( int _dayOfWeek, int _hour ) const
{
	std::cout << "4. Best program choice" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
