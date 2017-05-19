//File:		main.cpp
//Author:	Kyle Ross
//Assignment:	9
//Professor:	Brekke
//Due:		11/17/2014
//Description:	main



#include "arrayListType.h"
#include "employeeType.h"
#include "prototypes.h"
#include <iostream>

using namespace std;


int main() {
    arrayListType<employeeType> employees;//list of all employees
    
    read(employees);
    
    output(employees);
    
    return 0;
}//end main