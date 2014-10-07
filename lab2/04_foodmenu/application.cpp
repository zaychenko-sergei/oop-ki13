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
Application::printMenuComponents () const
{
	std::cout << "1. Menu components" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/


void
Application::printMenuDailyEnergyRecommendtationPercentage ( double _energyRecommendation ) const
{
	std::cout << "2. Percentage of daily energy recommendation per menu" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/


void
Application::printProductWithMinimalFatHavingEnergyOver ( double _minEnergyLevel ) const
{
	std::cout << "3. Energetic product without much fat" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/


void
Application::printNameAndTotalWeightOfBiggestMenu () const
{
	std::cout << "4. Biggest menu" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
