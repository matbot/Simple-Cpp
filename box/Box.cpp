/**********************************************************
 * Author: Mathew McDade
 * Date: Mon Apr 25 17:44:53 PDT 2016
 * Description: Box member function implementation section.
 * ********************************************************/
#include "Box.hpp" //Including the Box class declaration file.

/************************************
 * 	Box:Box(with parameters)
 * This is the Box constructor that 
 * takes three double variables as
 * parameters and passes them to set
 * methods for the Box class.
 * ********************************/

Box::Box(double h, double l, double w)
{
	setHeight(h);
	setLength(l);
	setWidth(w);
}

/************************************
 * 	Box::Box(default)
 * This is the Box default constructor.
 * It initializes the height, length
 * and width variables to default
 * values if the Box constructor is 
 * called without arguments.
 * **********************************/

Box::Box()
{
	height = 1.0;
	length = 1.0;
	width = 1.0;
}

/***********************************
 * 	Box::setHeight
 * Sets the private variable height.
 * ********************************/

void Box::setHeight(double h)
	{ height = h; }

/***********************************
 * 	Box::setLength
 * Sets the private variable length.
 * ********************************/

void Box::setLength(double l)
	{ length = l; }

/***********************************
 * 	Box::setWidth
 * Sets the private variable width.
 * ********************************/

void Box::setWidth(double w)
	{ width = w; }

/************************************
 * 	Box::getVolume
 * Member function to calculate the 
 * volume of the Box.
 * *********************************/

double Box::getVolume()
{
	return length * width * height;
}

/***********************************
 * 	Box::getSurfaceArea
 * Member function to calculate the 
 * surface area of the Box.
 * ********************************/

double Box::getSurfaceArea()
{
	return (2 * length * width) + (2 * length * height) + (2 * width * height);
}
