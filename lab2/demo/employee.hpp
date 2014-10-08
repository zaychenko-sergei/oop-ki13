#ifndef _EMPLOYEE_HPP_
#define _EMPLOYEE_HPP_

//************************************************************************

#include <string>
#include <vector>

//************************************************************************

class Computer;

//************************************************************************

class Employee
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

    Employee ( 
             const std::string & _fullName
        ,    const std::string & _email 
    );

    const std::string & getFullName () const;

    const std::string & getEmail () const;

    int getUsedComputersCount () const;

    const Computer & getUsedComputer ( int _index ) const;

    void registerComputerUse ( const Computer & _computer );

/*-----------------------------------------------------------------*/

private:

/*-----------------------------------------------------------------*/

    const std::string m_fullName;
    const std::string m_email;

    std::vector< const Computer * > m_usedComputers;

/*-----------------------------------------------------------------*/

};

//************************************************************************

inline
const std::string & 
Employee::getFullName () const
{
    return m_fullName;
}

//************************************************************************

inline
const std::string &
Employee::getEmail () const
{
    return m_email;
}

//************************************************************************

#endif // _EMPLOYEE_HPP_
