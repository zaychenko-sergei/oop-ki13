// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _CONTROLLER_HPP_
#define _CONTROLLER_HPP_

/*****************************************************************************/

#include <string>
#include <vector>
#include <set>

/*****************************************************************************/


class Controller
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	Controller ();

	~ Controller ();

	void addBook (
			std::string const & _title
		,	std::vector< std::string > const & _authors
		,	const char * _language
		,	int _publicationYear
		,	int _edition = 1
	);

	void addTranslation (
			std::string const & _translatedTitle
		,	std::string const & _originalTitle
		,	const char * _translatedLanguage
		,	int _translationYear
		,	int _translatedEdition = 1
	);

	void addRevised (
			std::string const & _originalTitle
		,	int _oldEdition
		,	int _newEdition
		,	int _revisionYear
	);

	int getBookEdition ( std::string const & _title );

	const char * getBookLanguage ( std::string const & _title );

	int getBookAuthorsCount ( std::string const & _title );

	std::string const & getBookAuthor ( std::string const & _title, int _index );

	bool hasBook ( std::string const & _title, int _edition = 1 ) const;

	std::set< std::string > fetchAuthorsNotBeingTranslated ();

	std::set< std::string > fetchBooksBothTranslatedRevised ();

/*-----------------------------------------------------------------*/

private:

/*-----------------------------------------------------------------*/

	// TODO .. declare the top of the object model hierarchy here ...

/*-----------------------------------------------------------------*/

};


/*****************************************************************************/

#endif // _CONTROLLER_HPP_
