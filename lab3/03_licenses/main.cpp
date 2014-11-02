// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "controller.hpp"
#include "messages.hpp"
#include "date.hpp"

#include <iostream>
#include <cassert>

/*****************************************************************************/


void runTest1 ()
{
	Controller controller;

	controller.createProgram( "Office 2013", "Microsoft" );
	controller.createProgram( "VisualStudio 2013", "Microsoft" );
	controller.createProgram( "Abracadabra", "Big Bucks" );

	controller.createPerpetualLicense( "VisualStudio 2013", Date( "2013/06/01" ) );
	controller.createTimeBasedLicense( "Office 2013", Date( "2012/11/25" ), Date( "2015/11/25" ) );
	controller.createTokenBasedLicense( "Abracadabra", Date( "2013/01/01" ), 1 );

	controller.setCurrentDate( Date( "2014/26/10" ) );

	assert( controller.canUse( "Office 2013" ) );
	assert( controller.canUse( "Visual Studio 2013" ) );
	assert( controller.canUse( "Abracadabra" ) );

	controller.trackUse( "Abracadabra" );
	assert( ! controller.canUse( "Abracadabra" ) );

	controller.addLicenseTokens( "Abracadabra", 5 );
	assert( controller.canUse( "Abracadabra" ) );

	controller.setCurrentDate( "2015/12/20" );

	assert( ! controller.canUse( "Office 2013" ) );
	controller.prolongLicense( "Office 2013", "2016/11/25" );
	assert( controller.canUse( "Office 2013" ) );
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
