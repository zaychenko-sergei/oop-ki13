// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _MESSAGES_HPP_
#define _MESSAGES_HPP_

/*****************************************************************************/

namespace Messages
{

/*-----------------------------------------------------------------*/

	const char * NonUniqueName   = "Name of the employee must be unique";
	const char * NonPositivePayment = "Payment amount must be positive";
	const char * NonPositiveHoursLimit = "Limit of working hours must be positive";
	const char * UnknownEmployeeName = "Employee with such name was not previously registered";
	const char * NegativeWorkHours = "Number of work hours used must not be negative";
	const char * OverloadedIntern = "Intern working capacity was exceeded";
	
/*-----------------------------------------------------------------*/

};


/*****************************************************************************/


#endif // _MESSAGES_HPP_
