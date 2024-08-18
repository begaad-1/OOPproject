#include "manager.h"
#include <iostream>
#include <string>
using namespace std;
void manager::display()
{
	employee::display();
	cout << "employees: " << numberOfEmployees << endl;
}

manager::manager()
{
	numberOfEmployees = 0;
		bonus = 0;
}

void manager::work()
{
	cout << "i am the manager class"<<endl;
}

void manager::displayEmployees()
{
	cout << "number of employees managed: " << numberOfEmployees << endl;
}

void manager::setBonus(double bonus)
{
	salary += bonus;
}

void manager::setBonus(double baseBonus, double performanceBonus)
{
	bonus = performanceBonus + baseBonus;
}
