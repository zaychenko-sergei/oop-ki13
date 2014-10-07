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

		theApp.printLongestRunningCountryLeaders();
		theApp.printCaseWithBiggestPopulationPercentageGrowth();
		theApp.printCountryWithMostFrequentLeaderChangesDuringLast( 50 );
		theApp.printCurrentLeadersNotCalled( "President" );
	}
	catch ( const char * _s )
	{
		std::cerr << _s << std::endl;
		return -1;
	}

	return 0;
}


/*****************************************************************************/
