/*************************************
 * This be the Box class tester. Argh.
 * **********************************/

#include <iostream>
#include "Box.hpp"
using namespace std;

int main()
{
	double height, length, width;
	cout << "Give, me, them, digits!" << endl;
	cin >> height >> length >> width;
	
	Box box1;
	Box box2(height, length, width);

	double volume1 = box1.getVolume();
	double surface1 = box1.getSurfaceArea();

	double volume2 = box2.getVolume();
	double surface2 = box2.getSurfaceArea();

	cout << volume1 << endl << surface1 << endl << volume2 << endl << surface2 << endl;

return 0;
}
