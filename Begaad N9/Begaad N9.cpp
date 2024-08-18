#include <string.h>
#include <iostream>
#include "employee.h"
#include "manager.h"
#include "intern.h"
using namespace std;
int main()
{
	employee x("begaad", 18, 8000);
	employee s("ahmed", 19, 10000);
	employee f = x + s;
	f.display();
	manager g("SiSi", 63, 999999, 1);
	g.display();
	cout << "the total number of employees: " << f.getTotalEmployees() << endl;
	employee* pointer;
	intern j;
	pointer = &j;
	pointer->work();
	intern k;
	k.setproject("working on");
	k.displayproject();
	k.displayinfo();

}
