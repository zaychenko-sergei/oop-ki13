#include "company.hpp"
#include "computer.hpp"
#include "employee.hpp"

//************************************************************************

Company::Company ( std::string const & _name )
	:	m_name( _name )
{
}

//************************************************************************

Company::~Company ()
{
    int nComputers = getComputersCount();
    for ( int i = 0; i < nComputers; i++ )
        delete m_computers[ i ];

    int nEmployees = getEmployeesCount();
    for ( int i = 0; i < nEmployees; i++ )
        delete m_employees[ i ];
}

//************************************************************************

int Company::getComputersCount () const
{
    return m_computers.size();
}

//************************************************************************
 
int Company::getEmployeesCount () const
{
    return m_employees.size();
}

//************************************************************************

Employee & 
Company::getEmployee ( int _index ) const
{
    return * m_employees.at( _index );
}

//************************************************************************

Computer & 
Company::getComputer ( int _index ) const
{
    return * m_computers.at( _index );
}

//************************************************************************

void Company::addEmployee ( Employee * _pEmployee )
{
    m_employees.push_back( _pEmployee );
}


//************************************************************************

void Company::addComputer ( Computer * _pComputer )
{
    m_computers.push_back( _pComputer );
    
    int inventoryID = _pComputer->getInventoryID();
    if ( m_computersByInventoryID.count( inventoryID ) )
        throw "Computer with such inventory ID is already defined";

    m_computersByInventoryID[ inventoryID ] = _pComputer;
}

//************************************************************************



