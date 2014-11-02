// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _CONTROLLER_HPP_
#define _CONTROLLER_HPP_

/*****************************************************************************/

#include <string>

/*****************************************************************************/


class Controller
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	Controller ();

	~ Controller ();

	void createHourlyEmployee ( std::string const & _name, double _hourlyRate );

	void createSalaryEmployee ( std::string const & _name, double _monthPayment );

	void createInternEmployee ( std::string const & _name, double _workHoursLimit );

	void trackWork ( std::string const & _employeeName, double _hours );

	void giveBonus ( std::string const & _employeeName, double _bonusPayment );

	double getPayment ( std::string const & _employeeName ) const;

	double getTotalPayment () const;

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
