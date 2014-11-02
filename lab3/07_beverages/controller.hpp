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

	void createCustomer ( 
			std::string const & _name
		,	int _age
		,	double _money
	);

	void makeCustomerAllergicTo (
			std::string const & _name
		,	std::string const & _ingredient 
	);

	void createJuice (
			std::string const & _name
		,	int _volumeMl
		,	double _price
		,	std::string const & _mainIngredient
	);

	void createBeer (
			std::string const & _name
		,	int _volumeMl
		,	double _price
	);

	void createPoison (
			std::string const & _name
		,	int _volumeMl
		,	double _price
	);

	std::string getMainIngredient ( std::string const & _beverageName ) const;

	bool trySelling ( 
			std::string const & _customerName
		,	std::string const & _beverageName 
	);

	double getCustomerBalance ( std::string const & _customerName ) const;

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
