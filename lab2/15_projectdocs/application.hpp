// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _APPLICATION_HPP_
#define _APPLICATION_HPP_

/*****************************************************************************/

class Project;

/*****************************************************************************/


class Application
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	Application ();

	~ Application ();

	void generateTestModel ();

	void printProjectStandardsUsed () const;

	void printProjectsWithAllNeededStandardDocumentsPresent () const;

	void printProjectsNotHavingStandardDocument ( const char * _standardName ) const;

	void printMostPopularStandard () const;

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
