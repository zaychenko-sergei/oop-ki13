// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _MESSAGES_HPP_
#define _MESSAGES_HPP_

/*****************************************************************************/

namespace Messages
{

/*-----------------------------------------------------------------*/

	const char * ProgramNameNotUnique          = "Program name must be unique";
	const char * ProgramNotRegitered           = "Program was not registered";
	const char * DuplicateLicense              = "Program already has a license";
	const char * ExpiryNotAfterIssued          = "License should expire after issue time";
	const char * NonPositiveTokens             = "Number of tokens must be positive";
	const char * NoValidLicense                = "No valid license found for the program";
	const char * AddingTokensToNonTokenLicense = "Cannot add tokens to a license that is not token-based";
	const char * ProlongingNonTimeBasedLicense = "Cannot prolong license that is not time-based";
	const char * ProlongingToEarlierDate       = "Prolonging license to a date that is earlier than previus expiry date";


/*-----------------------------------------------------------------*/

};


/*****************************************************************************/


#endif // _MESSAGES_HPP_
