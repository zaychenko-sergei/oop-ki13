// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _MESSAGES_HPP_
#define _MESSAGES_HPP_

/*****************************************************************************/

namespace Messages
{

/*-----------------------------------------------------------------*/

	const char * NonUniqueConsumerID      = "ID of the consumer must be unique";
	const char * UnknownConsumerID        = "Consumer with the specified ID was not previously registered";
	const char * NonPositiveConsumption   = "The amount of consumed energy should be positive";
	const char * NonPositivePaymentAmount = "Payment amount should be positive";
	const char * SystemConsumersDontPay   = "System consumer should not pay any money for the energy";
	
/*-----------------------------------------------------------------*/

};


/*****************************************************************************/


#endif // _MESSAGES_HPP_
