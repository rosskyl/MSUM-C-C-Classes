//File:		decl.h
//Author:      Kyle Ross
//Assignment:  6
//Professor:   Brekke
//Due:         Oct 24, 2014
//Description:	contains structs for employee and employeeSummary

#include <string>
using namespace std;


struct employee {
    string empID;//employee id
    string name;//employee name
    double hours;//employee hours
    double wage;//employee wage
    double grossPay;//employee gross pay
    double fedTax;//employee federal tax payed
    double socialSec;//employee social security payed
    double netPay;//employee net pay
};//end employee struct

struct employeeSummary {
    double totGrossPay;//total gross pay for all employees
    double totFedTax;//total federal tax for all employees
    double totSocialSec;//total social security for all employees
    double totNetPay;//total net pay for all employees
};//end employeeSummary struct