// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _APPLICATION_HPP_
#define _APPLICATION_HPP_

/*****************************************************************************/

class Book;

/*****************************************************************************/


class Application
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	Application ();

	~ Application ();

	void generateTestModel ();

	void printTaskHours () const;

	void printEmployeesWithLoadOver ( int _nHours ) const;

	void printTaskCosts ( double _baseHourPrice = 5.00 ) const;

	void printEmployeesExpectedPayments ( double _baseHourPrice = 5.00 ) const;

/*-----------------------------------------------------------------*/

private:

/*-----------------------------------------------------------------*/

	Application ( const Application & );
	Application & operator = ( const Application & );

/*-----------------------------------------------------------------*/

	// TODO ... declare the top of the object model hierarchy here ...

/*-----------------------------------------------------------------*/

};


/*****************************************************************************/

#endif //  _APPLICATION_HPP_
