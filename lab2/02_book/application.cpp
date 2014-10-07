// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "application.hpp"

#include <iostream>

/*****************************************************************************/


Application::Application ()
{
	// TODO - any required initialization...
}


/*****************************************************************************/


Application::~Application ()
{
	// TODO - destroy the model...
}


/*****************************************************************************/


void
Application::generateTestModel ()
{
	// TODO - Generate test model objects here and attach them to application...
}


/*****************************************************************************/


void
Application::printLeafChaptersCount () const
{
	std::cout << "1. Leaf chapters count" << std::endl;
	std::cout << "=======================================" << std::endl;

	int nLeafChaptersCount = 0;

	// TODO ...

	std::cout << "Total - " << nLeafChaptersCount << std::endl << std::endl;
}


/*****************************************************************************/


void
Application::printMaxChapterDepthLevel () const
{
	std::cout << "2. Max chapter depth" << std::endl;
	std::cout << "=======================================" << std::endl;

	int nMaxChapterDepth = 0;

	// TODO ...

	std::cout << "Total - " << nMaxChapterDepth << std::endl << std::endl;
}


/*****************************************************************************/


void
Application::printLongest2ndLevelChapterName () const
{
	std::cout << "3. Longest 2nd level chapter name" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/


void 
Application::printChapterNameWithBiggestSubchaptersCount () const
{
	std::cout << "4. Biggest subchapters count" << std::endl;
	std::cout << "=======================================" << std::endl;

	// TODO ...

	std::cout << std::endl;
}


/*****************************************************************************/
