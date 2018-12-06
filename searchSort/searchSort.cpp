/*******************************************************
 * *Author: Mathew McDade
 * *Date: Sun Nov 13 03:10:47 PST 2016
 * *Description: searchSort functions implementation.
 * ***************************************************/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "searchSort.hpp"
#include "utils.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;
using std::ofstream;
using std::swap;

/**************
 * mainMenu()
***************/
void mainMenu()
{
	createFiles();
	clearPage();
	int choice = 0;
	while(choice!=4)
	{
		clearPage();
		cout << "Welcome to Mathew McDade's file search and sort implementation." << endl << endl;
		cout << "Please select from the following options:" << endl;
		cout << "1. Perform a linear search on an unsorted file." << endl;
		cout << "2. Perform a quicksort on an unsorted file." << endl;
		cout << "3. Perform a binary search on a sorted file of ints." << endl;
		cout << "4. Quit." << endl << endl;
		cout << "Enter your choice: ";

		choice = getInt(1,4);
		switch(choice){
			case 1: searchFilesMenu();
				   break;
			case 2: sortFilesMenu();
				   break;
			case 3: bSearchMenu();
				   break;
			case 4: return; }
	}
}

/****************
 * createFiles()
 * *************/
void createFiles()
{
	ofstream sortedIntsOf("intsSorted.txt");
	for(int i=0;i<=50;i++)
		sortedIntsOf << i << endl;
	sortedIntsOf.close();

	ofstream intsOf("ints.txt");
	ofstream intsEarlyOf("intsEarly.txt");
	ofstream intsMidOf("intsMid.txt");
	ofstream intsLateOf("intsLate.txt");

	intsEarlyOf << 0 << endl;
	for(int i=0;i<25;i++)
	{
		int num = randInt(1,9);
		intsOf << num << endl;
		intsEarlyOf << num << endl;
		intsMidOf << num << endl;
		intsLateOf << num << endl;
	}
	intsMidOf << 0 << endl;
	for(int i=0;i<25;i++)
	{
		int num = randInt(1,9);
		intsOf << num << endl;
		intsEarlyOf << num << endl;
		intsMidOf << num << endl;
		intsLateOf << num << endl;
	}
	intsLateOf << 0 << endl;

	intsOf.close();
	intsEarlyOf.close();
	intsMidOf.close();
	intsLateOf.close();
}

/********************
 * searchFilesMenu()
 * *****************/
void searchFilesMenu()
{
	clearPage();
	int choice = 0;
	while(choice!=5)
	{
		cout << "Which unsorted file would you like to search for the target value 0?" << endl;
		cout << "1. Early 0 file." << endl;
		cout << "2. Middle 0 file." << endl;
		cout << "3. Late 0 file." << endl;
		cout << "4. No 0 file." << endl;
		cout << "5. Return to main menu." << endl << endl;

		int foundOnLine = 0;
		choice = getInt(1,5);
		switch(choice){
			case 1: {
				ifstream intsEarlyIf("intsEarly.txt");
				foundOnLine = searchFile(intsEarlyIf);
				intsEarlyIf.close();
				break; }
			case 2: {
				ifstream intsMidIf("intsMid.txt");
				foundOnLine = searchFile(intsMidIf);
				intsMidIf.close();
				break; }
			case 3: {
				ifstream intsLateIf("intsLate.txt");
				foundOnLine = searchFile(intsLateIf);
				intsLateIf.close();
				break; }
			case 4: {
				ifstream intsIf("ints.txt");
				foundOnLine = searchFile(intsIf);
				intsIf.close();
				break; }
			case 5: return; }
		if(foundOnLine>0)
		{
			cout << "The target value, 0, was found on line " << foundOnLine  
				<< " of the text file." << endl << endl;
		}
		else
			cout << "The target value, 0, was not found." << endl << endl;
	}
}

/*******************************************************************
 * searchFile(): basic linear search, did not reference from text.
 * *****************************************************************/
int searchFile(ifstream &intsIfs)
{
	int fileVal;
	int currentLine = 1;
	if(intsIfs)
		while(intsIfs >> fileVal)
		{
			if(fileVal==0)
				return currentLine;
			currentLine++;
			cout << ".";
		}
	else
		cout << "Error loading file stream!" << endl;
	return 0;
}

/*************************
 * sortFilesMenu()
 * **********************/
void sortFilesMenu()
{
	clearPage();
	int choice = 0;
	while(choice!=5)
	{
		cout << "Which unsorted file would you like to perform a quicksort on?" << endl;
		cout << "1. Early 0 file." << endl;
		cout << "2. Middle 0 file." << endl;
		cout << "3. Late 0 file." << endl;
		cout << "4. No 0 file." << endl;
		cout << "5. Return to main menu." << endl << endl;

		int fileVal;
		vector<int> myVec;
		choice = getInt(1,5);
		switch(choice){
			case 1:{
				ifstream intsEarlyIf("intsEarly.txt");
				while(intsEarlyIf >> fileVal)
				{
					cout << fileVal << " ";
					myVec.push_back(fileVal);
				}
				intsEarlyIf.close();
				break; }
			case 2:{
				ifstream intsMidIf("intsMid.txt");
				while(intsMidIf >> fileVal)
				{
					cout << fileVal << " ";
					myVec.push_back(fileVal);
				}
				intsMidIf.close();
				break; }
			case 3:{
				ifstream intsLateIf("intsLate.txt");
				while(intsLateIf >> fileVal)
				{
					cout << fileVal << " ";
					myVec.push_back(fileVal);
				}
				intsLateIf.close();
				break; }
			case 4:{
				ifstream intsIf("ints.txt");
				while(intsIf >> fileVal)
				{
					cout << fileVal << " ";
					myVec.push_back(fileVal);
				}
				intsIf.close();
				break; }
			case 5: return; }
		cout << endl;
		quickSort(myVec, 0, myVec.size()-1);

		cout << "What filename would you like to write the sorted data to?" << endl;
		cout << "Please enter in format, filename.txt" << endl;
		string fileName;
		cin >> fileName;
		cout << "Writing sorted data to file: " << fileName << ". . ." << endl;
		ofstream userFile(fileName.c_str());
		if(userFile)
		{
			for(int i=0;i<myVec.size();i++)
			{
				cout << myVec[i] << " ";
				userFile << myVec[i] << endl;
			}
			userFile.close();
		}
	}
}

/*******************************************************************************************
 * partition() and quickSort()  //a quicksort implementation from C++ Early Objects p.914.
 * *****************************************************************************************/
int partition(vector<int> &fileVector, int start, int end)
{
	int pivotVal = fileVector[start];
	int pivotPos = start;

	for(int pos=start+1;pos<=end;pos++)
	{
		if(fileVector[pos]<pivotVal)
		{
			swap(fileVector[pivotPos+1],fileVector[pos]);
			swap(fileVector[pivotPos],fileVector[pivotPos+1]);
			pivotPos++;
		}
	}
	return pivotPos;
}

void quickSort(vector<int> &fileVector, int start, int end)
{
	if(start<end)
	{
		int pivot = partition(fileVector,start,end);
		quickSort(fileVector,start,pivot-1);
		quickSort(fileVector,pivot+1,end);
	}
}

/****************
 * bSearchMenu()
 * **************/
void bSearchMenu()
{
	clearPage();

	ifstream sortedFileIfs("intsSorted.txt");
	vector<int> sortedVec;
	int fileVal;
	if(sortedFileIfs)
		while(sortedFileIfs >> fileVal)
			sortedVec.push_back(fileVal);
	sortedFileIfs.close();

	int choice = 0;
	while(choice!=2)
	{
		cout << "Would you like to:" << endl;
		cout << "1. Search for an int value in the sorted int file." << endl;
		cout << "2. Return to the main menu." << endl << endl;
		
		choice = getInt(1,2);

		switch(choice){
			case 1:{
				cout << "What value would you like to search for?" << endl;
				int searchVal = getInt();
				int foundOnLine = bSearch(sortedVec,searchVal);
				if(foundOnLine>0)
					cout << "The search value " << searchVal << " was found on line " 
						<< foundOnLine << "." << endl << endl;
				else
					cout << "The search value " << searchVal << " was not found." << endl << endl;
				break; }
			case 2: return; }
	}
}

/*****************************************************************
 * bSearch(): implementation taken from C++ Early Objects p.599
 * **************************************************************/
int bSearch(vector<int> myVec, int searchValue)
{
	int first = 0;
	int last = myVec.size()-1;
	int middle;
	int position = -1;
	bool found = false;

	while(!found && first <= last)
	{
		middle = (first + last) / 2;
		if(myVec[middle]==searchValue)
		{
			found = true;
			position = middle;
		}
		else if(myVec[middle]<searchValue)
			first = middle+1;
		else
			last = middle-1;
	}
	return position+1;
}
