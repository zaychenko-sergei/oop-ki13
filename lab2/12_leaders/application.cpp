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
Application::printLongestRunningCountryLeaders () const
{
	std::cout << "1. Longest running country leaders" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
	

void 
Application::printCaseWithBiggestPopulationPercentageGrowth () const
{
	std::cout << "2. Biggest population growth" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
		

void 
Application::printCountryWithMostFrequentLeaderChangesDuringLast ( int _nYears ) const
{
	std::cout << "3. Most frequent leader changes" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
			

void 
Application::printCurrentLeadersNotCalled ( const char * _leaderTitle )
{
	std::cout << "4. Leaders not called as " << _leaderTitle << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
	