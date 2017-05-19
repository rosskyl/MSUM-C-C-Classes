//File:		read.cpp
//Author:      Kyle Ross
//Assignment:  9
//Professor:   Brekke
//Due:         11/17/2014
//Description:	contains the read function which reads the file data
//		and creates objects employee into the array employees

#include "arrayListType.h"
#include "employeeType.h"
#include "dateType.h"
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;


void read(arrayListType<employeeType>& employees) {
    //Description:	contains the read function which reads the file data
    //			and creates objects employee into the array employees
    //Input:		employees(array of employee)
    //Ouput:		employees(array of employee)
    //Preconditions:	data exists and is in the format
    //				Employee name
    //				Employee Birthday
    //				Employee hours
    //				Employee wage
    //PostConditions:	the employee info is read from data and put into
    //			employees
    
    ifstream infile;//file to be read from
    dateType tmpBirthday;//birthday placeholder
    string tmpName;//name placeholder
    double tmpHours;//hours placeholder
    double tmpWage;//wage placeholder
    employeeType tmpEmployee;//employee placeholder
    
    infile.open("data");
    
    if (infile.fail())
	cerr << "Error reading input file 'data'" << endl;
    else {
	getline(infile, tmpName);
	infile >> tmpBirthday;
	infile >> tmpHours;
	infile >> tmpWage;
	
	while (! infile.eof() && employees.listSize() < employees.maxListSize()) {
	    tmpEmployee.setName(tmpName);
	    tmpEmployee.setBirthday(tmpBirthday);
	    tmpEmployee.setHours(tmpHours);
	    tmpEmployee.setWage(tmpWage);
	    
	    employees.insertEnd(tmpEmployee);
	    
	    infile.ignore(80,'\n');
	    getline(infile, tmpName);
	    infile >> tmpBirthday;
	    infile >> tmpHours;
	    infile >> tmpWage;
	}//end while loop
	if (! infile.eof())
	    cout << "Whole text file not read" << endl;
    }//end else
    infile.close();
}//end read fucntion