#include "intern.h"

void intern::setproject(string p)
{
	project = p;
}

void intern::work()
{
	cout << "i am the intern class" << endl;
}

void intern::displayproject()
{
	cout << "the display of the project: "<<project << endl;
}

void intern::displayinfo()
{
	employee::display();
	cout << "project: " << project << endl;
}
