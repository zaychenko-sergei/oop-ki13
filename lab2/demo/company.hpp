#ifndef _COMPANY_HPP_
#define _COMPANY_HPP_

//************************************************************************

#include <string>
#include <vector>
#include <unordered_map>

//************************************************************************

class Employee;
class Computer;

//************************************************************************

class Company
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	Company ( std::string const & _name );

    ~ Company ();

	const std::string & getName () const;

    int getComputersCount () const;
    int getEmployeesCount () const;

    Employee & getEmployee ( int _index ) const;
    Computer & getComputer ( int _index ) const;

    void addEmployee ( Employee * _pEmployee );
    void addComputer ( Computer * _pComputer );

/*-----------------------------------------------------------------*/

private:

/*-----------------------------------------------------------------*/

	Company ( const Company & );
	Company & operator = ( const Company & );

/*-----------------------------------------------------------------*/

	const std::string m_name;

    std::vector< Employee * > m_employees;
    std::vector< Computer * > m_computers;

    std::unordered_map< int, Computer * > m_computersByInventoryID;

/*-----------------------------------------------------------------*/

};

//************************************************************************

inline const std::string &
Company::getName () const
{
	return m_name;
}


//************************************************************************

#endif // _COMPANY_HPP_
