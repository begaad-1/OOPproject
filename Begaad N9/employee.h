#pragma once
#include <iostream>
#include <string>
using namespace std;
class employee
{
public :
	string name;
	int age;
	double salary;
	static int totalEmployees;
	void display();
	void total();
	employee();
	static int getTotalEmployees();
	employee(string n, int a, double s);
	~employee();
	employee operator+(employee x);
	virtual void work();
	
	
	
};

