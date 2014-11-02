// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "controller.hpp"
#include "messages.hpp"
#include "energyprice.hpp"

#include <iostream>
#include <cassert>

/*****************************************************************************/


void runTest1 ()
{
	Controller controller;

	const int personID  = 132548;
	const int companyID = 513128;
	const int systemID  = 23;

	controller.createPersonConsumer( personID );
	controller.createOrganizationConsumer( companyID );
	controller.createSystemConsumer( systemID );

	assert( controller.getTotalDebt() == 0.0 );
	assert( controller.isConsumerBlocked( personID )  == false );
	assert( controller.isConsumerBlocked( companyID ) == false );
	assert( controller.isConsumerBlocked( systemID )  == false );

	controller.consume( personID, 150 );
	assert( controller.getConsumerDebt( personID ) == 150 * EnergyPrice_PersonalSmall );

	controller.consume( personID, 100 );
	const double personDebt = 200 * EnergyPrice_PersonalSmall + 50 * EnergyPrice_PersonalLarge;
	assert( controller.getConsumerDebt( personID ) == personDebt );

	controller.consume( companyID, 50000 );
	assert( ! controller.isConsumerBlocked( companyID ) );
	assert( controller.getConsumerDebt( companyID ) == 50000 * EnergyPrice_Corporate );

	controller.consume( companyID, 100 );
	assert( controller.isConsumerBlocked( companyID ) );
	assert( controller.getConsumerDebt( companyID ) == 50000 * EnergyPrice_Corporate );

	controller.consume( systemID, 100 );
	assert( ! controller.isConsumerBlocked( systemID ) );
	assert( controller.getConsumerDebt( systemID ) == 0.0 );

	assert( controller.getTotalDebt() == ( controller.getConsumerDebt( personID ) + controller.getConsumerDebt( companyID ) ) );

	controller.trackConsumerPayment( personID, 2.50 );
	assert( controller.getConsumerDebt( personID ) == ( personDebt - 2.50 ) );
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
