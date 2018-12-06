/*************************************************
 * Author: Mathew McDade
 * Date: Tue May  3 18:27:57 PDT 2016
 * Description: LineSegment class member function 
 * implementation section.
 * **********************************************/
#include "Point.hpp"
#include "LineSegment.hpp"
#include <cmath>

/***********************************************************
 * 		LineSegment::LineSegment
 * LineSegment class constructor that takes two Point class
 * objects and sets them as the endpoints of the
 * LineSegment class object.
 * ********************************************************/

LineSegment::LineSegment(Point p1, Point p2)
{
	setEnd1(p1);
	setEnd2(p2);
}

/******************************
 * 	LineSegment::setEnd1
 * Sets private variable end1.
 * ***************************/

void LineSegment::setEnd1(Point p1)
	{ end1 = p1; }

/******************************
 * 	LineSegment::setEnd2
 * Sets private variable end2.
 * ***************************/

void LineSegment::setEnd2(Point p2)
	{ end2 = p2; }

/*************************************
 * 	LineSegment::getEnd1
 * Returns the private variable end1.
 * **********************************/

Point LineSegment::getEnd1() const
	{ return end1; }

/**************************************
 * 	LineSegment::getEnd2
 * Returns the private variable end2.
 * ***********************************/

Point LineSegment::getEnd2() const
	{ return end2; }

/****************************************
 * 	LineSegment::length
 * Returns the length of the LineSegment
 * object.
****************************************/

double LineSegment::length()
	{ return end1.distanceTo(end2); }

/*****************************************
 * 	LineSegment::slope
 * Returns the slope of the LineSegment
 * object.
 * *************************************/

double LineSegment::slope()
{
	return ((end2.getYCoord() - end1.getYCoord()) / (end2.getXCoord() - end1.getXCoord()));
}
