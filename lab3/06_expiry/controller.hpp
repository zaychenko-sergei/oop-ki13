// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _CONTROLLER_HPP_
#define _CONTROLLER_HPP_

/*****************************************************************************/

#include "date.hpp"
#include <string>

/*****************************************************************************/

class Owner;

/*****************************************************************************/


class Controller
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	Controller ();

	~ Controller ();

	// @returns Unique consignment code
	int createConsignment (
			std::string const & _productName
		,	double _initialAmount
		,	Date const & _date
		,	double _price
		,	const char * _expiryTypeCode
		,	int _expiresinDays = -1
	);

	double getTotalFreshCost () const;

	double getConsignmentFreshCost ( int _consignmentID ) const;
	
	double getTotalExpiredCost () const;
	
	double getConsignmentExpiredCost ( int _consignmentID ) const;
	
	double sell ( int _consignmentID, double _amount );

	void setCurrentDate ( Date _date );

	bool isExpired ( int _consignmentID ) const;

	double getRemainingAmount ( int _consignmentID ) const;

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
