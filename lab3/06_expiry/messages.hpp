// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _MESSAGES_HPP_
#define _MESSAGES_HPP_

/*****************************************************************************/

namespace Messages
{

/*-----------------------------------------------------------------*/

	const char * NonPositiveAmount          = "Consignment amount must be positive";
	const char * NonPositivePrice           = "Product price must be positive";
	const char * ExpiryTypeCodeIncorrect    = "Expiry type code is incorrect";
	const char * NonPositiveExpiryDays      = "Number of days to expire must be positive";
	const char * ConsignmentIDNotKnown      = "Unrecognized consignment ID";
	const char * ExpectLaterDate            = "New date must be later than current";
	const char * SellingExpired             = "Trying to sell an expired product";
	
/*-----------------------------------------------------------------*/

};


/*****************************************************************************/


#endif // _MESSAGES_HPP_
