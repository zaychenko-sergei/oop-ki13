// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "controller.hpp"
#include "messages.hpp"

#include <iostream>
#include <cassert>

/*****************************************************************************/


void runTest1 ()
{
	Controller controller;

	controller.createOwner( "Ivanov" );
	controller.addRealEstate( "Ivanov", "Villa", "Ideal", 1000000.0 );
	controller.addVehicle( "Ivanov", "Mers", 2012, false, 120000.0 );

	controller.createOwner( "Petrov" );
	controller.addRealEstate( "Petrov", "Lachuga", "Capital_Repairs", 25000.0 );
	controller.addVehicle( "Petrov", "Lada", 2014, true, 5000.0 );

	// Assuming we live in 2014, otherwise add more multiplicants to vehicle cost

	assert( controller.getAssetValue( "Ivanov", "Villa" ) == 1000000.0 );
	assert( controller.getAssetValue( "Ivanov", "Mers"  ) == 120000.0 * 0.85 * 0.85 );
	assert( controller.getOwnerAssetsValue( "Ivanov" ) == ( 1000000.0 + 120000.0 * 0.85 * 0.85 ) );

	assert( controller.getAssetValue( "Petrov", "Lachuga" ) == 25000 * 0.7 );
	assert( controller.getAssetValue( "Petrov", "Lada" ) == 5000 * 0.5 );
	assert( controller.getOwnerAssetsValue( "Petrov" ) == ( 25000.0 * 0.7 + 5000 * 0.5 ) );

	controller.repair( "Petrov", "Lada" );
	assert( controller.getAssetValue( "Petrov", "Lada" ) == 5000 );
	assert( controller.getOwnerAssetsValue( "Petrov" ) == ( 25000.0 * 0.7 + 5000 ) );

	controller.repair( "Petrov", "Lachuga" );
	assert( controller.getAssetValue( "Petrov", "Lachuga" ) == 25000.0 * 0.85 );
	assert( controller.getOwnerAssetsValue( "Petrov" ) == ( 25000.0 * 0.85 + 5000 ) );

	controller.damage( "Ivanov", "Mers" );
	assert( controller.getAssetValue( "Ivanov", "Mers"  ) == 120000.0 * 0.5 * 0.85 * 0.85 );
	assert( controller.getOwnerAssetsValue( "Ivanov" ) == ( 1000000.0 + 120000.0 * 0.5 * 0.85 * 0.85 ) );
		
	controller.damage( "Ivanov", "Villa" );
	assert( controller.getAssetValue( "Ivanov", "Villa"  ) == 1000000.0 * 0.85 );
	assert( controller.getOwnerAssetsValue( "Ivanov" ) == ( 1000000.0 * 0.85 + 120000.0 * 0.5 * 0.85 * 0.85 ) );

	controller.sellExternally( "Ivanov", "Mers" );
	assert( controller.getOwnerAssetsValue( "Ivanov" ) == ( 1000000.0 * 0.85 ) );

	controller.changeOwner( "Petrov", "Lada", "Ivanov" );
	assert( controller.getOwnerAssetsValue( "Petrov" ) == ( 25000.0 * 0.85 ) );
	assert( controller.getOwnerAssetsValue( "Ivanov" ) == ( 1000000.0 * 0.85 + 5000 ) );
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
