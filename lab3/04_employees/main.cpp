// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "controller.hpp"
#include "messages.hpp"

#include <iostream>
#include <cassert>

/*****************************************************************************/


void runTest1 ()
{
	Controller controller;

	controller.createManager( "Ivanov" ); // 2400 3466
	
	controller.createRegular( "Petrov", "senior" ); // 1200 1800
	controller.assignManager( "Petrov", "Ivanov" ); 

	controller.createRegular( "Sidorov", "middle", 200.00 ); // 1200 1700
	controller.assignManager( "Sidorov", "Ivanov" );

	controller.createManager( "Fedorov", 200.00 );   // 1200 1700
	controller.assignManager( "Fedorov", "Ivanov" );

	controller.createRegular( "Fedotov", "junior" ); // 500 750
	controller.assignManager( "Fedotov", "Fedorov" );

	controller.setBaseSalary( 1000.00 );

	assert( controller.getEmployeeSalary( "Ivanov"  ) == 2400 );
	assert( controller.getEmployeeSalary( "Petrov"  ) == 1200 );
	assert( controller.getEmployeeSalary( "Sidorov" ) == 1200 );
	assert( controller.getEmployeeSalary( "Fedorov" ) == 1200 );
	assert( controller.getEmployeeSalary( "Fedotov" ) ==  500 );

	assert( ( ( int ) controller.getTotalSalary( ) ) == 6500.0 );

	controller.setBaseSalary( 1500.00 );

	assert( controller.getEmployeeSalary( "Ivanov"  ) == 3456 );
	assert( controller.getEmployeeSalary( "Petrov"  ) == 1800 );
	assert( controller.getEmployeeSalary( "Sidorov" ) == 1700 );
	assert( controller.getEmployeeSalary( "Fedorov" ) == 1700 );
	assert( controller.getEmployeeSalary( "Fedotov" ) ==  750 );

	assert( ( ( int ) controller.getTotalSalary( ) ) == 9416 );

	assert( controller.getRichestEmployeeName() == "Ivanov" );

	assert( controller.getPoorestEmployeeName() == "Fedotov" );

	controller.fire( "Fedotov" );

	// After firing Fedotov, his manager has no job to do ...
	assert( controller.getEmployeeSalary( "Fedorov" ) == 0.0 );

	controller.promote( "Sidorov" );
	controller.changeBonus( "Sidorov", 0.0 );
	assert( controller.getEmployeeSalary( "Sidorov" ), 1800 );
}


/*****************************************************************************/


void runTest2 ()
{
	// TODO - prepare your own interesting test
}


/*****************************************************************************/


void runTest3 ()
{
	// TODO - prepare your own interesting test
}


/*****************************************************************************/


int main ()
{
	try
	{
		runTest1();
		runTest2();
		runTest3();
	}
	catch ( const char * _s )
	{
		std::cerr << _s << std::endl;
		return -1;
	}

	return 0;
}


/*****************************************************************************/
