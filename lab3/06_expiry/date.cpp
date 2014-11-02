#include "date.hpp"

#include <ctime>
#include <cassert>
#include <cstdio>

/*****************************************************************************/


Date::Date ()
{
	// Выясняем текущее системное время
	time_t currentTime = time( nullptr );

	// Используем функции стандартной библиотеки для 
	// декодирования компонентов времени к удобному виду
	tm* currentTM = gmtime( &currentTime );

	m_year  = currentTM->tm_year + 1900;
	m_month = currentTM->tm_mon + 1;
	m_day   = currentTM->tm_mday;

	// Проверяем инвариант
	if ( ! isValid() )
		throw "Error: date is not valid!";
}


/*****************************************************************************/


Date::Date ( int _year, int _month, int _day )
{
	// Копируем компоненты даты
	m_year  = _year;
	m_month = _month;
	m_day   = _day;

	// Проверяем инвариант
	if ( ! isValid() )
		throw "Error: date is not valid!";
}


/*****************************************************************************/


Date::Date ( const char * _yyyyMMDD, char _sep )
{
	// Пытаемся распознать строковое представление даты по шаблону.
	// Функция sscanf возвращает число успешно обнаруженных частей шаблона.
	char sep1, sep2;
	int nMatched = sscanf( _yyyyMMDD, "%d%c%d%c%d", & m_year, & sep1, & m_month, & sep2, & m_day );
	
	// Формат должен быть корректным - 3 целых поля + 2 корректных разделителя
	if ( nMatched != 5 || sep1 != _sep || sep2 != _sep )
		throw "Error: date format is incorrect!";

	// Проверяем инвариант
	if ( ! isValid() )
		throw "Error: date is not valid!";
}


/*****************************************************************************/


bool Date::isValid () const
{
	// Год не должен быть равен нулю
	if ( m_year == 0 )
		return false;

	// Месяц должен находиться в интервале от января до декабря
	if ( m_month < 1 || m_month > 12 )
		return false;

	// Дни обязаны быть положительными
	if ( m_day < 1 )
		return false;

	// В феврале високосного года 29 дней
	else if ( m_month == 2 && isLeapYear() )
		return m_day <= 29;

	else
	{
		// В каждой ячейке таблицы храним максимальное количество дней в месяце.
		static const int s_daysInMonth[] = { 
			31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 
		};

		// Проверяем количество дней в остальных случаях по таблице.
		// Используем выражение m_month - 1 в качестве индекса месяца в таблице
		return m_day <= s_daysInMonth[ m_month - 1 ];
	}
}


/*****************************************************************************/


bool Date::isLeapYear () const
{
	if ( m_year % 4 != 0 )
		return false;

	else if ( m_year % 100 == 0 )
		return ( m_year % 400 == 0 );

	return true;
}


/*****************************************************************************/


const char *
Date::getAsString ( char _sep ) const
{
	static char s_buf[ 20 ];
	sprintf( s_buf, "%d%c%d%c%d", getYear(), _sep, getMonth(), _sep, getDay() );
	return s_buf;
}


/*****************************************************************************/


bool
Date::operator == ( const Date & d ) const
{
	return getYear() == d.getYear() && 
		   getMonth() == d.getMonth() &&
		   getDay() == d.getDay();
}


/*****************************************************************************/


bool
Date::operator != ( const Date & d ) const
{
	return !( * this == d );
}


/*****************************************************************************/


bool
Date::operator < ( const Date & d ) const
{
	if ( m_year < d.getYear() )
		return true;

	else if ( m_year == d.getYear() )
	{
		if ( m_month < d.getMonth() )
			return true;

		else if ( m_month == d.getMonth() )
			return m_day < d.getDay();
	}

	return false;

}


/*****************************************************************************/


bool Date::operator > ( const Date & d ) const
{
	return d < * this;
}


/*****************************************************************************/


bool Date::operator <= ( const Date & d ) const
{
	return ( * this < d ) || ( * this == d );
}


/*****************************************************************************/


bool Date::operator >= ( const Date & d ) const
{
	return ( d < * this ) || ( * this == d );
}


/*****************************************************************************/
