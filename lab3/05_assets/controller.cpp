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
Controller::createOwner ( std::string const & _fullName )
{
	// TODO - create owner object
	//
	// Possible problems:
	//  - owner name is not unique ( Messages::OwnerNameNotUnique )
	assert( ! "Not implemented yet" );
}


/*****************************************************************************/

	
void 
Controller::addRealEstate ( 
		std::string const & _ownerFullName
	,	std::string const & _assetName
	,	std::string const & _stateCode
	,	double _price
)
{
	// TODO - create real estate object and attach it to given owner
	//
	// Possible problems:
	//  - owner name is not recognized ( Messages::OwnerUnknown )
	//  - asset name is not unique within owner's assets ( Messages::AssetNameNotUniqueWithinOwner )
	//  - state code is not recognized ( Messages::StateCodeError )
	//	- price is negative ( Messages::NegativePrice )

	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


void 
Controller::addVehicle (
		std::string const & _ownerFullName
	,	std::string const & _assetName
	,	int _purchaseYear
	,	bool _hadAccidents
	,	double _price
)
{
	// TODO - create vehicle object and attach it to given owner
	//
	// Possible problems:
	//  - owner name is not recognized ( Messages::OwnerUnknown )
	//  - asset name is not unique within owner's assets ( Messages::AssetNameNotUniqueWithinOwner )
	//	- price is negative ( Messages::NegativePrice )

	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


double
Controller::getOwnerAssetsValue ( std::string const & _ownerFullName ) const
{
	// TODO - caclulate total value of given owner's assets
	//
	// Possible problems:
	//  - owner name is not recognized ( Messages::OwnerUnknown )

	assert( ! "Not implemented yet" );
	return 0.0;
}


/*****************************************************************************/


double 
Controller::getAssetValue ( std::string const & _ownerFullName, std::string const & _assetName ) const
{
	// TODO - return value of the concrete asset that belongs to a given owner
	//
	// Possible problems:
	//  - owner name is not recognized ( Messages::OwnerUnknown )
	//	- asset name is not recognized ( Messages::AssetUnknown )

	assert( ! "Not implemented yet" );
	return 0.0;
}


/*****************************************************************************/


void 
Controller::repair ( std::string const & _ownerFullName, std::string const & _assetName )
{
	// TODO - remove damage from the concrete asset that belongs to a given owner
	//
	// Possible problems:
	//  - owner name is not recognized ( Messages::OwnerUnknown )
	//	- asset name is not recognized ( Messages::AssetUnknown )

	assert( ! "Not implemented yet" );
}
	

/*****************************************************************************/


void
Controller::damage ( std::string const & _ownerFullName, std::string const & _assetName )
{
	// TODO - cause damage to  the concrete asset that belongs to a given owner
	//
	// Possible problems:
	//  - owner name is not recognized ( Messages::OwnerUnknown )
	//	- asset name is not recognized ( Messages::AssetUnknown )

	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


void 
Controller::sellExternally ( std::string const & _ownerFullName, std::string const & _assetName )
{
	// TODO - unregister previously registered asset of the given owner
	//
	// Possible problems:
	//  - owner name is not recognized ( Messages::OwnerUnknown )
	//	- asset name is not recognized ( Messages::AssetUnknown )

	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


void 
Controller::changeOwner ( 
		std::string const & _currentOwnerFullName
	,	std::string const & _assertName
	,	std::string const & _newOwnerFullName
)
{
	// TODO - take previously registered asset of the given owner and give it to a different owner
	//
	// Possible problems:
	//  - owner name is not recognized ( Messages::OwnerUnknown )
	//	- asset name is not recognized ( Messages::AssetUnknown )

	assert( ! "Not implemented yet" );
}


/*****************************************************************************/
