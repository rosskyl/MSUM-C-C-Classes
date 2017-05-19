//File:		calcEmployeeSummary.cpp
//Author:      Kyle Ross
//Assignment:  6
//Professor:   Brekke
//Due:         Oct 24, 2014
//Description:	contains calcEmployeeSummary function which calculates the
//		summary for all employees


#include "decl.h"
#include <iostream>

using namespace std;


employeeSummary calcEmployeeSummary(employee employees[], int count) {
    //Description:	calculates the summary information for all employees
    //			including total gross pay, total federal tax,
    //			total social security, total net pay
    //Input:		employees(array of employee), count(int)
    //Ouput:		summary(employeeSummary)
    //Preconditions:	count is the number of objects in employees and each
    //			object has the grossPay, fedTax, socialSec, and netPay
    //			initialized
    //PostConditions:	summary is returned with totGrossPay, totFedTax,
    //			totSocialSec, totNetPay initialized
    
    double totGrossPay = 0;//totGrossPay placeholder
    double totFedTax = 0;//totFedTax placeholder
    double totSocSec = 0;//totSocialSec placeholder
    double totNetPay = 0;//totNetPay placeholder
    employeeSummary summary;//object to be returned
    
    for (int index=0; index<count; index+= 1) {
	totGrossPay += employees[index].grossPay;
	totFedTax += employees[index].fedTax;
	totSocSec += employees[index].socialSec;
	totNetPay += employees[index].netPay;
    }//end for loop
    summary.totGrossPay = totGrossPay;
    summary.totFedTax = totFedTax;
    summary.totSocialSec = totSocSec;
    summary.totNetPay = totNetPay;
    
    return summary;
}//end calcEmployeeSummary function