#include "employee.hpp"

//************************************************************************

Employee::Employee ( 
         const std::string & _fullName
    ,    const std::string & _email 
)
    :    m_fullName( _fullName )
    ,    m_email( _email )
{
}

//************************************************************************
    
int Employee::getUsedComputersCount () const
{
    return m_usedComputers.size();
}

//************************************************************************
    
const Computer & 
Employee::getUsedComputer ( int _index ) const
{
    return * m_usedComputers.at( _index );
}

//************************************************************************

void Employee::registerComputerUse ( const Computer & _computer )
{
    m_usedComputers.push_back( & _computer );
}

//************************************************************************

