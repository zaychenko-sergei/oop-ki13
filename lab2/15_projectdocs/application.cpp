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
Application::printProjectStandardsUsed () const
{
	std::cout << "1. Standards used by projects" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
	

void 
Application::printProjectsWithAllNeededStandardDocumentsPresent () const
{
	std::cout << "2. Projects with all standard documents" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
		

void 
Application::printProjectsNotHavingStandardDocument ( const char * _standardName ) const
{
	std::cout << "3. Projects without standard document " << _standardName << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
			

void 
Application::printMostPopularStandard () const
{
	std::cout << "4. Most popular standard used in projects" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
	