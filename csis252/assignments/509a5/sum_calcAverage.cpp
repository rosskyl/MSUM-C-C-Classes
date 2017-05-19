//Author:      Kyle Ross
//Assignment:  5
//Professor:   Brekke
//Due:         Oct 17, 2014
//Description: contains sum function which calculates the sum
//		of numbers(array) and returns sum
//		also calcAverage function which calculates the
//		average of numbers(array) and returns average

#include <iostream>
#include <iomanip>


int sum(const int numbers[], int count) {
    /*
     * description: calculates to total sum of numbers
     * input: numbers(array), count(int)
     * output: total(int)
     * preconditions: none
     * postconditions: total of all numbers in array returned
     */
    int total = 0;//total of all numbers
    
    for (int index = 0; index < count; index += 1) {
	total += numbers[index];
    }//end for loop
    return total;
}//end sum function


double calcAverage(const int numbers[], int count) {
    /*
     * description: calculates the average of numbers
     * input: numbers(array), count(int)
     * output: average(double)
     * preconditions: none
     * postconditions: average of all numbers returned
     */
    double average;//average of numbers
    
    average = sum(numbers, count) / static_cast<double>(count);
    return average;
}//end average function