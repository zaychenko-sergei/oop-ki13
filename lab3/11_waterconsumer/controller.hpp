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

	void createCountedConsumer (
			int _consumerID
		,	std::string const & _consumerName
		,	std::string const & _consumerAddress
	);

	void createStandardConsumer (
			int _consumerID
		,	std::string const & _consumerName
		,	std::string const & _consumerAddress
		,	int _nUsers
	);

	void createSubsidizedConsumer (
			int _consumerID
		,	std::string const & _consumerName
		,	std::string const & _consumerAddress
	);

	void useWater ( int _consumerID, double _volumeM3 );

	double getConsumerDebt ( int _consumerID, double _price ) const;

	double getTotalDebt ( double _price ) const;

	void trackConsumerPayment ( int _consumerID, double _amount );

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
