// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "controller.hpp"

#include <iostream>
#include <cassert>

/*****************************************************************************/


Controller::Controller ()
{
	// TODO - any required initialization...
	// Use system's current date as the default date
}


/*****************************************************************************/


Controller::~Controller ()
{
	// TODO - destroy the model...
}


/*****************************************************************************/


void 
Controller::createProgram ( std::string const & _name, std::string const & _vendorName )
{
	// TODO - create the program object
	// Name must be unique, otherwise generate Messages::ProgramNameNotUnique
	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


void 
Controller::createPerpetualLicense ( std::string const & _programName, const Date & _issued )
{
	// TODO - create perpetual license for the given program
	// Possible errors:
	//  - program was not registered ( Messages::ProgramNotRegitered )
	//  - program already has a license ( Messages::DuplicateLicense )
	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


void
Controller::createTimeBasedLicense ( std::string const & _programName, const Date & _issued, const Date & _expires )
{
	// TODO - create time-based license for the given program
	// Possible errors:
	//  - program was not registered ( Messages::ProgramNotRegitered )
	//  - program already has a license ( Messages::DuplicateLicense )
	//  - expiry time is earlier or equal to issuing time ( Messages::ExpiryNotAfterIssued )
	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


void 
Controller::createTokenBasedLicense ( std::string const & _programName, const Date & _issued, int _nTokens )
{
	// TODO - create token-based license for the given program
	// Possible errors:
	//  - program was not registered ( Messages::ProgramNotRegitered )
	//  - program already has a license ( Messages::DuplicateLicense )
	//  - tokens must be positive ( Messages::NonPositiveTokens )
	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


bool 
Controller::canUse ( std::string const & _programName ) const
{
	// TODO - check if user is allowed to use the program
	// Possible errors:
	//  - program was not registered ( Messages::ProgramNotRegitered )
	assert( ! "Not implemented yet" );
	return false;
}


/*****************************************************************************/


void
Controller::trackUse ( std::string const & _programName )
{
	// TODO - record use of the program.
	// In case of token-based license decrease the number of tokens left
	//
	// Possible errors:
	// 	- program was not registered ( Messages::ProgramNotRegitered )
	//  - missing valid license ( Messages::NoValidLicense )
	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


void 
Controller::prolongLicense ( std::string const & _programName, const Date & _newExpires )
{
	// TODO - shift the expiry date of the time-based license
	//
	// Possible errors:
	//  - program was not registered ( Messages::ProgramNotRegitered )
	//  - license is not time-based ( Messages::ProlongingNonTimeBasedLicense )
	//  - new expiry date is older than previous ( Messages::ProlongingToEarlierDate )
	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


void
Controller::addLicenseTokens ( std::string const & _programName, int _nTokens )
{
	// TODO - add extra tokens to a token-based license
	//
	// Possible errors:
	//  - program was not registered ( Messages::ProgramNotRegitered )
	//  - tokens must be positive ( Messages::NonPositiveTokens )
	//  - license is not token-based ( Messages::AddingTokensToNonTokenLicense )
	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


void 
Controller::setCurrentDate ( Date _today )
{
	// TODO - remember this date as if it was current
	assert( ! "Not implemented yet" );
}


/*****************************************************************************/

