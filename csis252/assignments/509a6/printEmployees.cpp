//File:		printEmployees.cpp
//Author:      Kyle Ross
//Assignment:  6
//Professor:   Brekke
//Due:         Oct 24, 2014
//Description:	contains printEmployees function which prints the
//		employee info to the given ofstream

#include "decl.h"
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;


void printEmployees(const employee employees[], int count, ofstream& outfile) {
    //Description:	prints the employee info to the given ofstream
    //Input:		employees(array of employee), count(int),
    //			outfile(ofstream)
    //Ouput:		none
    //Preconditions:	count is the number of objects in employees and each
    //			object has the wage, hours, name, empID, grossPay,
    //			fedTax, socialSec, netPay initialized
    //PostConditions:	the employee information is written to given ofstream
    
    outfile << fixed << setprecision(2) << showpoint << left;
    
    outfile << setw(5) << "ID" << setw(22) << "Name"
	 << setw(8) << "Hours" << setw(7) << "Wage"
	 << setw(8) << "Gross" << setw(8) << "Fed"
	 << setw(8) << "SS" << setw(8) << "Net" << endl;
    
    outfile << "---- --------------------  ------  "
	 << "-----  ------  ------  ------  ------" << endl;
    
    for (int index=0; index<count; index+=1) {
	outfile << setw(5) << employees[index].empID 
	     << setw(22) << employees[index].name
	     << setw(8) << employees[index].hours 
	     << setw(7) << employees[index].wage
	     << setw(8) << employees[index].grossPay 
	     << setw(8) << employees[index].fedTax
	     << setw(8) << employees[index].socialSec 
	     << setw(8) << employees[index].netPay << endl;
    }//end for loop
}//end printEmployees function