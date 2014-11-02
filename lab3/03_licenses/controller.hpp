// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _CONTROLLER_HPP_
#define _CONTROLLER_HPP_

/*****************************************************************************/

#include "date.hpp"
#include <string>

/*****************************************************************************/


class Controller
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	Controller ();

	~ Controller ();

	void createProgram ( std::string const & _name, std::string const & _vendorName );

	void createPerpetualLicense ( std::string const & _programName, const Date & _issued );

	void createTimeBasedLicense ( std::string const & _programName, const Date & _issued, const Date & _expires );

	void createTokenBasedLicense ( std::string const & _programName, const Date & _issued, int _nTokens );

	bool canUse ( std::string const & _programName ) const;

	void trackUse ( std::string const & _programName );

	void prolongLicense ( std::string const & _programName, const Date & _newExpires );

	void addLicenseTokens ( std::string const & _programName, int _nTokens );

	void setCurrentDate ( Date _today );

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
