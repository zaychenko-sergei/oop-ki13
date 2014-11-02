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


int 
Controller::createConsignment (
		std::string const & _productName
	,	double _initialAmount
	,	Date const & _date
	,	double _price
	,	const char * _expiryTypeCode
	,	int _expiresInDays
)
{
	// TODO - create and register consignment object.
	// Assign an ID and return it
	//
	// Possible problems:
	//   - non-positve amount ( Messages::NonPositiveAmount )
	//   - non-positive price ( Messages::NonPositivePrice )
	//   - expiry type unrecognized ( Messages::ExpiryTypeCodeIncorrect )
	//   - expiry days not positive ( Messages::NonPositiveExpiryDays )

	assert( ! "Not implemented yet..." );
	return -1;
}


/*****************************************************************************/


double 
Controller::getTotalFreshCost () const
{
	// TODO - return total cost of current non-expired consignments

	assert( ! "Not implemented yet..." );
	return 0.0;
}


/*****************************************************************************/


double 
Controller::getConsignmentFreshCost ( int _consignmentID ) const
{
	// TODO - return cost of the consignment with given ID, if it hasn't expired, 0 otherwise
	//
	// Possible problems: consignment ID is not unknown ( Messages::ConsignmentIDNotKnown )

	assert( ! "Not implemented yet..." );
	return 0.0;
}


/*****************************************************************************/



double
Controller::getTotalExpiredCost () const
{
	// TODO - calculate total cost of expired consignments

	assert( ! "Not implemented yet..." );
	return 0.0;
}


/*****************************************************************************/


double 
Controller::getConsignmentExpiredCost ( int _consignmentID ) const
{
	// TODO - return cost of the consignment with given ID, assuming it has already expired, 0 otherwise
	//
	// Possible problems: consignment ID is not unknown ( Messages::ConsignmentIDNotKnown )

	assert( ! "Not implemented yet..." );
	return 0.0;
}


/*****************************************************************************/


double 
Controller::sell ( int _consignmentID, double _amount )
{
	// TODO - sell specified amount from consignment with given ID.
	// Return amount that was actually sold ( may be less or equal to requested amount )
	//
	// Possible problems: 
	//  - consignment ID is not unknown ( Messages::ConsignmentIDNotKnown )
	//  - negative amount ( Messages::NonPositiveAmount )
	//  - cannot sell expired ( Messages::SellingExpired )

	assert( ! "Not implemented yet..." );
	return 0.0;
}


/*****************************************************************************/


void 
Controller::setCurrentDate ( Date _date )
{
	// TODO - assign current date
	//
	// Possible problems:
	//  - new date is earlier or same as previous ( Messages::ExpectLaterDate )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


bool
Controller::isExpired ( int _consignmentID ) const
{
	// TODO - check whether consignment with given ID is expired
	//
	// Possible problems: 
	//  - consignment ID is not unknown ( Messages::ConsignmentIDNotKnown )

	assert( ! "Not implemented yet..." );
	return false;
}


/*****************************************************************************/


double
Controller::getRemainingAmount ( int _consignmentID ) const
{
	// TODO - return remaining amount within the consignment with given ID
	//
	// Possible problems: 
	//  - consignment ID is not unknown ( Messages::ConsignmentIDNotKnown )

	assert( ! "Not implemented yet..." );
	return 0.0;
}


/*****************************************************************************/
