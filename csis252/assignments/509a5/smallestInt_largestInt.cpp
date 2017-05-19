//Author:      Kyle Ross
//Assignment:  5
//Professor:   Brekke
//Due:         Oct 17, 2014
//Description: contains smallestInt function which outputs the
//		smallestInt and smallestIndex(index of smallestInt)
//		also largestInt function which outputs the 
//		largestInt and largestIndex(index of largestInt)

#include <iostream>
#include <iomanip>



void smallestInt(const int numbers[], int count, int& smallest, int& smallestIndex) {
    /*
     * description: finds the smallest int in numbers and the index of this int
     * input: numbers(array), count(int)
     * output: smallest(int), smallestIndex(int)
     * preconditions: none
     * postconditions: smallest updated, smallestIndex updated
     */
    smallest = numbers[0];//initialize to first number
    smallestIndex = 0;//initialize to 0
    for (int index = count - 1; index >= 0; index -= 1) {
	if (smallest > numbers[index]) {
	    smallest = numbers[index];
	    smallestIndex = index;
	}
    }//end for loop
}//end smallestInt function

void largestInt(const int numbers[], int count, int& largest, int& largestIndex) {
    /*
     * description: finds the largest int in numbers and the index of this int
     * input: numbers(array), count(int)
     * output: largest(int), largestIndex(int)
     * preconditions: none
     * postconditions: largestupdated, largestIndex updated
     */
    largest = numbers[0];//initialize to first number
    largestIndex = 0;//initialize to 0
    for (int index = 1; index < count; index += 1) {
	if (largest < numbers[index]) {
	    largest = numbers[index];
	    largestIndex = index;
	}//end if loop
    }//end for loop    
}//end largestInt function