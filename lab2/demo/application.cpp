// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "application.hpp"

#include "company.hpp"
#include "computer.hpp"
#include "employee.hpp"

#include <iostream>
#include <cassert>
#include <unordered_set>

/*****************************************************************************/


Application::Application ()
{
	m_pCompany = nullptr;
}


/*****************************************************************************/


Application::~Application ()
{
	delete m_pCompany;
}


/*****************************************************************************/


void
Application::generateTestModel ()
{
	assert( ! m_pCompany );

	// Create new company instance
	m_pCompany = new Company( "Roga & Kopyta Enterprises" );

	// Create 5 different computers
	Computer * pComputer1 = new Computer( 1, Computer::_64Bit, "Intel I7-4770", 16 );
	Computer * pComputer2 = new Computer( 2, Computer::_32Bit, "AMD Athlon X2 4050e", 2 );
	Computer * pComputer3 = new Computer( 3, Computer::_32Bit, "Intel Core2 Quad 6600", 4 );
	Computer * pComputer4 = new Computer( 4, Computer::_32Bit, "Intel Pentium 3 400", 1 );
	Computer * pComputer5 = new Computer( 5, Computer::_64Bit, "Intel I5-2500", 6 );

	// Register computers within the company
	m_pCompany->addComputer( pComputer1 );
	m_pCompany->addComputer( pComputer2 );
	m_pCompany->addComputer( pComputer3 );
	m_pCompany->addComputer( pComputer4 );
	m_pCompany->addComputer( pComputer5 );

	// Create 5 different employees
	Employee * pEmployee1 = new Employee( "Ivanov I.I.",   "ivanov@company.com"   );
	Employee * pEmployee2 = new Employee( "Petrov P.P.",   "petrov@company.com"   );
	Employee * pEmployee3 = new Employee( "Sidorov S.S.",  "sidorov@company.com"  );
	Employee * pEmployee4 = new Employee( "Fedorov F.F.",  "fedorov@company.com"  );
	Employee * pEmployee5 = new Employee( "Dmitriev D.D.", "dmitriev@company.com" );
	
	// Register employees within the company
	m_pCompany->addEmployee( pEmployee1 );
	m_pCompany->addEmployee( pEmployee2 );
	m_pCompany->addEmployee( pEmployee3 );
	m_pCompany->addEmployee( pEmployee4 );
	m_pCompany->addEmployee( pEmployee5 );

	// Associate employees and computers:
	//

	// 1) Ivanov uses computer 1 and 2
	pEmployee1->registerComputerUse( * pComputer1 );
	pEmployee1->registerComputerUse( * pComputer2 );
	pComputer1->addUser( * pEmployee1 );
	pComputer2->addUser( * pEmployee2 );

	// 2) Petrov uses computer 1 and 3
	pEmployee2->registerComputerUse( * pComputer1 );
	pEmployee2->registerComputerUse( * pComputer3 );
	pComputer1->addUser( * pEmployee2 );
	pComputer3->addUser( * pEmployee2 );

	// 3) Sidorov reads books

	// 4) Fedorov uses computer 5
	pEmployee4->registerComputerUse( * pComputer5 );
	pComputer5->addUser( * pEmployee4 );

	// 5) Dmitriev uses computer 5
	pEmployee5->registerComputerUse( * pComputer5 );
	pComputer5->addUser( * pEmployee5 );
}


/*****************************************************************************/
	

void 
Application::printEmployeesWithoutComputer () const
{
	std::cout << "1. Employees without computer" << std::endl;
	std::cout << "=======================================" << std::endl;

    int nEmployeesWithoutComputer = 0;
    int nEmployees = m_pCompany->getEmployeesCount();
    for ( int i = 0; i < nEmployees; i++ )
    {
        const Employee & e = m_pCompany->getEmployee( i );
        if ( e.getUsedComputersCount() == 0 )
        {
            ++ nEmployeesWithoutComputer;
            std::cout << "Employee '" << e.getFullName() << 
                         "' is not using computers" << std::endl;
        }
    }

    if ( ! nEmployeesWithoutComputer )
        std::cout << "All employees have a computer" << std::endl;

	std::cout << std::endl;
}


/*****************************************************************************/
	

void 
Application::printComputersWithoutUsers () const
{
	std::cout << "2. Computers without users" << std::endl;
	std::cout << "=======================================" << std::endl;

    int nComputersWithoutUsers = 0;
    int nComputers = m_pCompany->getComputersCount();
    for ( int i = 0; i < nComputers; i++ )
    {
        const Computer & c = m_pCompany->getComputer( i );
        if ( c.getUsersCount() == 0 )
        {
            ++ nComputersWithoutUsers;
            std::cout << "Computer '#" << c.getInventoryID() << 
                         "' is not used by anyone" << std::endl;
        }
    }

    if ( ! nComputersWithoutUsers )
        std::cout << "All computers are used" << std::endl;

	std::cout << std::endl;
}


/*****************************************************************************/


void 
Application::printEmployeesWithBiggestRamComputers () const
{
	std::cout << "3. Users having computers with biggest amount of RAM" << std::endl;
	std::cout << "=======================================" << std::endl;

	int biggestRam = 0;
    std::unordered_set< const Employee * > resultEmployees;

    int nComputers = m_pCompany->getComputersCount();
    for ( int i = 0; i < nComputers; i++ )
    {
        const Computer & c = m_pCompany->getComputer( i );
        if ( c.getRamGigabytes() > biggestRam )
        {
            biggestRam = c.getRamGigabytes();
            resultEmployees.clear();
        }

        if ( c.getRamGigabytes() == biggestRam )
        {
            int nUsers = c.getUsersCount();
            for ( int k = 0; k < nUsers; k++ )
                resultEmployees.insert( & c.getUser( k ) );
        }
    }

    if ( resultEmployees.empty() )
        std::cout << "No data about biggest RAM users" << std::endl;

    else
    {
        std::cout << resultEmployees.size() << 
          " users are using computers with biggest RAM ( " <<
           biggestRam << " Gb ):" << std::endl;

        auto it = resultEmployees.begin();
        while ( it != resultEmployees.end() )
        {
            const Employee & e = ** it;
            std::cout << "- Employee '" << e.getFullName() << "'" << std::endl;
            ++ it;
        }
    }

	std::cout << std::endl;
}


/*****************************************************************************/


void 
Application::print64BitComputersWithMemoryShortage () const
{
	std::cout << "4. 64-bit machines with memory shortage" << std::endl;
	std::cout << "=======================================" << std::endl;

	int nMatchedComputers = 0;
    int nComputers = m_pCompany->getComputersCount();
    for ( int i = 0; i < nComputers; i++ )
    {
        const Computer & c = m_pCompany->getComputer( i );
        if ( c.getArchitecture() == Computer::_64Bit &&
             c.getRamGigabytes() < 8 &&
             c.getUsersCount() >= 2 )
        {
            nMatchedComputers++;
            std::cout << "64-bit Computer #" << c.getInventoryID() << 
                         " with " << c.getUsersCount() << " users" << 
                         " has a memory shortage (only "           << 
                         c.getRamGigabytes() << " Gb RAM)" << std::endl;
        }
    }

    if ( ! nMatchedComputers )
        std::cout << "All 64-bit computers have enough memory." << std::endl;

	std::cout << std::endl;
}


/*****************************************************************************/
