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
Controller::createCountedConsumer (
		int _consumerID
	,	std::string const & _consumerName
	,	std::string const & _consumerAddress
)
{
	// TODO - create a counted consumer
	//
	// Possible problems:
	//  - consumer ID is not unique ( Messages::NonUniqueConsumerID )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void 
Controller::createStandardConsumer (
		int _consumerID
	,	std::string const & _consumerName
	,	std::string const & _consumerAddress
	,	int _nUsers
)
{
	// TODO - create a standard consumer
	//
	// Possible problems:
	//  - consumer ID is not unique ( Messages::NonUniqueConsumerID )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void 
Controller::createSubsidizedConsumer (
		int _consumerID
	,	std::string const & _consumerName
	,	std::string const & _consumerAddress
)
{
	// TODO - create a subsidized consumer
	//
	// Possible problems:
	//  - consumer ID is not unique ( Messages::NonUniqueConsumerID )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void 
Controller::useWater ( int _consumerID, double _volumeM3 )
{
	// TODO - track use of water by consumer
	//
	// Possible problems:
	//  - consumer is not found ( Messages::UnknownConsumerID )
	//  - the volume of water should be positive ( Messages::NonPositiveConsumption )
	
	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


double 
Controller::getConsumerDebt ( int _consumerID, double _price ) const
{
	// TODO - return cost of the water used by the consumer since previous payment
	//
	// Possible problems:
	//  - consumer is not found ( Messages::UnknownConsumerID )
	//  - price may not be negative ( Messages::NonPositiveConsumption )

	assert( ! "Not implemented yet..." );
	return 0.0;
}


/*****************************************************************************/


double 
Controller::getTotalDebt ( double _price ) const
{
	// TODO - return total cost of the water used by all registered consumers since previous payment
	//
	// Possible problems:
	//  - price may not be negative ( Messages::NonPositiveConsumption )

	assert( ! "Not implemented yet..." );
	return 0.0;
}


/*****************************************************************************/


void 
Controller::trackConsumerPayment ( int _consumerID, double _amount )
{
	// TODO - locate the consumer and track the payment
	// Unblock the consumer if necessary
	//
	// Possible problems:
	//  - consumer is not found ( Messages::UnknownConsumerID )
	//  - negative payment amount ( Messages::NegativePaymentAmount )
	//  - payment from subsidized customer ( Messages::SubsidizedConsumersDontPay )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/
