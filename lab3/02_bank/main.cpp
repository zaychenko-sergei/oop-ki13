// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "controller.hpp"
#include "messages.hpp"

#include <iostream>
#include <cassert>

/*****************************************************************************/


void runTest1 ()
{
	Controller controller;

	// Wasya: $1500 initially, no overdrat
	// Petya:  $100 initially, but with overdraft of max $300 allowed

	const int wasyaID = controller.createAccount( "Wasya", 1500 );
	const int petyaID = controller.createAccount( "Petya", 100, 300 );

	assert( controller.getBalance( wasyaID ) == 1500 );
	assert( controller.getBalance( petyaID ) == 100 );

	// Wasya: add $100, balance = $1600
	controller.deposit( wasyaID, 100.0 );
	assert( controller.getBalance( wasyaID ) == 1600 );

	// Petya: spend $250, balance = $50
	controller.withdraw( petyaID, 250 );
	assert( controller.getBalance( petyaID ) == 50 );

	try
	{
		// Wasya: try spending $2000, but fail
		controller.withdraw( wasyaID, 2000 );
		assert( ! "Exception must have been thrown!" );
	}
	catch ( const char * _s )
	{
		assert( ! strcmp( _s, Messages::OverdraftNotAllowed ) );
	}

	assert( controller.getBalance( wasyaID ) == 1600 );

	// Petya: try spending $200 and succeed, as overdraft limit is not yet reached, balance = -$150
	controller.withdraw( petyaID, 200 );
	assert( controller.getBalance( petyaID ) == -150 );

	try
	{
		// Petya: try spending $200 more and fail, as reached overdraft limit
		controller.withdraw( petyaID, 200 );
		assert( ! "Exception must have been thrown!" );
	}
	catch ( const char * _s )
	{
		assert( ! strcmp( _s, Messages::OverdraftExceeded ) );
	}

	assert( controller.getBalance( petyaID ) == -150 );


	// onPeriod: adds 1% to accounts with positive balance, -5% from accounts with negative balance
	controller.onPeriod();

	assert( controller.getBalance( wasyaID ) == 1616.00 );
	assert( controller.getBalance( petyaID ) == -157.50 );
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
