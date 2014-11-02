// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "controller.hpp"
#include "messages.hpp"

#include <iostream>
#include <cassert>

/*****************************************************************************/


void runTest1 ()
{
	Controller controller;

	controller.createManualTeapot( 2500, 10 );
	controller.createAutomaticTeapot( 1700, 20 );

	assert( controller.getTeapotCurrentVolume( 0 ) == 0 );
	assert( controller.getTeapotCurrentVolume( 1 ) == 0 );
	assert( controller.isTeapotOn( 0 ) == false );
	assert( controller.isTeapotOn( 1 ) == false );
	assert( controller.getTeapotCurrentTemperature( 0 ) == 20 );
	assert( controller.getTeapotCurrentTemperature( 1 ) == 20 );

	controller.addWater( 0, 1000 );
	controller.addWater( 1, 800 );
	controller.turnOnTeapot( 0 );
	controller.turnOnTeapot( 1 );

	assert( controller.getTeapotCurrentVolume( 0 ) == 1000 );
	assert( controller.getTeapotCurrentVolume( 1 ) == 800 );
	assert( controller.isTeapotOn( 0 ) == true );
	assert( controller.isTeapotOn( 1 ) == true );
	assert( controller.getTeapotCurrentTemperature( 0 ) == 20 );
	assert( controller.getTeapotCurrentTemperature( 1 ) == 20 );

	controller.wait( 3 );

	assert( controller.getTeapotCurrentVolume( 0 ) == 1000 );
	assert( controller.getTeapotCurrentVolume( 1 ) == 800 );
	assert( controller.isTeapotOn( 0 ) == true );
	assert( controller.isTeapotOn( 1 ) == true );
	assert( controller.getTeapotCurrentTemperature( 0 ) == 50 );
	assert( controller.getTeapotCurrentTemperature( 1 ) == 80 );

	controller.wait( 1 );

	assert( controller.getTeapotCurrentVolume( 0 ) == 1000 );
	assert( controller.getTeapotCurrentVolume( 1 ) == 800 );
	assert( controller.isTeapotOn( 0 ) == true );
	assert( controller.isTeapotOn( 1 ) == false );
	assert( controller.getTeapotCurrentTemperature( 0 ) == 60 );
	assert( controller.getTeapotCurrentTemperature( 1 ) == 100 );

	controller.wait( 4 );

	assert( controller.getTeapotCurrentVolume( 0 ) == 1000 );
	assert( controller.getTeapotCurrentVolume( 1 ) == 800 );
	assert( controller.isTeapotOn( 0 ) == true );
	assert( controller.isTeapotOn( 1 ) == false );
	assert( controller.getTeapotCurrentTemperature( 0 ) == 100 );
	assert( controller.getTeapotCurrentTemperature( 1 ) == 92 );

	controller.wait( 1 );

	assert( controller.getTeapotCurrentVolume( 0 ) == 950 );
	assert( controller.getTeapotCurrentVolume( 1 ) == 800 );
	assert( controller.isTeapotOn( 0 ) == true );
	assert( controller.isTeapotOn( 1 ) == false );
	assert( controller.getTeapotCurrentTemperature( 0 ) == 100 );
	assert( controller.getTeapotCurrentTemperature( 1 ) == 90 );

	controller.turnOffTeapot( 0 );
	controller.takeWater( 0, 250 );

	assert( controller.getTeapotCurrentVolume( 0 ) == 700 );
	assert( controller.getTeapotCurrentVolume( 1 ) == 800 );
	assert( controller.isTeapotOn( 0 ) == false );
	assert( controller.isTeapotOn( 1 ) == false );
	assert( controller.getTeapotCurrentTemperature( 0 ) == 100 );
	assert( controller.getTeapotCurrentTemperature( 1 ) == 90 );
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
