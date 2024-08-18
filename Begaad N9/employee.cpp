#include <string.h>
#include <iostream>
#include "employee.h"
using namespace std;
int employee::totalEmployees = 0;

employee::employee()
{
	totalEmployees++;
	age = 0;
	salary = 0;
	name = "unknown";
}



int employee::getTotalEmployees()
{
	return totalEmployees;
}



employee::employee(string n, int a, double s)
{
	totalEmployees++;
	name = n;
	age = a;
	salary = s;

}

employee::~employee()
{
	cout << "the life time has ended"<<endl;
}

employee employee::operator+(employee x)
{
	employee s;
	s.salary = salary + x.salary;
	
	return employee(s);
}

void employee::work()
{
	cout << "i am the base class called employee" << endl;
}

void employee::display()
{
	cout << "age: " << age << endl;
	cout << "salary: " <<salary << endl;
	cout << "name: " << name << endl;
}

void employee::total()
{
	cout << "total number of employees: " << totalEmployees << endl;
}
