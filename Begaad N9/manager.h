#pragma once
#include "employee.h"
#include <iostream>
#include <string>
using namespace std;


class manager :
    public employee
{
public:
	int numberOfEmployees;
	double bonus;
	void display();
	manager();
	void work();
	void displayEmployees();
	manager(string n, int a, double s, int number) : employee(n, a, s) {
		numberOfEmployees = number;
	}
	void setBonus(double bonus);
	void setBonus(double baseBonus, double performanceBonus);
};

