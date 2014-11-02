// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _CONTROLLER_HPP_
#define _CONTROLLER_HPP_

/*****************************************************************************/

#include "company.hpp"
#include <string>

/*****************************************************************************/


class Controller
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	Controller ();

	~ Controller ();

	void createManager ( 
			std::string const & _fullName
		,	double _bonus = 0.0 
	);

	void createRegular ( 
			std::string const & _fullName
		,	std::string const & _level
		,	double _bonus = 0.0 
	);

	void setBaseSalary ( double _amount );

	double getTotalSalary () const;

	double getEmployeeSalary ( std::string const & _fullName );

	void changeBonus ( std::string const & _fullName, double _newBonus );

	void assignManager ( std::string const & _employeeFullName, std::string const & _managerFullName );

	void deassignManager ( std::string const & _employeeFullName );

	void promote ( std::string const & _employeeFullName );

	void fire ( std::string const & _employeeFullName );

	std::string getRichestEmployeeName () const;

	std::string getPoorestEmployeeName () const;

/*-----------------------------------------------------------------*/

private:

/*-----------------------------------------------------------------*/

	Controller ( const Controller & );
	Controller & operator = ( const Controller & );

/*-----------------------------------------------------------------*/

	// TODO .. declare the top of the object model hierarchy here ...

/*-----------------------------------------------------------------*/

};


/*****************************************************************************/

#endif //  _CONTROLLER_HPP_
