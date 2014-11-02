// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "controller.hpp"

#include <iostream>
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


int 
Controller::createAccount (
		std::string const & _ownerName
	,	double _initialBalance
	,	double _overdraftLimit 
)
{
	// TODO - create and register a new account with specified parameters
	//
	// Possible problems:
	//  - owner name must be unique ( Messages::OwnerNameNotUnique )
	//  - initial balance must not be negative ( Messages::NegativeInitialBalance )
	//  - overdraft limit must not be negative ( Messages::NegativeOverdraft )
	assert( ! "Not implemented yet" );
	return -1;
}


/*****************************************************************************/


double 
Controller::getBalance ( int _accountID ) const
{
	// TODO - access the balance on the account with given ID
	//
	// Possible problems:
	//   - account ID is not known ( Messages::UnknownAccountID )
	assert( ! "Not implemented yet" );
	return 0.0;
}


/*****************************************************************************/


void
Controller::deposit ( int _accountID, double _amount )
{
	// TODO - put extra money on the account with given ID
	//
	// Possible problems:
	//   - account ID is not known ( Messages::UnknownAccountID )
	//   - negative or zero amount ( Messages::NonPositiveDeposit )
	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


void 
Controller::withdraw ( int _accountID, double _amount )
{
	// TODO - take given amount of money from the account with given ID
	//
	// Possible problems:
	//   - account ID is not known ( Messages::UnknownAccountID )
	//   - negative or zero amount ( Messages::NonPositiveWithdrawal )
	assert( ! "Not implemented yet" );
}



/*****************************************************************************/


void
Controller::onPeriod ()
{
	// TODO - add 1% to accounts, having positive balance, and -5% from accounts with negative balance
	assert( ! "Not implemented yet" );
}


/*****************************************************************************/
