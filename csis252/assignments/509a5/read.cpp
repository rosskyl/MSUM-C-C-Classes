//Author:      Kyle Ross
//Assignment:  5
//Professor:   Brekke
//Due:         Oct 17, 2014
//Description: contains read function which reads values from file input

#include <iostream>
#include <iomanip>
#include <fstream>

#include "constants.h"

using namespace std;


void read(int numbers[], int& count) {
    /*
     * description: reads values from file input
     * input: numbers(array), count(int)
     * output: numbers(array), count(int)
     * preconditions: none
     * postconditions: numbers updated, count updated
     */
    int num;//a placeholder for input
    count = 0;//initialize to 0
    ifstream infile;//file input
    
    infile.open("input");
    
    if (infile.fail())
      cerr << "error opening input file 'data'\n";
    else {
	infile >> num;
	while (!infile.eof() && count < ARRAY_SIZE) {
	    numbers[count] = num;
	    count += 1;
	    infile >> num;
	}//end while loop
	
	if (!infile.eof()) 
	    cout << "Warning the whole file was not read. Too many numbers" << endl;
    }//end else
    infile.close();
}//end read function
