#pragma once
#include "employee.h"
#include <iostream>
#include <string>
using namespace std;

class intern :
    public employee

{
public :
    string project;
    void setproject(string p);
    void work();
    void displayproject();
    void displayinfo();
};

