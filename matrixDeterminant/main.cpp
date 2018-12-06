/*************************************************************************
 * *Author: Mathew McDade
 * *Date: Tue Sep 27 21:51:37 PDT 2016 
 * *Description: The main program for Lab 1. The program allows the user to
 * pick a matrix size of 2x2 or 3x3, enter values for the matrix--using the
 * readMatrix function--then prints the value of the determinant of that 
 * matrix--using the determinant function. 
 * **************************************************************************/
#include <iostream>
#include "readMatrix.hpp"
#include "determinant.hpp"

int main()
{
	   int matrixSize=0; 

	   std::cout << "Please choose an matrix size:" << std::endl << "Enter '2' for a 2x2 matrix or '3' for a 3x3 matrix:" << std::endl;	
	   std::cin >> matrixSize;

	   int** matrixArray = new int*[matrixSize]; //creates the matrixArray pointer and initializes it
	   for(int i=0;i<matrixSize;i++)			//with the matrix size.
			 matrixArray[i] = new int[matrixSize];	//and again to initialize the second dimension.

	   readMatrix(matrixSize, matrixArray);		//pass to the readMatrix function.

	   determinant(matrixSize, matrixArray);	//pass to the determinant function.

	   for(int i=0;i<matrixSize;i++)			//delete[] to free the memory allocated by new.
			 delete[] matrixArray[i];
	   delete[] matrixArray;

	   return 0;
}
