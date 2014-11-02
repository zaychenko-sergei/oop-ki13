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

	void createManualTeapot ( double _maxVolume, int _speed );

	void createAutomaticTeapot ( double _maxVolume, int _speed );

	double addWater ( int _teapotIndex, double _volume );

	double takeWater ( int _teapotINdex, double _volume );

	void turnOnTeapot ( int _teapotIndex );

	void turnOffTeapot ( int _teapotIndex );

	int getTeapotCurrentVolume ( int _teapotIndex ) const;

	int getTeapotCurrentTemperature ( int _teapotIndex ) const;

	bool isTeapotOn ( int _teapotIndex ) const;

	void wait ( int _nMinutes );

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
