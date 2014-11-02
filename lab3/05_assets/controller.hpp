// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _CONTROLLER_HPP_
#define _CONTROLLER_HPP_

/*****************************************************************************/

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

	void createOwner ( std::string const & _fullName );
	
	void addRealEstate ( 
			std::string const & _ownerFullName
		,	std::string const & _assetName
		,	std::string const & _stateCode
		,	double _price
	);

	void addVehicle (
			std::string const & _ownerFullName
		,	std::string const & _assetName
		,	int _purchaseYear
		,	bool _hadAccidents
		,	double _price
	);

	double getOwnerAssetsValue ( std::string const & _ownerFullName ) const;

	double getAssetValue ( std::string const & _ownerFullName, std::string const & _assetName ) const;

	void repair ( std::string const & _ownerFullName, std::string const & _assetName );
	
	void damage ( std::string const & _ownerFullName, std::string const & _assetName );

	void sellExternally ( std::string const & _ownerFullName, std::string const & _assetName );

	void changeOwner ( 
			std::string const & _currentOwnerFullName
		,	std::string const & _assertName
		,	std::string const & _newOwnerFullName
	);

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
