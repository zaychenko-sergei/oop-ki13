// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _DATE_HPP_
#define _DATE_HPP_

/*****************************************************************************/


class Date
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	Date ();

	Date ( int _year, int _month, int _day );

	Date ( const char* _yyyyMMDD, char _sep = '/' );

	int getYear () const;
	int getMonth () const;
	int getDay () const;

	bool isLeapYear () const;

	const char * getAsString ( char _sep = '/' ) const;

	bool operator == ( const Date & d ) const;
	bool operator != ( const Date & d ) const;
	bool operator < ( const Date & d ) const; 
	bool operator <= ( const Date & d ) const; 
	bool operator > ( const Date & d ) const; 
	bool operator >= ( const Date & d ) const; 

/*-----------------------------------------------------------------*/
   
private:  

/*-----------------------------------------------------------------*/

	bool isValid () const;

/*-----------------------------------------------------------------*/

	int m_year, m_month, m_day;

/*-----------------------------------------------------------------*/

};


/*****************************************************************************/


inline int Date::getYear () const
{
	return m_year;
}


/*****************************************************************************/


inline int Date::getMonth () const
{
	return m_month;
}


/*****************************************************************************/


inline int Date::getDay () const
{
	return m_day;
}


/*****************************************************************************/

#endif //  _DATE_HPP_
