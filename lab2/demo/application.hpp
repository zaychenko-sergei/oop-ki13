// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _APPLICATION_HPP_
#define _APPLICATION_HPP_

/*****************************************************************************/

class Company;

/*****************************************************************************/


class Application
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	Application ();

	~ Application ();

	void generateTestModel ();

	void printEmployeesWithoutComputer () const;

	void printComputersWithoutUsers () const;

	void printEmployeesWithBiggestRamComputers () const;

	void print64BitComputersWithMemoryShortage () const;

/*-----------------------------------------------------------------*/

private:

/*-----------------------------------------------------------------*/

	Application ( const Application & );
	Application & operator = ( const Application & );

/*-----------------------------------------------------------------*/

	Company * m_pCompany;

/*-----------------------------------------------------------------*/

};


/*****************************************************************************/

#endif //  _APPLICATION_HPP_
