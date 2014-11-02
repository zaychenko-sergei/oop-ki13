// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "controller.hpp"
#include "messages.hpp"
#include "constants.hpp"

#include <iostream>
#include <cassert>

/*****************************************************************************/


void runTest1 ()
{
	Controller controller;

	const int counterID    = 12345;
	const int standardID   = 23456;
	const int subsidizedID = 34567;

	controller.createCountedConsumer( counterID, "Ivanov", "Sumskaya, 1" );
	controller.createStandardConsumer( standardID, "Petrov", "Pushkinskaya 1", 3 );
	controller.createSubsidizedConsumer( subsidizedID, "Sidorov", "Lenina 1" );

	assert( controller.getTotalDebt( WaterPrice ) == 0.0 );

	controller.useWater( counterID, 5 );
	controller.useWater( standardID, 5 );
	controller.useWater( subsidizedID, 5 );

	assert( controller.getConsumerDebt( counterID, WaterPrice ) == WaterPrice * 5 );
	assert( controller.getConsumerDebt( standardID, WaterPrice ) == WaterPrice * 3 * StandardWaterConsumptionPerUser );
	assert( controller.getConsumerDebt( subsidizedID, WaterPrice ) == 0.0 );

	assert( controller.getTotalDebt( WaterPrice ) == ( controller.getConsumerDebt( counterID, WaterPrice ) +
		                                               controller.getConsumerDebt( standardID, WaterPrice ) ) );

	controller.trackConsumerPayment( counterID, 30.0 );
	assert( controller.getConsumerDebt( counterID, WaterPrice ) == WaterPrice * 5 - 30.0 );
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
