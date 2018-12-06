#include <iostream>
#include <cmath>
#include "Point.hpp"
#include "LineSegment.hpp"
using namespace std;
int main()
{
	double x, y;
	cout << "give x and y coord for points one and two:" << endl;
	cin >> x >> y;
	Point p1(x,y);
	cin >> x >> y;
	Point p2(x,y);
	LineSegment ls1(p1,p2);
	double length = ls1.length();
	double slope = ls1.slope();
	cout << length << endl << slope << endl;
return 0;
}
