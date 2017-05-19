//File:		calcEmployeeInfo.cpp
//Author:      Kyle Ross
//Assignment:  6
//Professor:   Brekke
//Due:         Oct 24, 2014
//Description:	Contains calcEmployeeInfo function which calculates employee
//		payroll info


#include "decl.h"
#include "constants.h"
#include <iostream>

using namespace std;


void calcEmployeeInfo(employee employees[], int count) {
    //Description:	Calculates employee payroll info for each employee
    //			in employees including gross pay, federal tax,
    //			social security, net pay
    //Input:		employees(array of employee), count(int)
    //Ouput:		employees(array of employee), count(int)
    //Preconditions:	count is the number of objects in employees and each
    //			object has the wage, hours initialized
    //PostConditions:	each object is assigned the grossPay, fedTax,
    //			socialSec, netPay
    
    double tmpGrossPay;//gross pay placeholder
    double hours;//hours placeholder
    double wage;//wage placeholder
    double tmpFedTax;//fedTax placeholder
    double tmpSocSec;//socialSec placeholer
    double tmpNetPay;//netPay placeholder
    
    for (int index=0; index<count; index+=1) {
	hours = employees[index].hours;
	wage = employees[index].wage;
	if (hours > 40) {//if employee has overtime
	    tmpGrossPay = 40 * wage;
	    tmpGrossPay += (hours - 40) * wage * 1.5;
	    employees[index].grossPay = tmpGrossPay;
	}//end if
	else {
	    tmpGrossPay = hours * wage;
	    employees[index].grossPay = tmpGrossPay;
	}//end else
	
	tmpFedTax = tmpGrossPay * FED_TAX_RATE;
	employees[index].fedTax = tmpFedTax;
	
	tmpSocSec = tmpGrossPay * SOC_SEC_RATE;
	employees[index].socialSec = tmpSocSec;
	
	tmpNetPay = tmpGrossPay - tmpFedTax - tmpSocSec;
	employees[index].netPay = tmpNetPay;
    }//end for loop
}//end calcEmployeeInfo function