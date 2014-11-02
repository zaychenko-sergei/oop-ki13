// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "controller.hpp"

#include <cassert>

/*****************************************************************************/


Controller::Controller ()
{
	// TODO - any required initialization...
}


/*****************************************************************************/


Controller::~Controller ()
{
	// TODO - destroy the model...
}


/*****************************************************************************/


void
Controller::startParentNode ( std::string const & _text )
{
	// TODO - creates a parent node inside current parent or at the root level
	// Next nodes should become children of this node until call to endParentNode

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void 
Controller::addLeafNode ( std::string const & _text )
{
	// TODO - creates a leaf node inside current parent or at the root level

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void 
Controller::endParentNode ()
{
	// TODO - finishes creating of most recently open parent node.

	// Possible problems:
	//  - we are at the root of hierarchy ( Messages::DidNotOpenParentPreviously )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void 
Controller::makeInvisible ( NodePath const & _path )
{
	// TODO - locate the node and make it invisible
	// Ignore if it is invisible already

	// Possible problems:
	//  - node with the given path is not found ( Messages::NodePathUnresolved )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void 
Controller::makeVisible ( NodePath const & _path )
{
	// TODO - locate the node and make it visible
	// Ignore if it is visible already

	// Possible problems:
	//  - node with the given path is not found ( Messages::NodePathUnresolved )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void 
Controller::expand ( NodePath const & _path )
{
	// TODO - locate the parent node and expand it.
	// Ignore if it is a leaf node or a parent node that is already expanded

	// Possible problems:
	//  - node with the given path is not found ( Messages::NodePathUnresolved )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


void 
Controller::collapse ( NodePath const & _path )
{
	// TODO - locate the parent node and collapse it.
	// Ignore if it is a leaf node or a parent node that is already collapsed

	// Possible problems:
	//  - node with the given path is not found ( Messages::NodePathUnresolved )

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/


bool 
Controller::isVisible ( NodePath const & _path ) const
{
	// TODO - locate the node and check if it is visible

	// Possible problems:
	//  - node with the given path is not found ( Messages::NodePathUnresolved )

	assert( ! "Not implemented yet..." );
	return false;
}


/*****************************************************************************/


bool 
Controller::isExpanded ( NodePath const & _path ) const
{
	// TODO - locate the node and check if it is expanded.
	// Always return false for leaf nodes

	// Possible problems:
	//  - node with the given path is not found ( Messages::NodePathUnresolved )

	assert( ! "Not implemented yet..." );
	return false;
}


/*****************************************************************************/


bool
Controller::isLeaf ( NodePath const & _path ) const
{
	// TODO - locate the node and check if it is a leaf node.

	// Possible problems:
	//  - node with the given path is not found ( Messages::NodePathUnresolved )

	assert( ! "Not implemented yet..." );
	return 0;
}


/*****************************************************************************/


int 
Controller::getChildNodesCount ( NodePath const & _path )
{
	// TODO - locate the parent node and return number of it's children

	// Possible problems:
	//  - node with the given path is not found ( Messages::NodePathUnresolved )
	//  - this node is a leaf ( Messages::NotAParentNode )

	assert( ! "Not implemented yet..." );
	return 0;
}


/*****************************************************************************/


void
Controller::show ( std::ostream & _o )
{
	// TODO - generate a report with tree data
	// For each visible node:
	//   - print N tab characters, where N is a depth of the node
	//   - print text that is associated with the node
	//   - if this node is a parent that is expanded:
	//      - increase the depth
	//      - recursively show the child nodes
	//      - restore the depth

	assert( ! "Not implemented yet..." );
}


/*****************************************************************************/
// Controller::NodePath
/*****************************************************************************/


Controller::NodePath::NodePath ( int _firstIndex )
{
	m_indices.push_back( _firstIndex );
}


/*****************************************************************************/


Controller::NodePath::NodePath ( int _nLevels, const int * _pIndices )
{
	assert( _nLevels > 0 && _pIndices );
	m_indices.insert( m_indices.end(), _pIndices, _pIndices + _nLevels );
}


/*****************************************************************************/


Controller::NodePath & 
Controller::NodePath::pushIndex ( int _nextIndex )
{
	m_indices.push_back( _nextIndex );
	return * this;
}


/*****************************************************************************/


int 
Controller::NodePath::getLevelsCount () const
{
	return m_indices.size();
}


/*****************************************************************************/


int Controller::NodePath::getIndexAtLevel ( int _level ) const
{
	return m_indices.at( _level );
}


/*****************************************************************************/
