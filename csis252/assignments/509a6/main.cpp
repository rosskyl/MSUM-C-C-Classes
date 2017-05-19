//File:		main.cpp
//Author:      Kyle Ross
//Assignment:  6
//Professor:   Brekke
//Due:         Oct 24, 2014
//Description:	contains main function

#include "constants.h"
#include "decl.h"
#include <fstream>
#include "prototypes.h"

using namespace std;




int main() {
    employee employees[ARRAY_SIZE];
    employeeSummary summary;
    int count;
    ofstream outfile;
    
    outfile.open("payroll");
    
    read(employees, count);
    
    calcEmployeeInfo(employees, count);
    
    summary = calcEmployeeSummary(employees, count);
    
    printSummary(summary, outfile);
    
    printEmployees(employees, count, outfile);
    
    return 1;
}//end main