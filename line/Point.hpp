/****************************************
 * Author: Mathew McDade
 * Date: Sun May  1 20:50:24 PDT 2016
 * Description: This is the Point class
 * declaration. It includes all member 
 * variables and function prototypes.
 * *************************************/
#ifndef POINT_HPP 
#define POINT_HPP

//Point class declaration
class Point
{
	private:
		double xCoord;
		double yCoord;

	public:
		Point(double,double);
		Point();
		
		void setXCoord(double);
		double getXCoord() const;

		void setYCoord(double);
		double getYCoord() const;

		double distanceTo(const Point&);
};

#endif
