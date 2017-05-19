//Author:      Kyle Ross
//Assignment:  5
//Professor:   Brekke
//Due:         Oct 17, 2014
//Description: contains lessThanAverage function which returns the amount 
//             of numbers less than the average in an array
//	       also contains greaterThanAverage function which returns the
//	       amount of numbers greater than the average in an array

#include <iostream>
#include <iomanip>

using namespace std;


int lessThanAverage(const int numbers[], int count, double average) {
    /*
     * description: calculates the number of ints less than the average
     * input: numbers(array), count(int), average(double)
     * output: numLessThanAverage(int)
     * preconditions: none
     * postconditions: numbers less than the average returned
     */
    int numsLessThanAverage = 0;//amount of numbers less than the average
    
    for (int index = 0; index < count; index += 1) {
	if (numbers[index] < average)
	    numsLessThanAverage += 1;
    }//end for loop
    return numsLessThanAverage;
}//end lessThanAverage function

int greaterThanAverage(const int numbers[], int count, double average) {
    /*
     * description: calculates the number of ints greater than the average
     * input: numbers(array), count(int), average(double)
     * output: numGreaterThanAverage(int)
     * preconditions: none
     * postconditions: numbers greater than the average returned
     */
    int numsGreaterThanAverage = 0;//amount of numbers less than the average
    
    for (int index = 0; index < count; index += 1) {
	if (numbers[index] > average)
	    numsGreaterThanAverage += 1;
    }//end for loop
    return numsGreaterThanAverage;
}//end greaterThanAverage function