// GridTestMain.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GridT.h"
#include "GridTHelper.h"
#include "ArrayTHelper.h"
#include <iostream>
#include <sstream>

using namespace std;
/*
template<typename T>
std::ostream &operator<<( std::ostream &os,  ArrayT<T> &a ) 
{
	a.print(os);
   return os; // enables cout << x << y;
} //
template<typename T>
std::istream & operator>>(std::istream &is, ArrayT<T> &a)
{
	a.input(is);
	return is;
}
*/
class Person;
ostream & operator<<(std::ostream &, Person &);
istream & operator>>(istream &, Person &);
class Person
{
	friend std::ostream & operator<<(std::ostream &os, Person& p);
	friend std::istream & operator>>(istream &is, Person & p);
public:
	Person(string n="noname", int a=99):name(n),age(a){}
private:
	string name;
	int age;
};

std::ostream & operator<<(std::ostream &os, Person & p)
{
	os << p.name <<":"<< p.age;
	return os;
}
std::istream & operator>>(std::istream &is, Person & p)
{
	// probably suboptimal
	string text;
	size_t pos;
	stringstream tempStream;
	is >>text;
	pos=text.find(":");
	string myName=text.substr(0,pos);
	string myAge=text.substr(pos+1);
	int a;
	tempStream <<myAge;
	tempStream >> a;
	p.age=a;
	p.name=myName;
	//os << p.name <<":"<< p.age;
	return is;
}

int main()
{
	GridT<int> myGrid;
	cout << myGrid;
	getchar();
	GridT<Person> people;
	cout << people;
	getchar();
	return 0;
}

