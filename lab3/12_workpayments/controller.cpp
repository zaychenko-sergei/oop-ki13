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
Controller::createHourlyEmployee ( std::string const & _name, double _hourlyRate )
{
	// TODO - create hourly employee
	//
	// Possible problems:
	//  - name must be unique ( Messages::NonUniqueName )
	//  - hourly rate must be positive ( Messages::NonPositivePayment )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void
Controller::createSalaryEmployee ( std::string const & _name, double _monthPayment )
{
	// TODO - create salary employee
	//
	// Possible problems:
	//  - name must be unique ( Messages::NonUniqueName )
	//  - hourly rate must be positive ( Messages::NonPositivePayment )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void 
Controller::createInternEmployee ( std::string const & _name, double _workHoursLimit )
{
	// TODO - create intern employee
	//
	// Possible problems:
	//  - name must be unique ( Messages::NonUniqueName )
	//  - working hours limit must be positive ( Messages::NonPositiveHoursLimit )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void
Controller::trackWork ( std::string const & _employeeName, double _hours )
{
	// TODO - register work accomplished by the given employee
	//
	// Possible problems:
	//  - employee name is unknown ( Messages::UnknownEmployeeName )
	//  - amount of hours is negative ( Messages::NegativeWorkHours )
	//  - intern employee was overloaded ( Messages::OverloadedIntern )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void
Controller::giveBonus ( std::string const & _employeeName, double _bonusPayment )
{
	// TODO - assign bonus to employee
	//
	// Possible problems:
	//  - employee name is unknown ( Messages::UnknownEmployeeName )
	//  - bonus amount is not positive ( Messages::NonPositivePayment )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


double 
Controller::getPayment ( std::string const & _employeeName ) const
{
	// TODO - locate the employee and return the amount of money this person has earned
	//
	// Possible problems:
	//  - employee name is unknown ( Messages::UnknownEmployeeName )

	assert( ! "Not implemented yet..." );
	return 0.0;
}


/*****************************************************************************/


double 
Controller::getTotalPayment () const
{
	// TODO - calculate total amount of money that all registered employees have earned
	assert( ! "Not implemented yet..." );
	return 0.0;
}


/*****************************************************************************/
