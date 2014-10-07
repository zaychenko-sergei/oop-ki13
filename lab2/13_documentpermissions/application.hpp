// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _APPLICATION_HPP_
#define _APPLICATION_HPP_

/*****************************************************************************/

class Document;
class User;

/*****************************************************************************/


class Application
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	Application ();

	~ Application ();

	void generateTestModel ();

	void printUserPermissionsReport () const;

	void printDocumentsNotHavingPermittedUsers () const;

	void printUsersNotHavingPermittedDocuments () const;

	void printDocumentsHavingMultipleWriteUsers () const;

/*-----------------------------------------------------------------*/

private:

/*-----------------------------------------------------------------*/

	Application ( const Application & );
	Application & operator = ( const Application & );

/*-----------------------------------------------------------------*/

	// TODO ... declare the top of the object model hierarchy here ...

/*-----------------------------------------------------------------*/

};


/*****************************************************************************/

#endif //  _APPLICATION_HPP_
