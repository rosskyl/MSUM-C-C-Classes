//File:		printSummary.cpp
//Author:      Kyle Ross
//Assignment:  6
//Professor:   Brekke
//Due:         Oct 24, 2014
//Description:	contains the printSummary function which prints the employee
//		summary information to the given ofstream

#include "decl.h"
#include <iostream>
#include <iomanip>
#include <fstream>


void printSummary(employeeSummary summary, ofstream& outfile) {
    //Description:	prints the employee summary info to the given ofstream
    //Input:		summary(employeeSummary), outfile(ofstream)
    //Ouput:		none
    //Preconditions:	summary has totFedTax, totGrossPay, totNetPay,
    //			totSocialSec initialized
    //PostConditions:	the employee summary information is written
    //			to given ofstream
    
    outfile << fixed << setprecision(2) << showpoint;
    
    outfile << "Employee Summary Totals" << endl;
    outfile << "-----------------------" << endl;
    
    outfile << left << setw(35) << "Total Gross Pay:"
	 << right << setw(10) << summary.totGrossPay << endl;
    
    outfile << left << setw(35) << "Total Federal Withholding:"
	 << right << setw(10) << summary.totFedTax << endl;
    
    outfile << left << setw(35) << "Total Social Security Withheld:"
	 << right << setw(10) << summary.totSocialSec << endl;
    
    outfile << left << setw(35) << "Total Net Pay:"
	 << right << setw(10) << summary.totNetPay << endl;
    
    outfile << endl << endl;
}//end printSummary function