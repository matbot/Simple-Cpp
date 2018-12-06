/**********************************************
 * Author: Mathew McDade
 * Date: Tue May  3 18:05:42 PDT 2016
 * Description: This is the LineSegment class
 * declaration. It includes all member 
 * variables and function prototypes.
 * *******************************************/
#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

//LineSegment class declaration
class LineSegment
{
	private:
		Point end1;
		Point end2;

	public:
		LineSegment(Point,Point);

		void setEnd1(Point);
		Point getEnd1() const;
		
		void setEnd2(Point);
		Point getEnd2() const;

		double length();
		double slope();
};

#endif
