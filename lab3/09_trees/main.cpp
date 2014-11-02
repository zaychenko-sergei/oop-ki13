// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "controller.hpp"
#include "messages.hpp"

#include <iostream>
#include <sstream>
#include <cassert>

/*****************************************************************************/


void runTest1 ()
{
	Controller controller;

	controller.startParentNode( "1. AAA" );
		controller.startParentNode( "1.1 BB" );
			controller.addLeafNode( "1.1.1 C" );
			controller.addLeafNode( "1.1.2 D" );
		controller.endParentNode();
		controller.startParentNode( "1.2 EE" );
			controller.addLeafNode( "1.2.1 F" );
		controller.endParentNode();
		controller.addLeafNode( "1.3 GG" );
	controller.endParentNode();

	std::stringstream o;
	controller.show( o );

	assert( o.str() == "1. AAA\n"
		               "\t1.1 BB\n"
				       "\t\t1.1.1 C\n"
				       "\t\t1.1.2 D\n"
				       "\t1.2 EE\n"
				       "\t\t1.2.1 F\n"
				       "\t1.3 GG\n" );

	assert( ! controller.isLeaf( Controller::NodePath( 1 ).pushIndex( 1 ) ) );
	assert(   controller.isLeaf( Controller::NodePath( 1 ).pushIndex( 3 ) ) );

	assert( controller.isVisible( Controller::NodePath( 1 ).pushIndex( 1 ) ) );
	controller.makeInvisible( Controller::NodePath( 1 ).pushIndex( 1 ) );
	assert( ! controller.isVisible( Controller::NodePath( 1 ).pushIndex( 1 ) ) );

	o.clear();
	controller.show( o );

	assert( o.str() == "1. AAA\n"
				       "\t1.2 EE\n"
				       "\t\t1.2.1 F\n"
				       "\t1.3 GG\n" );

	controller.makeVisible( Controller::NodePath( 1 ).pushIndex( 1 ) );
	controller.collapse( Controller::NodePath( 1 ).pushIndex( 2 ) );

	assert( o.str() == "1. AAA\n"
		               "\t1.1 BB\n"
				       "\t\t1.1.1 C\n"
				       "\t\t1.1.2 D\n"
				       "\t1.2 EE\n"
				       "\t1.3 GG\n" );

	assert(   controller.isExpanded( Controller::NodePath( 1 ).pushIndex( 1 ) ) );
	assert( ! controller.isExpanded( Controller::NodePath( 1 ).pushIndex( 2 ) ) );
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
