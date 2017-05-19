//File:		output.cpp
//Author:	Kyle Ross
//Assignment:	9
//Professor:	Brekke
//Due:		11/17/2014
//Description:	contains output function which outputs the data to file payroll

#include "arrayListType.h"
#include "employeeType.h"
#include "dateType.h"
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;


void output(arrayListType<employeeType>& employees){
    //Description:	outputs the employee info including name, birth year,
    //			hours, wage, gross pay, federal tax, social security,
    //			and net pay to the file payroll
    //Input:		employees(array of employee)
    //Ouput:		none
    //Preconditions:	none
    //PostConditions:	payroll created or overwritten
    
    
    ofstream outfile;//output file
    employeeType tmpEmployee;//temporary employee used for retrieval
    
    outfile.open("payroll");
    
    outfile << fixed << showpoint << setprecision(2);
    
    outfile << left << setw(22) << "Name";
    outfile << right << setw(5) << "Year";
    outfile << right << setw(8) << "Hours";
    outfile << right << setw(8) << "Wage";
    outfile << right << setw(10) << "Gross";
    outfile << right << setw(9) << "FedTax";
    outfile << right << setw(9) << "SSTax";
    outfile << right << setw(9) << "Net" << endl;
    
    outfile << "--------------------  -----  ------  ------  --------  -------"
	<< "  -------  -------" << endl;

    for (int i=0; i<employees.listSize(); i+=1) {
	employees.retrieveAt(i, tmpEmployee);
	outfile << left << setw(22) << tmpEmployee.getName();
	outfile << right << setw(5) << tmpEmployee.getBirthday().getYear();
	outfile << right << setw(8) << tmpEmployee.getHours();
	outfile << right << setw(8) << tmpEmployee.getWage();
	outfile << right << setw(10) << tmpEmployee.getGrossPay();
	outfile << right << setw(9) << tmpEmployee.getFedTax();
	outfile << right << setw(9) << tmpEmployee.getSSTax();
	outfile << right << setw(9) << tmpEmployee.getNetPay() << endl;
    }//end for loop
    outfile.close();
}//end output function