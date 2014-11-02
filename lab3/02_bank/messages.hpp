// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _MESSAGES_HPP_
#define _MESSAGES_HPP_

/*****************************************************************************/

namespace Messages
{

/*-----------------------------------------------------------------*/

	const char * OwnerNameNotUnique       = "Owner name must be unique";
	const char * NegativeInitialBalance   = "Cannot create account with negative initial balance";
	const char * NegativeOverdraft        = "Cannot create account with negative overdraft setting";

	const char * UnknownAccountID         = "Account ID is not recognized";
	const char * NonPositiveDeposit       = "Cannot deposit negative or zero amount of money";
	const char * NonPositiveWithdrawal    = "Cannot withdraw negative or zero amount of money";

	const char * OverdraftNotAllowed      = "Overdraft is not allowed on account";
	const char * OverdraftExceeded        = "Overdraft limit exceeded";

/*-----------------------------------------------------------------*/

};


/*****************************************************************************/


#endif // _MESSAGES_HPP_
