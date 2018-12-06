/*************************************************************************
 * *Author: Mathew McDade
 * *Date: Tue Sep 27 20:57:06 PDT 2016
 * *Description: determinant function definition for 2x2 and 3x3 2-dimensional arrays.
 * **************************************************************************/
#include <iostream>
#include "determinant.hpp"

int determinant(int matrixSize, int** matrix)
{
	   int determinant = 0;
	   if(matrixSize==2)
			 determinant=(matrix[0][0]*matrix[1][1])-(matrix[1][0]*matrix[0][1]);
	   else if(matrixSize==3)
			 determinant=((matrix[0][0]*matrix[1][1]*matrix[2][2])+(matrix[0][1]*matrix[1][2]*matrix[2][0])+(matrix[0][2]*matrix[1][0]*matrix[2][1]))-((matrix[0][0]*matrix[1][2]*matrix[2][1])+(matrix[0][1]*matrix[1][0]*matrix[2][2])+(matrix[0][2]*matrix[2][0]*matrix[1][1]));
	   else	
	   {
			//because readMatrix allows for the creation of a matrix larger than 3x3, the else condition
			//here tells the user that the determinant can't be calculated by this function.
			std::cout << "Too much matrix." << std::endl;
			return 0;
	   }
	   std::cout << "The determinant of your matrix," << std::endl << std::endl;
	   for(int i=0;i<matrixSize;i++)
	   {
			 for(int j=0;j<matrixSize;j++)
				    std::cout << matrix[i][j] << "  ";
			 std::cout << std::endl << std::endl;
	   }
	   std::cout << std::endl << "is " << determinant << std::endl << std::endl;
	   return 0;
}
