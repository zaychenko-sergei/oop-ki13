// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _MESSAGES_HPP_
#define _MESSAGES_HPP_

/*****************************************************************************/

namespace Messages
{

/*-----------------------------------------------------------------*/

	const char * FullNameNonUnique             = "Name of the employee is not unique";
	const char * NegativePaymentAmount         = "Payment amount cannot be negative";
	const char * InvalidLevelCode              = "Specified employee level is not recognized";
	const char * UnregisteredEmployeeName      = "Name of the empoyee is not recognized";
	const char * NotAManager                   = "Specified employee has no managerial role";
	const char * DeassigningUnassignedEmployee = "Deassigning employee that was not being managed";
	const char * CannotPromoteManagers         = "Cannot promote employee with managerial role";
	const char * CannotFireAssignedManager     = "Cannot fire a manager who has employees assigned";
	
/*-----------------------------------------------------------------*/

};


/*****************************************************************************/


#endif // _MESSAGES_HPP_
