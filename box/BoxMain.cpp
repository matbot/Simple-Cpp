/*************************************
 * This be the Box class tester. Argh.
 * **********************************/

#include <iostream>
#include "Box.hpp"
using namespace std;

int main()
{
	double height, length, width;
	cout << "Descibe the box and I'll give you the volume and surface area." << endl;
	cout << "What are the boxes height, length, and width?" << endl;
	cin >> height >> length >> width;
	
//	Box box1;
	Box box2(height, length, width);

//	double volume1 = box1.getVolume();
//	double surface1 = box1.getSurfaceArea();

	double volume2 = box2.getVolume();
	double surface2 = box2.getSurfaceArea();

	cout << volume2 << endl << surface2 << endl;

return 0;
}
