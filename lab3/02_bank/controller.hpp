// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _CONTROLLER_HPP_
#define _CONTROLLER_HPP_

/*****************************************************************************/

#include "bank.hpp"

#include <string>

/*****************************************************************************/


class Controller
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	Controller ();

	~ Controller ();

	// @return ID of the created account
	int createAccount (
			std::string const & _ownerName
		,	double _initialBalance
		,	double _overdraftLimit = 0.0
	);

	double getBalance ( int _accountID ) const;

	void deposit ( int _accountID, double _amount );

	void withdraw ( int _accountID, double _amount );

	void onPeriod ();

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
