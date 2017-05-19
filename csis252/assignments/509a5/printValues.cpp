//Author:      Kyle Ross
//Assignment:  5
//Professor:   Brekke
//Due:         Oct 17, 2014
//Description: contains printValues function which prints the values
//		in an array to the given file stream

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void printValues(const int numbers[], int count, ofstream& outfile) {
    /*
     * description: prints the values of numbers to the filestream
     * input: numbers(array), count(int), outfile(ofstream)
     * output: none
     * preconditions: outfile already opened
     * postconditions: values of numbers printed to the filestream
     */
    for (int index = 0; index < count; index += 1)
	outfile << numbers[index] << " ";
    outfile << "" << endl;
}//end printValues function