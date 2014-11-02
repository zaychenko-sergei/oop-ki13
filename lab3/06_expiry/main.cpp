// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "controller.hpp"
#include "messages.hpp"

#include <iostream>
#include <cassert>

/*****************************************************************************/


void runTest1 ()
{
	Controller controller;

	// Note: ok to change the dates
	controller.setCurrentDate( Date( "2014/11/01" ) );

	int cheeseID = controller.createConsignment( "Cheese", 20.0, "2014/11/01", 50.0, "slow", 100 );
	int vodkaID  = controller.createConsignment( "Vodka",  50.0, "2014/06/01", 35.0, "never" );
	int saladID  = controller.createConsignment( "Green Salad", 10.0, "2014/11/01", 5.0, "quick", 2 );

	assert( controller.getTotalFreshCost() == 20.0 * 50.0 + 50.0 * 35.0 + 10.0 * 5.0 );
	assert( controller.getConsignmentFreshCost( cheeseID ) == 20.0 * 50.0 );
	assert( controller.getConsignmentFreshCost( vodkaID )  == 50.0 * 35.0 );
	assert( controller.getConsignmentFreshCost( saladID )  == 10.0 *  5.0 );
	assert( controller.getTotalExpiredCost() == 0.0 );

	assert( controller.getRemainingAmount( cheeseID ) == 20.0 );
	assert( controller.getRemainingAmount( vodkaID )  == 50.0 );
	assert( controller.getRemainingAmount( saladID )  == 10.0 );

	controller.sell( cheeseID, 0.5 );
	controller.sell( saladID, 0.25 );

	assert( controller.getRemainingAmount( cheeseID ) == 19.5  );
	assert( controller.getRemainingAmount( vodkaID )  == 50.0  );
	assert( controller.getRemainingAmount( saladID )  ==  9.75 );

	assert( ! controller.isExpired( saladID ) );
	assert( ! controller.isExpired( cheeseID ) );
	assert( ! controller.isExpired( vodkaID ) );

	assert( controller.getTotalFreshCost() == 19.5 * 50.0 + 50.0 * 35.0 + 9.75 * 5.0 );
	assert( controller.getConsignmentFreshCost( cheeseID ) == 19.50 * 50.0 );
	assert( controller.getConsignmentFreshCost( vodkaID )  == 50.00 * 35.0 );
	assert( controller.getConsignmentFreshCost( saladID )  ==  9.75 *  5.0 );
	assert( controller.getTotalExpiredCost() == 0.0 );

	// Salad should expire
	controller.setCurrentDate( Date( "2014/11/05" ) );
	
	assert( controller.isExpired( saladID ) );
	assert( ! controller.isExpired( cheeseID ) );
	assert( ! controller.isExpired( vodkaID ) );

	assert( controller.getTotalExpiredCost() == 9.75 * 5.0 );
	assert( controller.getConsignmentExpiredCost( saladID ) == 9.75 * 5.0 );
	assert( controller.getTotalFreshCost() == 19.5 * 50.0 * 0.95 + 50.0 * 35.0 ); // cheese * 0.95 is due to 5 days of 100
	assert( controller.getConsignmentFreshCost( cheeseID ) == 19.50 * 50.0 * 0.95 );
	assert( controller.getConsignmentFreshCost( vodkaID )  == 50.00 * 35.0 );

	// Cheese dhould expire
	controller.setCurrentDate( "2015/05/01" );
	assert( controller.getTotalExpiredCost() == 9.75 * 5.0 + 19.5 * 50.0 );
	assert( controller.getConsignmentExpiredCost( saladID ) == 9.75 * 5.0 );
	assert( controller.getConsignmentExpiredCost( cheeseID ) == 19.5 * 50.0 );
	assert( controller.getTotalFreshCost() == 50.0 * 35.0 );
	assert( controller.getConsignmentFreshCost( vodkaID )  == 50.00 * 35.0 );

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
