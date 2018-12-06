/*************************************
 * **Author: Mathew McDade
 * **Date: Tue Apr 12 16:54:43 PDT 2016
 * **Desription: This program will ask the user for a file name, attempt to open
 * the named file containing a list of integers, take the sum of those integers,
 * and output that sum to a file named sum.txt.
 * *************************************/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int readValue, sum = 0, valCounter = 0; //declaring variables that will contain the input and output data; also valCounter will keep track of how many integers are added.
    string filename; //variable to contain user defined filename.

    cout << "Please enter an input file name:"<<endl; //get the filename from the user.
    cin >> filename;

    ifstream inputFile (filename.c_str()); //open the input file using a the c_str member function.
    ofstream outputFile ("sum.txt"); //open the output file.

    if (inputFile) //checks to make sure the input file has opened.
    {
        while (inputFile >> readValue) //this condition will loop until it reaches the end of file, at which point it will become false.
        {
            sum += readValue; //adding the read integer to the sum.
            valCounter++; //incrementing the loop counter.
        }

        outputFile << sum << endl; //writing the final sum to the output file.

        inputFile.close(); //close both input and output file.
        outputFile.close();
    }
    else
        cout << "Error opening file!"<<endl; //a warning if the input file was unable to be opened.

    return 0; //normal program termination.
}
