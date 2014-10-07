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
Application::printEmployeeBestSkill () const
{
	std::cout << "1. Best employee skills" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
	

void 
Application::printBestEmployeesHavingSkill ( int _nEmployees, const char* _skillName ) const
{
	std::cout << "2. Best N employees having skill" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
		

void 
Application::printEldestEmployeeWithSkillAtLeast ( const char * _skillName, int _minLevel ) const
{
	std::cout << "3. Eldest employee having solid level in " << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
			

void 
Application::printEmployeeWithBiggestTotalSkillPoints () const
{
	std::cout << "4. Biggest total skillpoints" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
	