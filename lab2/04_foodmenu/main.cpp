// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "application.hpp"

#include <iostream>

/*****************************************************************************/


int main ()
{
	try
	{
		Application theApp;
		
		theApp.generateTestModel();

		theApp.printMenuComponents();
		theApp.printMenuDailyEnergyRecommendtationPercentage();
		theApp.printProductWithMinimalFatHavingEnergyOver();
		theApp.printNameAndTotalWeightOfBiggestMenu();
	}
	catch ( const char * _s )
	{
		std::cerr << _s << std::endl;
		return -1;
	}

	return 0;
}


/*****************************************************************************/
