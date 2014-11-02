// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _MESSAGES_HPP_
#define _MESSAGES_HPP_

/*****************************************************************************/

namespace Messages
{

/*-----------------------------------------------------------------*/

	const char * NonUniqueTitle           = "Book title must be unique";
	const char * EmptyAuthorsList         = "List of authors should not be empty";
	const char * NonPositiveEdition       = "Edition number must be positive";
	const char * UnknownTitle             = "Book with the specified title was not previusly registered";
	const char * TranslatedBeforeOriginal = "Book cannot be translated earlier than original was published";
	const char * TranslatedToSameLanguage = "Language of translation should be different from original language";
	const char * UnknownEdition           = "Specified edition of the book is unknown";
	const char * RevisedBeforeOriginal    = "Book cannot be revised earlier than original was published";
	const char * RevisedEditionLessEqu    = "Revised edition number should be greated that original edition number";
	const char * AuthorIndexOutOfRange    = "Index of the book author is out of allowed range";

/*-----------------------------------------------------------------*/

};


/*****************************************************************************/


#endif // _MESSAGES_HPP_
