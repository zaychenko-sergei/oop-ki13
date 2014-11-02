// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "controller.hpp"

#include <cassert>

/*****************************************************************************/


Controller::Controller ()
{
	// TODO - any required initialization...
}


/*****************************************************************************/


Controller::~Controller ()
{
	// TODO - destroy the model...
}


/*****************************************************************************/


void 
Controller::createManualTeapot ( double _maxVolume, int _speed )
{
	// TODO - create manual teapot object
	//
	// Possible problems:
	//  - non-positive volume ( Messages::NonPositiveVolume )
	//  - non-positive speed ( Messages::NonPositiveSpeed )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void 
Controller::createAutomaticTeapot ( double _maxVolume, int _speed )
{
	// TODO - create automatic teapot object
	//
	// Possible problems:
	//  - non-positive volume ( Messages::NonPositiveVolume )
	//  - non-positive speed ( Messages::NonPositiveSpeed )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


double
Controller::addWater ( int _teapotIndex, double _volume )
{
	// TODO - add water to the teapot with specified index
	// Add at most maximum volume the teapot can contain
	// Return the volume that was actually added
	//
	// Possible problems:
	//  - non-positive volume ( Messages::NonPositiveVolume )
	//  - invalid teapot index ( Messages::WrongTeapotIndex )

	// TODO
	assert( ! "Not implemented yet..." );
	return 0.0;
}


/*****************************************************************************/


double
Controller::takeWater ( int _teapotINdex, double _volume )
{
	// TODO - take water from the teapot with specified index
	// Take at most maximum volume the teapot containsS
	// Return the volume that was actually taken
	//
	// Possible problems:
	//  - non-positive volume ( Messages::NonPositiveVolume )
	//  - invalid teapot index ( Messages::WrongTeapotIndex )

	assert( ! "Not implemented yet..." );
	return 0.0;
}


/*****************************************************************************/


void 
Controller::turnOnTeapot ( int _teapotIndex )
{
	// TODO - turn on the teapot or ignore if it is already turned on
	//
	// Possible problems:
	//  - invalid teapot index ( Messages::WrongTeapotIndex )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void 
Controller::turnOffTeapot ( int _teapotIndex )
{
	// TODO - turn off the teapot or ignore if it is already turned on
	//
	// Possible problems:
	//  - invalid teapot index ( Messages::WrongTeapotIndex )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


int 
Controller::getTeapotCurrentVolume ( int _teapotIndex ) const
{
	// TODO - return the volume of the water currently contained within the teapot
	//
	// Possible problems:
	//  - invalid teapot index ( Messages::WrongTeapotIndex )

	assert( ! "Not implemented yet..." );
	return 0;
}


/*****************************************************************************/


int 
Controller::getTeapotCurrentTemperature ( int _teapotIndex ) const
{
	// TODO - return the temperature of the water currently contained within the teapot
	//
	// Possible problems:
	//  - invalid teapot index ( Messages::WrongTeapotIndex )

	assert( ! "Not implemented yet..." );
	return 0;
}


/*****************************************************************************/


bool
Controller::isTeapotOn ( int _teapotIndex ) const
{
	// TODO - return the fact whether the teapot is turned on currently
	//
	// Possible problems:
	//  - invalid teapot index ( Messages::WrongTeapotIndex )

	assert( ! "Not implemented yet..." );
	return false;
}


/*****************************************************************************/


void 
Controller::wait ( int _nMinutes )
{
	// TODO - implement reaction of all teapots on time progress

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/
