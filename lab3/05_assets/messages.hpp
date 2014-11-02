// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _MESSAGES_HPP_
#define _MESSAGES_HPP_

/*****************************************************************************/

namespace Messages
{

/*-----------------------------------------------------------------*/

	const char * OwnerNameNotUnique              = "Owner name must be unique";
	const char * OwnerUnknown                    = "Owner of the asset was not previously registered";
	const char * AssetNameNotUniqueWithinOwner   = "Assets should have unique names within single owner";
	const char * AssetUnknown                    = "Asset was not previously registered by the owner";
	const char * StateCodeError                  = "Encoded asset state is incorrect";
	
/*-----------------------------------------------------------------*/

};


/*****************************************************************************/


#endif // _MESSAGES_HPP_
