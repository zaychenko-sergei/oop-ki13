// (C) 2013-2014, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _APPLICATION_HPP_
#define _APPLICATION_HPP_

/*****************************************************************************/

class Course;
class Checkpoint;
class Student;

/*****************************************************************************/


class Application
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	Application ();

	~ Application ();

	void generateTestModel ();

	void printStudentsPermittedForExams () const;

	void printCoursesWithEveryonePassed () const;

	void printAverageScoreByCourse () const;

	void printStudentsWithBestAverageScore () const;

/*-----------------------------------------------------------------*/

private:

/*-----------------------------------------------------------------*/

	Application ( const Application & );
	Application & operator = ( const Application & );

/*-----------------------------------------------------------------*/

	// TODO ... declare the top of the object model hierarchy here ...

/*-----------------------------------------------------------------*/

};


/*****************************************************************************/

#endif //  _APPLICATION_HPP_
