// ArrayOfStructures+PointerToArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
An array of structures is created which accepts inputand displays output
structure name - person
datamember - name, age, salary
*/ 

#include <iostream>
#include <string> // include this for using 
using namespace std;

struct Person {

    string name;
    int age;
    double salary;
};

int main()
{
    Person p[2];
    cout << "enter 2 peoples details like name, age and salary" << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << "enter details of person" << (i + 1) << endl;
        cin >> p[i].name;
        cin >> p[i].age;
        cin >> p[i].salary;
    }

    cout << "Details of users" << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << "details of person" << (i + 1) << endl;
        cout << "name:" << p[i].name << endl;
        cout << "name:" << p[i].age << endl;
        cout << "name:" << p[i].salary << endl;
    }
    


    return 0;
}

