// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _CONTROLLER_HPP_
#define _CONTROLLER_HPP_

/*****************************************************************************/

#include <string>
#include <vector>
#include <ostream>

/*****************************************************************************/


class Controller
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	class NodePath
	{
		std::vector< int > m_indices;

	public:

		NodePath ( int _firstIndex );

		NodePath ( int _nLevels, const int * _pIndices );

		NodePath & pushIndex ( int _nextIndex );

		int getLevelsCount () const;

		int getIndexAtLevel ( int _level ) const;
	};

/*-----------------------------------------------------------------*/


	Controller ();

	~ Controller ();

	void startParentNode ( std::string const & _text );

	void addLeafNode ( std::string const & _text );

	void endParentNode ();

	void makeInvisible ( NodePath const & _path );

	void makeVisible ( NodePath const & _path );

	void expand ( NodePath const & _path );

	void collapse ( NodePath const & _path );

	bool isVisible ( NodePath const & _path ) const;

	bool isExpanded ( NodePath const & _path ) const;

	bool isLeaf ( NodePath const & _path ) const;

	int getChildNodesCount ( NodePath const & _path );

	void show ( std::ostream & _o );

/*-----------------------------------------------------------------*/

private:

/*-----------------------------------------------------------------*/

	Controller ( const Controller & );
	Controller & operator = ( const Controller & );

/*-----------------------------------------------------------------*/

	// TODO .. declare the top of the object model hierarchy here ...

/*-----------------------------------------------------------------*/

};


/*****************************************************************************/

#endif //  _CONTROLLER_HPP_
