#include <iostream>
#include <cmath>
#include "Point.hpp"

using namespace std;

int main()
{
	Point p1;
	double x, y;
	cout<<"Enter an x and y coordinate:"<<endl;
	cin >> x >> y;

	Point p2(x, y);
	double dist = p1.distanceTo(p2);
	cout <<"Length of line segment between your point and 0,0: "<< dist << endl;
return 0;
}
