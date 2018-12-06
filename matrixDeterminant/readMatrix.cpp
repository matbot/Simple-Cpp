/*************************************************************************
 * *Author: Mathew McDade
 * *Date: Tue Sep 27 20:57:01 PDT 2016 
 * *Description: readMatrix function definition. Should work for any size of array.
 * **************************************************************************/
#include <iostream>
#include <cmath>
#include "readMatrix.hpp"

using std::cin;
using std::cout;
using std::endl;

int readMatrix(int matrixSize, int** matrix)
{
	   cout << "Please enter " << pow(matrixSize,2) << " values:" << endl;
	   for(int i=0; i<matrixSize; i++)
			 for(int j=0; j<matrixSize; j++)
			 {
				    int value;
				    cin >> value;
				    matrix[i][j] = value;
			 }
	   return 0;
}
