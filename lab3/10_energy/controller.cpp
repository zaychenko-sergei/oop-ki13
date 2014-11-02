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
Controller::createPersonConsumer ( int _consumerID )
{
	// TODO - create a person consumer
	// 
	// Possible problems:
	//   - ID is not unique ( Messages::NonUniqueConsumerID )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void 
Controller::createOrganizationConsumer ( int _consumerID )
{
	// TODO - create an organization consumer
	// 
	// Possible problems:
	//   - ID is not unique ( Messages::NonUniqueConsumerID )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void 
Controller::createSystemConsumer ( int _consumerID )
{
	// TODO - create a system consumer
	// 
	// Possible problems:
	//   - ID is not unique ( Messages::NonUniqueConsumerID )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void 
Controller::consume ( int _consumerID, int _kiloWatts )
{
	// TODO - track use energy by the consumer
	//
	// Possible problems:
	//  - consumer is not found ( Messages::UnknownConsumerID )
	//  - the amount of energy should be positive ( Messages::NonPositiveConsumption )
	//  - consumer is blocked ( Messages::ConsumerBlocked )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


double 
Controller::getConsumerDebt ( int _consumerID ) const
{
	// TODO - locate the consumer and calculate the cost of energy consumed since the previous payment
	//
	// Possible problems:
	//  - consumer is not found ( Messages::UnknownConsumerID )

	assert( ! "Not implemented yet..." );
	return 0.0;
}


/*****************************************************************************/


double 
Controller::getTotalDebt () const
{
	// TODO - calculate total debt of all registered consumers

	assert( ! "Not implemented yet..." );
	return 0.0;
}


/*****************************************************************************/


bool 
Controller::isConsumerBlocked ( int _consumerID ) const
{
	// TODO - locate the consumer and check whether it was blocked for too big debt
	//
	// Possible problems:
	//  - consumer is not found ( Messages::UnknownConsumerID )

	assert( ! "Not implemented yet..." );
	return false;
}


/*****************************************************************************/


void
Controller::trackConsumerPayment ( int _consumerID, double _payment )
{
	// TODO - locate the consumer and track the payment
	// Unblock the consumer if necessary
	//
	// Possible problems:
	//  - consumer is not found ( Messages::UnknownConsumerID )
	//  - negative payment amount ( Messages::NegativePaymentAmount )
	//  - payment from system customer ( Messages::SystemConsumersDontPay )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/
