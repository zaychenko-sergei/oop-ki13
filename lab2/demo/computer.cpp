#include "computer.hpp"

//************************************************************************

Computer::Computer ( 
         int _inventoryID
    ,    Architecture _architecture
    ,    const std::string & _processorModel
    ,    int _ramGigabytes
)
    :    m_inventoryID( _inventoryID )
    ,    m_architecture( _architecture )
    ,    m_processorModel( _processorModel )
    ,    m_ramGigabytes( _ramGigabytes )
{
}

//************************************************************************

int Computer::getUsersCount () const
{
    return m_users.size();
}

//************************************************************************

const Employee & 
Computer::getUser ( int _index ) const
{
    return * m_users.at( _index );
}


//************************************************************************

void Computer::addUser ( const Employee & _user )
{
    m_users.push_back( & _user );
}

//************************************************************************

