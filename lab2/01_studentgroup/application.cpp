// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "application.hpp"

#include <iostream>

/*****************************************************************************/


Application::Application ()
{
	// TODO - any required initialization...
}


/*****************************************************************************/


Application::~Application ()
{
	// TODO - destroy the model...
}


/*****************************************************************************/


void
Application::generateTestModel ()
{
	// TODO - Generate test model objects here and attach them to application..
}


/*****************************************************************************/


void
Application::printBudgetStudentsCount () const
{
	std::cout << "1. Budget Students" << std::endl;
	std::cout << "=======================================" << std::endl;

	int nTotalBudgetStudents = 0;
	
	// TODO ...

	std::cout << "Total - " << nTotalBudgetStudents << std::endl << std::endl;
}


/*****************************************************************************/


void
Application::printContractStudentsCount () const
{
	std::cout << "2. Contract Students" << std::endl;
	std::cout << "=======================================" << std::endl;

	int nTotalContractStudents = 0;
		
	// TODO ...

	std::cout << "Total - " << nTotalContractStudents << std::endl << std::endl;
}


/*****************************************************************************/


void
Application::printStudentsBornFirstDayOfMonth () const
{
	std::cout << "3. Students born on first day of a month" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/


void 
Application::printEldestStudent () const
{
	std::cout << "4. Eldest student" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
