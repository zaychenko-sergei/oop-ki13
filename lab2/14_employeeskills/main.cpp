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

		theApp.printEmployeeBestSkill();
		theApp.printBestEmployeesHavingSkill( 3, "Databases" );
		theApp.printEldestEmployeeWithSkillAtLeast( "C++", 8 );
		theApp.printEmployeeWithBiggestTotalSkillPoints();
	}
	catch ( const char * _s )
	{
		std::cerr << _s << std::endl;
		return -1;
	}

	return 0;
}


/*****************************************************************************/
