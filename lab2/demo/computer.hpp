#ifndef _COMPUTER_HPP_
#define _COMPUTER_HPP_

//************************************************************************

#include <string>
#include <vector>

//************************************************************************

class Employee;

//************************************************************************

class Computer
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	enum Architecture { _32Bit, _64Bit };

/*-----------------------------------------------------------------*/

    Computer ( 
             int _inventoryID
        ,    Architecture _architecture
        ,    const std::string & _processorModel
        ,    int _ramGigabytes 
    );

    int getInventoryID () const;

    Architecture getArchitecture () const;

    const std::string & getProcessorModel () const;

    int getRamGigabytes () const;

    int getUsersCount () const;
    
    const Employee & getUser ( int _index ) const;

    void addUser ( const Employee & _user );

/*-----------------------------------------------------------------*/

private:

/*-----------------------------------------------------------------*/

	Computer ( const Computer & );
    Computer & operator = ( const Computer & );

/*-----------------------------------------------------------------*/

    const int m_inventoryID;
    const Architecture m_architecture;
    const std::string m_processorModel;
    const int m_ramGigabytes;

    std::vector< const Employee * > m_users;

/*-----------------------------------------------------------------*/

};

//************************************************************************

inline 
int Computer::getInventoryID () const
{
    return m_inventoryID;
}

//************************************************************************
    
inline 
Computer::Architecture 
Computer::getArchitecture () const
{
    return m_architecture;
}

//************************************************************************

inline
const std::string & 
Computer::getProcessorModel () const
{
    return m_processorModel;
}

//************************************************************************

inline
int Computer::getRamGigabytes () const
{
    return m_ramGigabytes;
}

//************************************************************************

#endif //  _COMPUTER_HPP_
