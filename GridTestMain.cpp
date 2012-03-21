// GridTestMain.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GridT.h"
#include "Person.h"
#include <iostream>
//#include <sstream>

using namespace std;



int main()
{
	GridT<int> myGrid;
	cout << myGrid;
	getchar();
	GridT<Person> people;
	people[0][0]=Person("dave",18);
	cout << people;
	getchar();
	return 0;
}

