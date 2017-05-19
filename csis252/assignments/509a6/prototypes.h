//File:		prototypes.h
//Author:      Kyle Ross
//Assignment:  6
//Professor:   Brekke
//Due:         Oct 24, 2014
//Description:	contains the function prototypes



void read(employee employees[], int& count);
void printEmployees(const employee employees[], int count, ofstream& outfile);
void calcEmployeeInfo(employee employees[], int count);
employeeSummary calcEmployeeSummary(employee employees[], int count);
void printSummary(employeeSummary summary, ofstream& outfile);