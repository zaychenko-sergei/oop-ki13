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
Application::printModel () const
{
	std::cout << "1. Model report" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/


void
Application::printMostFrequentModeratorName () const
{
	std::cout << "2. Most frequent moderator" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}



/*****************************************************************************/


void
Application::printMeetingWithLongestAgenda () const
{
	std::cout << "3. Meeting with longest agenda" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}



/*****************************************************************************/


void
Application::printOverlaps () const
{
	std::cout << "4. Overlaps" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}



/*****************************************************************************/
