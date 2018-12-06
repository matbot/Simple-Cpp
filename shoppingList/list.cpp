/*******************************************************
 * *Author: Mathew McDade
 * *Date: Sat Oct 22 16:29:37 PDT 2016
 * *Description: This is the List class implementation.
 * This List class is responsible for most of the 
 * functionality of the shopping list program by 
 * creating, modifying and maintaining a list of Item
 * class objects.
 * ****************************************************/

#include "list.hpp"
#include "utils.hpp"
#include <iostream>
#include <string>
#include <unistd.h> //usleep
#include <iomanip> //output manipulators for printList.

using std::cout;
using std::cin;
using std::endl;
using std::string;

/****************
 * Constructor
 * *************/
List::List()
{
	arraySize = 4;
	arrayItems = 0;
	itemAryPtr = new Item[4]; //the Item array begins with a capacity of 4 objects.
}

/***************
 * Destructor
 * ************/
List::~List()
{
	delete[] itemAryPtr; //frees the dynaically allocated Item objects.
}

/************
 * List Menu
 * *********/
void List::listMenu()
{
	int choice = 0;
	while(choice!=4)
	{
		clearPage();
		usleep(500000);
		cout << "Welcome to Mathew McDade's Shopping List implementation." << endl;
		usleep(500000);

		cout << "Please select from the following options:" << endl;
		cout << "1. Add a new item." << endl;
		cout << "2. Remove an existing item." << endl;
		cout << "3. Print the shopping list." << endl;
		cout << "4. Quit and print list." << endl;

		choice = getInt(1,4);

		switch(choice)
		{
			case 1: addItem();
				   break;
			case 2: removeItem();
				   break;
			case 3: printList();
				   break;
			case 4: printList();
				   return;
		}
	}
}

/**********
 * addItem
 * *******/
void List::addItem()
{
	if(arrayItems==arraySize)
		expandItemArray();

	string name;
	string unit;
	int quantity;
	float price;

	cout << "What item would you like to add?" << endl;
	std::cin.ignore(256,'\n');
	std::getline(cin,name);
	cout << "What units does the item have?" << endl;
	std::getline(cin,unit);
	cout << "How many units do you want to add to the list?" << endl;
	quantity = getInt();
	cout << "What is the price per unit?" << endl;
	price = getFloat(); //new utility function to validate float input.
	itemAryPtr[arrayItems].setItem(name,unit,quantity,price);

	for(int i=0;i<arrayItems;i++)
		if(itemAryPtr[i]==itemAryPtr[arrayItems])	//overloaded == operator.
		{
			clearPage();
			usleep(50000);
			cout << "That item already exists!" << endl;
			usleep(100000);
			cout << "Would you like to:" << endl;
			cout << "1. Add a quantity to the item." << endl;
			cout << "2. Change the quantity." << endl;
			cout << "3. Go back to the main menu." << endl;

			int choice = getInt(1,3);

			switch(choice)
			{
				case 1: itemAryPtr[i].addQuantity();
					   break;
				case 2: itemAryPtr[i].changeQuantity();
					   break;
				case 3: cout << "Back to main menu." << endl;
			}

			itemAryPtr[arrayItems].setItem(" "," ",0,0);
		}
	arrayItems+=1;
}

/***************
 * removeItem
 * ************/
void List::removeItem()
{
	string removeName;
	cout << endl;
	cout << "What item would you like to remove from the list?" << endl;
	std::cin.ignore(256,'\n');
	std::getline(cin,removeName);

	for(int i=0;i<arraySize;i++)
		if(itemAryPtr[i].getName()==removeName)
		{
			cout << "Removing: " << itemAryPtr[i].getName() << endl;
			usleep(50000);
			itemAryPtr[i].setItem(" "," ",0,0);
		}
}

/******************
 * expandItemArray
 * ***************/
void List::expandItemArray()
{
	Item* tempAryPtr = new Item[arraySize+1];

	for(int i=0;i<arraySize;i++)
		tempAryPtr[i] = itemAryPtr[i];

	delete[] itemAryPtr;

	arraySize+=1;

	itemAryPtr = new Item[arraySize];

	for(int i=0;i<arraySize;i++)
		itemAryPtr[i] = tempAryPtr[i];

	delete[] tempAryPtr;
}

/************
 * printList
 * *********/
void List::printList()
{
	clearPage();
	usleep(100000);

	cout << "Shopping List:" << endl << endl;
	cout << "Item    Quantity    Units     Price     Extended Price" << endl;

	float totalPrice = 0;
	for(int i=0;i<arrayItems;i++)
	{
		if(itemAryPtr[i].getQuantity()>0)
		{
			cout<<std::fixed<<std::showpoint<<std::setprecision(2);

			cout<<std::left<<std::setw(11)<<itemAryPtr[i].getName()<<std::setw(11)<<itemAryPtr[i].getQuantity()<<std::setw(8)<<itemAryPtr[i].getUnit()<<std::setw(12)<<itemAryPtr[i].getPrice()<<std::setw(12)<<itemAryPtr[i].getExtPrice()<<endl<<endl;

			totalPrice+=itemAryPtr[i].getExtPrice();
		}
	}

	cout << std::left << "Total Price:" << std::setw(30) << totalPrice << endl << endl;
	cout << "Enter any character to continue." << endl;
	char cont;
	cin >> cont;
}


