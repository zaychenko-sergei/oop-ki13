// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _MESSAGES_HPP_
#define _MESSAGES_HPP_

/*****************************************************************************/

namespace Messages
{

/*-----------------------------------------------------------------*/

	const char * NonUniqueConsumerID        = "ID of the consumer must be unique";
	const char * UnknownConsumerID          = "Consumer with the specified ID was not previously registered";
	const char * NonPositiveConsumption     = "The amount of consumed water should be positive";
	const char * NegativePrice              = "Price may not be negative";
	const char * SubsidizedConsumersDontPay = "Subsidized consumer should not pay any money for the water";

/*-----------------------------------------------------------------*/

};


/*****************************************************************************/


#endif // _MESSAGES_HPP_
