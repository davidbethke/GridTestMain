// GridTestMain.cpp : Defines the entry point for the console application.
//ITSE 2431 Lab:5
//Dave Bethke
// Problem 1 c,d
// Should work

#include "stdafx.h"
#include "GridT.h"
#include "Person.h"
#include <iostream>
//#include <sstream>

using namespace std;



int main()
{
	GridT<int> myGrid;
	myGrid[8][8]=8;
	cout << myGrid;
	getchar();
	GridT<Person> people;
	people[0][0]=Person("dave",18);
	cout << people;
	getchar();
	GridT<string> myStrings;
	myStrings[0][0]="String1";
	cout<< myStrings;

	for(int i=0; i<10;++i)
		for(int j=0;j<10;++j)
			if(i==j)
				myStrings[i][j]="X";
			else
				myStrings[i][j]="O";

	cout << myStrings;
	getchar();
	return 0;
}

