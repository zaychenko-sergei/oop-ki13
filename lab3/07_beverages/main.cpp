// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "controller.hpp"
#include "messages.hpp"

#include <iostream>
#include <cassert>

/*****************************************************************************/


void runTest1 ()
{
	Controller controller;

	controller.createCustomer( "Ivan",  30, 20.0 );
	controller.createCustomer( "Petr",  28,  0.0 );
	controller.createCustomer( "Sidor", 16, 11.0 );
	controller.createCustomer( "Fedor", 25, 100.0 );

	controller.makeCustomerAllergicTo( "Fedor", "Orange" );

	controller.createJuice( "Apple juice", 1000, 10.25, "Apple" );
	controller.createJuice( "Orange juice", 1000, 10.25, "Orange" );
	controller.createBeer( "Low-Quality Beer", 500, 5.00 );
	controller.createBeer( "High-Quality Beer", 500, 25.00 );
	controller.createPoison( "Black Shaitan", 700, 15.00 );

	assert( controller.getMainIngredient( "Apple juice" ) == "Apple" );
	assert( controller.getMainIngredient( "Orange juice" ) == "Orange" );
	assert( controller.getMainIngredient( "Low-Quality Beer" ) == "Corn" );
	assert( controller.getMainIngredient( "High-Quality Beer" ) == "Corn" );
	assert( controller.getMainIngredient( "Black Shaitan" ) == "Technical alcohol" );

	assert( controller.trySelling( "Ivan", "High-Quality-Beer" ) == false ); // not enough money
	assert( controller.getCustomerBalance( "Ivan" ) == 20.0 );

	assert( controller.trySelling( "Ivan", "Low-Quality-Beer" ) == true );
	assert( controller.getCustomerBalance( "Ivan" ) == 15.0 );

	assert( controller.trySelling( "Petr", "Apple juice" ) == false ); // not enough money
	assert( controller.getCustomerBalance( "Petr" ) == 0.0 );

	assert( controller.trySelling( "Sidor", "Low-Quality-Beer" ) == false ); // too young
	assert( controller.getCustomerBalance( "Sidor" ) == 11 );
	assert( controller.trySelling( "Sidor", "Apple juice" ) == true );
	assert( controller.getCustomerBalance( "Sidor" ) == 0.75 );


	assert( controller.trySelling( "Fedor", "Orange Juice" ) == false ); // alergic to oranges
	assert( controller.getCustomerBalance( "Fedor" ) == 100 );
	assert( controller.trySelling( "Fedor", "Black Shaitan" ) == false ); // don't drink this stuff
	assert( controller.getCustomerBalance( "Fedor" ) == 100 );
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
