// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "controller.hpp"
#include "messages.hpp"

#include <iostream>
#include <cassert>

/*****************************************************************************/


void runTest1 ()
{
	Controller controller;

	controller.addBook( "AAA", std::vector< std::string >( 1, "Author 1" ), "en", 2000 );
	controller.addRevised( "AAA", 1, 2, 2005 );
	controller.addTranslation( "le AAA", "AAA", "fr", 2012 );

	controller.addBook( "BBB", std::vector< std::string >( 1, "Author 2" ), "en", 2002 );
	controller.addRevised( "BBB", 1, 2, 2007 );
	controller.addTranslation( "la BBB", "BBB", "it", 2008 );

	controller.addBook( "CCC", std::vector< std::string >( 1, "Author 3" ), "en", 2002 );
	controller.addRevised( "CCC", 1, 2, 2005 );

	controller.addBook( "DDD", std::vector< std::string >( 1, "Author 4" ), "en", 2004 );
	controller.addTranslation( "das DDD", "DDD", "de", 2009 );

	controller.addBook( "EEE", std::vector< std::string >( 1, "Author 5" ), "en", 2007 );

	std::set< std::string > result = controller.fetchBooksBothTranslatedRevised();
	assert( result.size() == 2 );
	assert( result.find( "AAA" ) != result.end() );
	assert( result.find( "BBB" ) != result.end() );

	result = controller.fetchAuthorsNotBeingTranslated();
	assert( result.size() == 2 );
	assert( result.find( "Author 3" ) != result.end() );
	assert( result.find( "Author 5" ) != result.end() );
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
