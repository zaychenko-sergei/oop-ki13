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
Controller::createManager ( 
		std::string const & _fullName
	,	double _bonus
)
{
	// TODO - create a manager employee
	//
	// Possible problems:
	//   - full name must be unique ( Messages::FullNameNonUnique   )
	//   - negative bonus amount    ( Messages::NegativePaymentAmount )
	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


void
Controller::createRegular ( 
		std::string const & _fullName
	,	std::string const & _level
	,	double _bonus
)
{
	// TODO - create a regular employee
	//
	// Possible problems:
	//   - full name must be unique ( Messages::FullNameNonUnique   )
	//   - level string not recognized ( Messages::InvalidLevelCode )
	//   - negative bonus amount    ( Messages::NegativePaymentAmount )
	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


void
Controller::setBaseSalary ( double _amount )
{
	// TODO - setup a base salary amount to calculate all salaries within the company
	//
	// Possible problems:
	//   - negative base payment amount    ( Messages::NegativePaymentAmount )
	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


double
Controller::getTotalSalary () const
{
	// TODO - calculate total salary payed by the company to all it's employees
	assert( ! "Not implemented yet" );
	return 0.0;
}


/*****************************************************************************/


double 
Controller::getEmployeeSalary ( std::string const & _fullName )
{
	// TODO - return salary of the empoyee with given name
	//
	// Possible problems:
	//  - employee name is not recognized ( Messages::UnregisteredEmployeeName )
	assert( ! "Not implemented yet" );
	return 0.0;
}


/*****************************************************************************/


void 
Controller::changeBonus ( std::string const & _fullName, double _newBonus )
{
	// TODO - update bonus of the empoyee with given name
	//
	// Possible problems:
	//  - employee name is not recognized ( Messages::UnregisteredEmployeeName )
	//   - negative bonus amount    ( Messages::NegativePaymentAmount )
	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


void 
Controller::assignManager ( std::string const & _employeeFullName, std::string const & _managerFullName )
{
	// TODO - assign employee to be supervised by the manager
	//
	// Possible problems:
	//  - employee or manager name is not recognized ( Messages::UnregisteredEmployeeName )
	//  - specified manager does not play managerial role ( Messages::NotAManager )
	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


void 
Controller::deassignManager ( std::string const & _employeeFullName )
{
	// TODO - deassign employee from being supervised by the manager
	//
	// Possible problems:
	//  - employee or manager name is not recognized ( Messages::UnregisteredEmployeeName )
	//  - employee was not supervised                ( Messages::DeassigningUnassignedEmployee )
	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


void 
Controller::promote ( std::string const & _employeeFullName )
{
	// TODO - promote employee to next level:
	//   - non-lead regular employees promote from junior to lead level
	//   - lead regular employees promote to managers
	//
	// Possible problems:
	//  - employee or manager name is not recognized ( Messages::UnregisteredEmployeeName )
	//  - promoting a manager                        ( Messages::CannotPromoteManagers )
	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


void
Controller::fire ( std::string const & _employeeFullName )
{
	// TODO - fires the employee from the company
	// Note: unassign all managed employees first
	//
	// Possible problems:
	//  - employee or manager name is not recognized ( Messages::UnregisteredEmployeeName )
	//  - firing manager without unassigning employees ( Messages::CannotFireAssignedManager )
	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


std::string
Controller::getRichestEmployeeName () const
{
	// TODO - return name of the employee with biggest salary amount
	//
	// Possible problems:
	//  - employee name is not recognized ( Messages::UnregisteredEmployeeName )
	assert( ! "Not implemented yet" );
	return "???";
}


/*****************************************************************************/


std::string
Controller::getPoorestEmployeeName () const
{
	// TODO - return name of the employee with smallest salary amount
	//
	// Possible problems:
	//  - employee name is not recognized ( Messages::UnregisteredEmployeeName )
	assert( ! "Not implemented yet" );

	return "???";
}


/*****************************************************************************/
