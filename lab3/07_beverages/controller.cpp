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
Controller::createCustomer ( 
		std::string const & _name
	,	int _age
	,	double _money
)
{
	// TODO - create customer object
	//
	// Possible problems:
	//  - customer name not unique ( Messages::CustomerNameNotUnique )
	//  - negative age ( Messages::NegativeAge )
	//  - negative balance ( Messages::NegativeBalance )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void 
Controller::makeCustomerAllergicTo (
		std::string const & _name
	,	std::string const & _ingredient 
)
{
	// TODO - associate given alergic ingredient with the customer
	//
	// Possible problems:
	//  - customer name not known ( Messages::CustomerNameUnknown )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void 
Controller::createJuice (
		std::string const & _name
	,	int _volumeMl
	,	double _price
	,	std::string const & _mainIngredient
)
{
	// TODO - create juice beverage
	//
	// Possible problems:
	//  - name not unique ( Messages::BeverageNameNotUnique )
	//  - volume is not positive ( Messages::NonPositiveAmount )
	//  - price is not positive ( Messages::NonPositiveAmount )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void 
Controller::createBeer (
		std::string const & _name
	,	int _volumeMl
	,	double _price
)
{
	// TODO - create beer beverage
	//
	// Possible problems:
	//  - name not unique ( Messages::BeverageNameNotUnique )
	//  - volume is not positive ( Messages::NonPositiveAmount )
	//  - price is not positive ( Messages::NonPositiveAmount )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void 
Controller::createPoison (
		std::string const & _name
	,	int _volumeMl
	,	double _price
)
{
	// TODO - create poison beverage
	//
	// Possible problems:
	//  - name not unique ( Messages::BeverageNameNotUnique )
	//  - volume is not positive ( Messages::NonPositiveAmount )
	//  - price is not positive ( Messages::NonPositiveAmount )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


std::string 
Controller::getMainIngredient ( std::string const & _beverageName ) const
{
	// TODO - return name of the main ingredent for given beverage
	//
	// Possible problems:
	//  - beverage name not known ( Messages::BeverageNameUnknown )

	assert( ! "Not implemented yet..." );
	return std::string();
}


/*****************************************************************************/


bool 
Controller::trySelling ( 
		std::string const & _customerName
	,	std::string const & _beverageName 
)
{
	// TODO - try selling specified beverage to a given customer
	//
	// Possible problems:
	//  - customer name not known ( Messages::CustomerNameUnknown )
	//  - beverage name not known ( Messages::BeverageNameUnknown )

	// TODO
	assert( ! "Not implemented yet..." );
	return false;
}


/*****************************************************************************/


double
Controller::getCustomerBalance ( std::string const & _customerName ) const
{
	// TODO - return amount of money left in concrete customer's pocket
	//
	// Possible problems:
	//  - customer name not known ( Messages::CustomerNameUnknown )

	assert( ! "Not implemented yet..." );
	return 0.0;
}


/*****************************************************************************/
