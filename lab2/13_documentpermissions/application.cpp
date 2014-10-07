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
	// TODO - Generate test model objects here and attach them to application...
}


/*****************************************************************************/
	

void 
Application::printUserPermissionsReport () const
{
	std::cout << "1. User permissions report" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
	

void 
Application::printDocumentsNotHavingPermittedUsers () const
{
	std::cout << "2. Documents without users" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
		

void 
Application::printUsersNotHavingPermittedDocuments () const
{
	std::cout << "3. Users without documents" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
			

void 
Application::printDocumentsHavingMultipleWriteUsers () const
{
	std::cout << "4. Documents with multiple writers" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
	