// Strcutures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


// A structure is created named "Person" to store name, age and salary

#include <iostream>
using namespace std;

/*
What aew Structures?
-A structure in C++ is a group of data elements grouped together under one name. These data elements, known 
as members, can have different types and different lengths. It is a user defined data tyoe which allows you to
combine data items of different kinds.
-Structures are user-defined data types
*/
/*
Scenario - imagine you want to store details of a person for e.g his name, age and salary. In a typical scenario
you will have to create 3 variables to store these values, but what if you have to store details of 20 people. Then
you will have to create 60 variables and that will be very tedious and inefficient.In such scenarios we can create a 
struct datatype named Person and include all the details as member variables of this datatype to create a custom 
datatype. We can then simply create 20 variables of this new structure datatype or a single array of size 20.
*/

//A struct is created outside the main

struct Person {
	char name[100];
	int age;
	double salary;
};

int main()
{
	Person p1;
	cout << "Person details" << endl << "Enter persons name:" << endl;
	cin.getline(p1.name, 100);
	cout << "Enter age" << endl;
	cin >> p1.age;
	cout << "Enter salary" << endl;
	cin >> p1.salary;

	cout << endl << "Persons details are as follows:" << endl;
	cout << "Persons name:" << p1.name << endl;
	cout << "Persons age:" << p1.age << endl;
	cout << "Persons salary:" << p1.salary << endl;


	return 0;
}

