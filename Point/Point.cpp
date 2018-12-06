/************************************************************
 * Author: Mathew McDade
 * Date: Sun May  1 21:31:11 PDT 2016
 * Description: Point member function implementation section.
 * *********************************************************/
#include "Point.hpp" 
#include <cmath>

/******************************************
 * 	Point::Point(with parameters)
 * Point class constructor that takes two 
 * doubles and sets them as the x and y-
 * coordinates.
 * ***************************************/

Point::Point(double x, double y)
{
	setXCoord(x);
	setYCoord(y);
}

/************************************
 * 	Point::Point(default)
 * Default constructor sets x and y-
 * coordinate to 0.
 * *********************************/

Point::Point()
{
	setXCoord(0);
	setYCoord(0);
}

/********************************
 * 	Point::setXCoord
 * Sets private variable xCoord.
 * *****************************/

void Point::setXCoord(double x)
	{ xCoord = x; }

/********************************
 * 	Point::setYCood
 * Sets private variable YCoord.
 * *****************************/

void Point::setYCoord(double y)
	{ yCoord = y; }

/*******************************
 * 	Point::getXCoord
 * Returns the value of xCoord.
 * ****************************/

double Point::getXCoord() const
	{ return xCoord; }

/*******************************
 * 	Point::getYCoord
 * Returns the value of YCoord.
 * ****************************/

double Point::getYCoord() const
	{ return yCoord; }

/**********************************
 * 	Point::distanceTo
 * Member function that calculates
 * the distance to a point taken
 * as a parameter by constant
 * reference.
 * *******************************/

double Point::distanceTo(const Point &otherPoint)
{
	return sqrt(pow((otherPoint.getXCoord() - xCoord),2) + pow((otherPoint.getYCoord() - yCoord),2));
}
