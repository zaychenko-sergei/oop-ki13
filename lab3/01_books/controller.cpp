// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "controller.hpp"

#include <assert.h>

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
Controller::addBook (
		std::string const & _title
	,	std::vector< std::string > const & _authors
	,	const char * _language
	,	int _publicationYear
	,	int _edition
)
{
	// TODO - create and register a simple book
	//
	// Possible problems:
	//  - title is not unique          ( Messages::NonUniqueTitle )
	//  - list of authors is empty     ( Messages::EmptyAuthorsList )
	//  - non-positive edition         ( Messages::NonPositiveEdition )

	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


void 
Controller::addTranslation (
		std::string const & _translatedTitle
	,	std::string const & _originalTitle
	,	const char * _translatedLanguage
	,	int _translationYear
	,	int _translatedEdition
)
{
	// TODO - create and register a translated book
	//
	// Possible problems:
	//  - title is not unique          ( Messages::NonUniqueTitle )
	//  - original title not found     ( Messages::UnknownTitle )
	//  - original revision not found  ( Messages::UnknownEdition )
	//  - translated before original   ( Messages::TranslatedBeforeOriginal )
	//  - translating to same language ( Messages::TranslatedToSameLanguage )

	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


void 
Controller::addRevised (
		std::string const & _originalTitle
	,	int _oldEdition
	,	int _newEdition
	,	int _revisionYear
)
{
	// TODO - create and register a revised book.
	//
	// Possible problems:
	//  - original title not found     ( Messages::UnknownTitle )
	//  - original revision not found  ( Messages::UnknownEdition )
	//  - non-positive eidition        ( Messages::NonPositiveEdition )
	//  - revised before original      ( Messages::RevisedBeforeOriginal )
	//  - revised edition <= original  ( Messages::RevisedEditionLessEqu )

	assert( ! "Not implemented yet" );
}


/*****************************************************************************/


int 
Controller::getBookEdition ( std::string const & _title )
{
	// TODO - locate the book and return it's edition number
	//
	// Possible problems:
	//  - book with the specified title does not exist ( Messages::UnknownTitle )

	assert( ! "Not implemented yet" );
	return -1;
}


/*****************************************************************************/


const char * 
Controller::getBookLanguage ( std::string const & _title )
{
	// TODO - locate the book and return it's language
	//
	// Possible problems:
	//  - book with the specified title does not exist ( Messages::UnknownTitle )

	assert( ! "Not implemented yet" );
	return "";
}


/*****************************************************************************/


int 
Controller::getBookAuthorsCount ( std::string const & _title )
{
	// TODO - locate the book and return it's number of authors
	//
	// Possible problems:
	//  - book with the specified title does not exist ( Messages::UnknownTitle )

	assert( ! "Not implemented yet" );
	return -1;
}


/*****************************************************************************/


std::string const & 
Controller::getBookAuthor ( std::string const & _title, int _index )
{
	// TODO - locate the book and return it's author #index
	//
	// Possible problems:
	//  - book with the specified title does not exist ( Messages::UnknownTitle )
	//  - author index is out of range ( Messages::AuthorIndexOutOfRange )

	assert( ! "Not implemented yet" );

	static std::string deleteMe;
	return deleteMe;
}


/*****************************************************************************/


bool 
Controller::hasBook ( std::string const & _title, int _edition ) const
{
	// TODO - check whether the specified book of given edition exists

	assert( ! "Not implemented yet" );
	return false;
}


/*****************************************************************************/


std::set< std::string > 
Controller::fetchAuthorsNotBeingTranslated ()
{
	// TODO - analyze books and find those, that were never translated to a different language
	// Return set of original titles.
	// If there are no such books, return empty set

	assert( ! "Not implemented yet" );

	std::set< std::string > result;
	return result;
}


/*****************************************************************************/


std::set< std::string > 
Controller::fetchBooksBothTranslatedRevised ()
{
	// TODO - analyze books and find those, that were both translated and revised
	// Return set of original titles.
	// If there are no such books, return empty set

	assert( ! "Not implemented yet" );

	std::set< std::string > result;
	return result;
}


/*****************************************************************************/

