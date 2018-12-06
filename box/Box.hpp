/***********************************
 * Author: Mathew McDade
 * Date: Mon Apr 25 16:28:15 PDT 2016
 * Description: This is the Box class
 * declaration. It includes all member
 * variable and function prototypes.
 * **********************************/
#ifndef BOX_HPP //if not defined preprocessor directive to prevent
#define BOX_HPP //Box.hpp from being included twice.

//Box class declaration
class Box
{
	private:
		double height;
		double length;
		double width;

	public:		//Member function prototypes
		Box(double, double, double); //Constructor called with parameters
		Box(); //Default constructor

		void setHeight(double); //Set methods
		void setLength(double);
		void setWidth(double);

		double getVolume(); //Get methods
		double getSurfaceArea();
};
#endif
