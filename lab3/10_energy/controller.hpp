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

	void createPersonConsumer ( int _consumerID );

	void createOrganizationConsumer ( int _consumerID );

	void createSystemConsumer ( int _consumerID );

	void consume ( int _consumerID, int _kiloWatts );

	double getConsumerDebt ( int _consumerID ) const;

	double getTotalDebt () const;

	bool isConsumerBlocked ( int _consumerID ) const;

	void trackConsumerPayment ( int _consumerID, double _payment );

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
