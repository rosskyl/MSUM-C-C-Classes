//File:		read.cpp
//Author:      Kyle Ross
//Assignment:  6
//Professor:   Brekke
//Due:         Oct 24, 2014
//Description:	contains the read function which reads the file data
//		and creates objects employee into the array employees

#include "constants.h"
#include "decl.h"
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;


void read(employee employees[], int& count) {
    //Description:	contains the read function which reads the file data
    //			and creates objects employee into the array employees
    //Input:		employees(array of employee), count(int)
    //Ouput:		employees(array of employee), count(int)
    //Preconditions:	data exists and is in the format
    //				Employee id
    //				Employee name
    //				Employee hours
    //				Employee wage
    //PostConditions:	the employee info is read from data and put into
    //			employees, count is the number of objects in emloyees
    
    ifstream infile;//file to be read from
    string tmpEmpID;//empID placeholder
    string tmpName;//name placeholder
    double tmpHours;//hours placeholder
    double tmpWage;//wage placeholder
    
    count = 0;
    
    infile.open("data");
    
    if (infile.fail())
	cerr << "Error reading input file 'data'" << endl;
    else {
	infile >> tmpEmpID;
	infile.ignore(80,'\n');
	getline(infile, tmpName);
	infile >> tmpHours;
	infile >> tmpWage;
	
	while (! infile.eof() && count < ARRAY_SIZE) {
	    employees[count].empID = tmpEmpID;
	    employees[count].name = tmpName;
	    employees[count].hours = tmpHours;
	    employees[count].wage = tmpWage;
	    count += 1;
	    
	    infile >> tmpEmpID;
	    infile.ignore(80,'\n');
	    getline(infile, tmpName);
	    
	    infile >> tmpHours;
	    infile >> tmpWage;
	}//end while loop
	if (! infile.eof())
	    cout << "Whole text file not read" << endl;
    }//end else
    infile.close();
}//end read fucntion